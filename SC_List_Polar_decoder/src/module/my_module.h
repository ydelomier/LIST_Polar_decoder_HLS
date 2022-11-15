#ifndef _my_module_
#define _my_module_

#include "systemc.h"

#include "polar_parameters.h"

#include "config.h"

#include "../../../shared/src/library.h"
#include "../../../shared/src/sc_list_fct.h"

#ifndef __SYNTHESIS__
#include <stdlib.h>
#endif

//#define SIMU

//#define DEBUG_LIGHT
//#define DEBUG

SC_MODULE(my_module)
{
	sc_in <bool> clk;
	sc_in <bool> reset;

	// Monitor
#ifdef _MONITORING_
	sc_out <bool> busy;
	sc_out <bool> load;
	sc_out <bool> store;
	sc_out <int> N_value;
	sc_out < sc_uint<8> > Fct_ID;  // F: 0x88, G: 0x48, H: 0x28, R: 0x18
	  	  	  	  	  	  	  	  // R0: 0x00, R1: 0x0F, REP: 0x02, SPC: 0x04
#endif
	//

    sc_fifo_in < BIT > FB;

    sc_fifo_in < TYPE_LLRS > e;
    sc_fifo_out< TYPE_BITS > s;

	SC_CTOR(my_module) :
		enable ("en")
	{
		SC_CTHREAD(do_frozen_bit, clk.pos());
		reset_signal_is(reset,true);

		SC_CTHREAD(do_action, clk.pos());
		reset_signal_is(reset,true);
	}

private:

	sc_signal < bool > enable;

#ifndef SIMU
	TYPE_LLRS llr_mem_a[L_SIZE][N_DIVIDED];
	TYPE_LLRS llr_mem_b[L_SIZE][N_DIVIDED];

	TYPE_BITS bit_mem_1[L_SIZE][N_DIVIDED];
	TYPE_BITS bit_mem_2[L_SIZE][N_DIVIDED];
#endif
	
	sc_bv<PAR> Bit_Frozen[N_DIVIDED];
	
	sc_biguint<LOG2_L * _DEPTH> LIST_STACK [L_SIZE];

	sc_biguint<8> _METRIC[L_SIZE];
	
	sc_bigint<PAR> temp_bit [L_SIZE];  // temporary memory for H function, to avoid R/W conflict between list

	TYPE_LLRS temp_llr_a [L_SIZE];  // temporary memory for F/G function, to avoid R/W conflict between list
	TYPE_LLRS temp_llr_b [L_SIZE];  // temporary memory for F/G function, to avoid R/W conflict between list

	TYPE_LLRS reg_result[L_SIZE];

	void do_frozen_bit(){

		bool finish = false;
		enable.write(false);
		wait();

		while(true){

			if(finish == false)
			{

				for( COUNTER i = 0; i < N_DIVIDED; i++)
				{
					BIT fb;

					sc_bv<PAR> tab_FB;

					for(COUNTER k = 0; k < PAR; k++)
					{
						fb = FB.read();
						tab_FB.range(k,k) = (sc_bv<1>) fb ;
					}

					Bit_Frozen[i] = tab_FB;
				}

				enable.write(true);
			}

			finish = true;
			wait();
		}
	}


/*********************************************************************************/
/*** 								DECODER PROCESS							   ***/
/*********************************************************************************/

	void do_action(){
#pragma HLS ARRAY_PARTITION variable=llr_mem_a complete dim=1
#pragma HLS ARRAY_PARTITION variable=llr_mem_b complete dim=1
#pragma HLS ARRAY_PARTITION variable=bit_mem_1 complete dim=1
#pragma HLS ARRAY_PARTITION variable=bit_mem_2 complete dim=1
#pragma HLS ARRAY_PARTITION variable=LIST_STACK complete dim=1
#pragma HLS ARRAY_PARTITION variable=_METRIC complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp_bit complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp_llr_a complete dim=1
#pragma HLS ARRAY_PARTITION variable=temp_llr_b complete dim=1
#pragma HLS ARRAY_PARTITION variable=reg_result complete dim=1

#ifdef SIMU
	TYPE_LLRS **llr_mem_a = new TYPE_LLRS*[L_SIZE];
	TYPE_LLRS **llr_mem_b = new TYPE_LLRS*[L_SIZE];

	TYPE_BITS **bit_mem_1 = new TYPE_BITS*[L_SIZE];
	TYPE_BITS **bit_mem_2 = new TYPE_BITS*[L_SIZE];

	for(int i = 0; i < L_SIZE; i++)
		llr_mem_a[i] = new TYPE_LLRS[N_DIVIDED];
	for(int i = 0; i < L_SIZE; i++)
		llr_mem_b[i] = new TYPE_LLRS[N_DIVIDED];
	for(int i = 0; i < L_SIZE; i++)
		bit_mem_1[i] = new TYPE_BITS[N_DIVIDED];
	for(int i = 0; i < L_SIZE; i++)
		bit_mem_2[i] = new TYPE_BITS[N_DIVIDED];
#endif

		COUNTER ptr_FB = 0;
		sc_bv<PAR> Is_Frozen = 0;
		COUNTER N_REG = 0;
		COUNTER NB_ITER = 0;
		bool R_State_condition = 0;

		// Pointer llr_mem
		COUNTER adr_a = 0;
		COUNTER adr_b = 0;
		COUNTER adr_w_a = 0;
		COUNTER adr_w_b = 0;
		//Pointer bit_mem
		COUNTER adr_s = 0;
		COUNTER ps_adr_a = 0;
		COUNTER ps_adr_b = 0;
		COUNTER ps_adr = 0;

		COUNTER i = 0;

		// stack
		sc_biguint<DEPTH_DIV * 2> stack = (sc_biguint<DEPTH_DIV * 2>) 0;

		// FSM
		typedef enum{
			INIT,
			F_STATE,
			R_STATE,
			G_STATE,
			H_STATE,
			END,
		}state;

		state current_state = INIT;
		state next_state;

#ifdef _MONITORING_
		load.write(false);
		store.write(false);
		busy.write(false);
		N_value.write(0);
		Fct_ID.write(0);
#endif

		// Init array of reg
		for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
		{
		#pragma HLS UNROLL
			LIST_STACK[j] = 0;
		}

		wait();
////////////// RESET  //////////////

		while(true){

			switch (current_state)
			{

			/**************************************************************/

				case INIT :
				{

					// Load Frame to memory
#ifdef _MONITORING_
					store.write(false);
					load.write(true);
#endif

					load_loop_a: for (i = 0; i < (N_DIVIDED >> 1); i++)
					{
					#pragma HLS PIPELINE
						TYPE_LLRS value = e.read();
						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL
							llr_mem_a[j][i] = value;
						}
		#ifndef __SYNTHESIS__
						wait();
		#endif
					}

					load_loop_b: for ( i = 0; i < (N_DIVIDED >> 1); i++)
					{
					#pragma HLS PIPELINE
						TYPE_LLRS value = e.read();
						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL
							llr_mem_b[j][i] = value;
						}
		#ifndef __SYNTHESIS__
						wait();
		#endif
					}

					////////////// INITIALIZATION  //////////////

					// Wait for Frozen Bit initialization
					while( enable.read() == false)
						wait();


					// Init List metric
					_METRIC[0] = 0;   // Init first metric to 0; the other to +inf
					for(sc_uint<LOG2_L+1> j = 1; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						_METRIC[j] = MAX_VAL;
					}

					// Init path stack to first LLR mem
					for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						LIST_STACK[j] = push_stack <LOG2_L, _DEPTH >( LIST_STACK[j] , (sc_biguint<LOG2_L>) j );
					}


					// Initialize pointer
					ptr_FB = 0;
					Is_Frozen = Bit_Frozen[ptr_FB];
					N_REG = N_DIVIDED;
					adr_a = 0;
					adr_b = 0;
					adr_w_a = (N_DIVIDED >> 1);
					adr_w_b = (N_DIVIDED >> 1);
					adr_s = 0;
					stack = 0;
					next_state = F_STATE;

					break;
				}

			/**************************************************************/

				case F_STATE:
				{
#ifdef _MONITORING_
					load.write(false);
					busy.write(true);
					N_value.write((int) N_REG );
					Fct_ID.write(0x88);
#endif

					NB_ITER = (N_REG >> 1);
					N_REG = (N_REG >> 1);

					stack = push_stack< 2, DEPTH_DIV >( stack, (sc_biguint<2>) 0); // Stack management

#ifdef DEBUG_LIGHT
cout << "	+++++ [F_STATE]  N_value : " << N_REG << ", iteration : "<< NB_ITER << ", adr_a : "<< adr_a << ", adr_b : "<< adr_b << ", w_a : "<< adr_w_a << ", w_b : "<< adr_w_b << endl;
#endif

					COUNTER i_adr_a = adr_a;
					COUNTER i_adr_b = adr_b;
					COUNTER i_adr_w_a = adr_w_a;
					COUNTER i_adr_w_b = adr_w_b;

					f_loop: for( i = 0; i < NB_ITER ; i++)
					{
					#pragma HLS DEPENDENCE variable=llr_mem_b array inter RAW false
					#pragma HLS DEPENDENCE variable=llr_mem_a array inter RAW false
					#pragma HLS PIPELINE

#ifdef DEBUG
cout << "	+++++ [F_STATE] " << endl;
#endif

						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL

							TYPE_LLRS la = llr_mem_a[j][i_adr_a + i];
							TYPE_LLRS lb = llr_mem_b[j][i_adr_b + i];

							TYPE_LLRS result = PU_FUNCTION_F< PAR, LLR_BITS > (la, lb);

							reg_result[j] = result; // Register for R_STATE

#ifdef DEBUG
cout << "			| LIST : "<< j << " |" << endl;
cout << "					la =  "; SHOW_LLRS<PAR, LLR_BITS >(la); cout << endl;
cout << "					lb =  "; SHOW_LLRS<PAR, LLR_BITS >(lb); cout << endl;
cout << "					rs =  "; SHOW_LLRS<PAR, LLR_BITS >(result); cout << endl;
#endif

							if(NB_ITER == 1){
								llr_mem_a[j][i_adr_w_a] = result;
							}
							else{
								if(i < (NB_ITER >> 1)){
									llr_mem_a[j][i_adr_w_a + i] = result;
								}
								else{
									llr_mem_b[j][i_adr_w_b + i - (NB_ITER >> 1)] = result;
								}
							}

						}

#ifndef __SYNTHESIS__
					wait();
#endif
					}

					//// List Stack management  ////
					for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						LIST_STACK[j] = push_stack <LOG2_L, _DEPTH >( LIST_STACK[j] , (sc_biguint<LOG2_L>) j );
					}
					////////////////////////////////

					if(N_REG > 1){
						adr_a += NB_ITER;
						adr_b += NB_ITER;
						adr_w_a += (NB_ITER >> 1);
						adr_w_b += (NB_ITER >> 1);
						next_state = F_STATE; break; //next state : F_STATE; Rate ?
					}
					else{
						R_State_condition = true;
						next_state = R_STATE; //next state : R_STATE;
					}
					break;
				}

			/**************************************************************/

				case R_STATE:
				{

#ifdef _MONITORING_
					N_value.write((int)N_REG);
					Fct_ID.write(0x18);
#endif

					ptr_FB += 1;

					TYPE_BITS ps;

#ifdef DEBUG_LIGHT
cout << "	_____ [R_STATE]  N_value : " << N_REG << ", FB : "<< Is_Frozen << ", adr_s : " << adr_s <<endl;
#endif

					LLR_struct<PAR,LLR_BITS,LOG2_L> input[L_SIZE];
					PS_struct<PAR,LLR_BITS,LOG2_L> output[L_SIZE];

#ifdef DEBUG
cout << "	_____ [R_STATE]   INPUT " << endl;
cout << " 					FB = " << (sc_bv<PAR>) Is_Frozen << " , ptr : " << ptr_FB << endl;
#endif
					for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						input[j].llr = reg_result[j];
						input[j].metric = _METRIC[j];
						input[j].path = j;
#ifdef DEBUG
cout << "			| LIST : "<< j << " |" << endl;
cout << "					llr=  "; SHOW_LLRS<PAR, LLR_BITS >(reg_result[j]); cout << endl;
cout << "					met=  "; SHOW_LLRS<PAR, LLR_BITS >(_METRIC[j]); cout << endl;
cout << "					pat=    " << j << endl;
#endif
					}

					Spec_LIST_Decoder <PAR, L_SIZE,LLR_BITS,LOG2_L, _DEPTH> (input, output, Is_Frozen, LIST_STACK);

#ifdef DEBUG
cout << "	_____ [R_STATE]   OUTPUT " << endl;
#endif
					for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						bit_mem_1[j][adr_s] = output[j].bit;
						bit_mem_2[j][adr_s] = output[j].bit;
						_METRIC[j] = output[j].metric;
#ifdef DEBUG
cout << "			| LIST : "<< j << " |" << endl;
cout << "					bit=  "; SHOW_LLRS<PAR, LLR_BITS >(output[j].bit); cout << endl;
cout << "					met=  "; SHOW_LLRS<PAR, LLR_BITS >(output[j].metric); cout << endl;
cout << "					pat=    " << output[j].path << endl;
#endif
					}
					adr_s++;
					if( ptr_FB < N_DIVIDED) {
						Is_Frozen = Bit_Frozen[ptr_FB];
					}


#ifndef __SYNTHESIS__
					wait();
#endif

					////
					if(R_State_condition == true){
						ps_adr = adr_s - N_REG;

						next_state = G_STATE; break; //next state : G_STATE; Rate ?
					}
					else{
						ps_adr_a = adr_s - (N_REG << 1);
						ps_adr_b = adr_s - N_REG;
						next_state = H_STATE;
					}
					break;
				}

			/**************************************************************/

				case G_STATE:
				{
					NB_ITER = N_REG;

#ifdef _MONITORING_
					N_value.write( (int)(N_REG<<1) );
					Fct_ID.write(0x48);
#endif

					stack = write_stack< 2, DEPTH_DIV >( stack, (sc_biguint<2>) 1); // Stack management

					//// List Stack management  ////
					for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						LIST_STACK[j] = write_stack <LOG2_L, _DEPTH > ( LIST_STACK[j] , (sc_biguint<LOG2_L>) j );
					}
					////////////////////////////////

#ifdef DEBUG_LIGHT
cout << "	같같� [G_STATE]  N_value : " << N_REG << ", iteration : "<< NB_ITER << ", adr_a : "<< adr_a << ", adr_b : "<< adr_b << ", ps_adr : " << ps_adr << ", w_a : "<< adr_w_a << ", w_b : "<< adr_w_b  << endl;
#endif

					COUNTER i_adr_a = adr_a;
					COUNTER i_adr_b = adr_b;
					COUNTER i_ps_adr = ps_adr;
					COUNTER i_adr_w_a = adr_w_a;
					COUNTER i_adr_w_b = adr_w_b;

					g_loop: for( i = 0; i < NB_ITER ; i++)
					{
					#pragma HLS DEPENDENCE variable=llr_mem_b array inter RAW false
					#pragma HLS DEPENDENCE variable=llr_mem_a array inter RAW false
					#pragma HLS PIPELINE

#ifdef DEBUG
cout << "	같같� [G_STATE] " << endl;
#endif

						// copy the i row of llr to avoid R/W conflict between list
						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL
							temp_llr_a[j] = llr_mem_a[j][i_adr_a + i];
							temp_llr_b[j] = llr_mem_b[j][i_adr_b + i];
						}

						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL

							sc_biguint<LOG2_L> a_l_llr = read_stack< LOG2_L, _DEPTH > (LIST_STACK[j], 2);

							// Select the right LLR between the L list
							TYPE_LLRS la = MUX_LIST < L_SIZE, PAR*LLR_BITS, LOG2_L> ( temp_llr_a, a_l_llr);
							TYPE_LLRS lb = MUX_LIST < L_SIZE, PAR*LLR_BITS, LOG2_L> ( temp_llr_b, a_l_llr);

							TYPE_BITS sa = bit_mem_1[j][i_ps_adr + i];

							TYPE_LLRS result = PU_FUNCTION_G< PAR, LLR_BITS > (la, lb, sa);

							reg_result[j] = result; // Register for R_STATE
#ifdef DEBUG
cout << "			| LIST : "<< j << " |" << endl;
cout << "					alL=  	" << a_l_llr << endl;
cout << "					la =  "; SHOW_LLRS<PAR, LLR_BITS >(la); cout << endl;
cout << "					lb =  "; SHOW_LLRS<PAR, LLR_BITS >(lb); cout << endl;
cout << "					sa =  "; SHOW_BITS<PAR >(sa); cout << endl;
cout << "					rs =  "; SHOW_LLRS<PAR, LLR_BITS >(result); cout <<endl;
#endif

							if(NB_ITER == 1){
								llr_mem_b[j][i_adr_w_b] = result;
							}
							else{
								if(i < (NB_ITER >> 1)){
									llr_mem_a[j][i_adr_w_a + i] = result;
								}
								else{
									llr_mem_b[j][i_adr_w_b + i - (NB_ITER >> 1)] = result;
								}
							}
						}

#ifndef __SYNTHESIS__
						wait();
#endif
					}


					////
					if(N_REG > 1){
						adr_a += NB_ITER;
						adr_b += NB_ITER;
						ps_adr += NB_ITER;
						adr_w_a += (NB_ITER >> 1);
						adr_w_b += (NB_ITER >> 1);
						next_state = F_STATE; break; //next state : F_STATE; Rate ?
					}
					else{
						R_State_condition = false;
						next_state = R_STATE;
					}
					break;
				}

			/**************************************************************/

				case H_STATE :
				{
					NB_ITER = N_REG;
					N_REG = (N_REG << 1);

#ifdef _MONITORING_
					N_value.write( (int) N_REG );
					Fct_ID.write(0x28);
#endif

					stack = pop_stack< 2, DEPTH_DIV >( stack, (sc_biguint<2>) 0);// Stack management

#ifdef DEBUG_LIGHT
cout << "	----- [H_STATE]  N_value : " << N_REG << ", iteration : "<< NB_ITER << ", ps_adr_a : " <<ps_adr_a << ", ps_adr_b : " <<ps_adr_b << endl;
#endif
					////

					COUNTER i_ps_adr_a = ps_adr_a;
					COUNTER i_ps_adr_b = ps_adr_b;

					h_loop: for( i = 0; i < NB_ITER ; i++)
					{
					#pragma HLS DEPENDENCE variable=bit_mem_1 array inter RAW false
					#pragma HLS DEPENDENCE variable=bit_mem_2 array inter RAW false
					#pragma HLS PIPELINE

#ifdef DEBUG
cout << "	----- [H_STATE] " << endl;
#endif

						// copy the i row of bit_mem to avoid R/W conflict between list
						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL
							temp_bit[j] = bit_mem_1[j][i_ps_adr_a + i];
						}

						for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
						{
						#pragma HLS UNROLL

							sc_biguint<LOG2_L> a_list = read_stack< LOG2_L, _DEPTH > (LIST_STACK[j], 1);

							TYPE_BITS sa = (TYPE_BITS) MUX_LIST <L_SIZE, PAR, LOG2_L> ( temp_bit, a_list);
							TYPE_BITS sb = bit_mem_2[j][i_ps_adr_b + i];

							TYPE_BITS a_xor_b = PU_FUNCTION_H< PAR > (sa, sb);

#ifdef DEBUG
cout << "			| LIST : "<< j << " |" << endl;
cout << "					a_l=  	" << a_list << endl;
cout << "					sa =  "; SHOW_BITS<PAR >(sa); cout << endl;
cout << "					sb =  "; SHOW_BITS<PAR >(sb); cout << endl;
cout << "					rs =  "; SHOW_BITS<PAR >(a_xor_b); cout << endl;
#endif

							bit_mem_1[j][i_ps_adr_a + i] = a_xor_b;
							bit_mem_2[j][i_ps_adr_a + i] = a_xor_b;
						}

#ifndef __SYNTHESIS__
						wait();
#endif
					}

					//// List Stack management  ////
					for(sc_uint<LOG2_L+1> j = 0; j < L_SIZE; j++)
					{
					#pragma HLS UNROLL
						LIST_STACK[j] = pop_stack <LOG2_L, _DEPTH >( LIST_STACK[j] , (sc_biguint<LOG2_L>) 0 );
					}
					////////////////////////////////

					adr_a 	-= N_REG;
					adr_b 	-= N_REG;
					adr_w_a -= NB_ITER;
					adr_w_b -= NB_ITER;

					////
					sc_uint<2> condition = read_stack< 2, DEPTH_DIV >( stack, 1 ); // test first element of stack

					if( condition == 1){
						ps_adr_a = adr_s - (N_REG << 1);
						ps_adr_b = adr_s - N_REG;
						next_state = H_STATE;
					}
					else{
						if(ptr_FB == N_DIVIDED )
							next_state = END;
						else{
							ps_adr = adr_s - N_REG;
							next_state = G_STATE; break; //next state : G_STATE; Rate ?
						}
					}
					break;
				}

				/**************************************************************/
				/////////// FINISH /////////////////
				case END:
				{
						// Send decoded Frame
#ifdef DEBUG_LIGHT
					cout << "(DEBUG) send decoded frame " << endl;
#endif

	#ifdef _MONITORING_
					busy.write(false);
					store.write(true);
	#endif
					send_loop: for ( i = 0; i < N_DIVIDED; i++)
					{
						#pragma HLS PIPELINE
						s.write(bit_mem_1[0][i]);
	#ifndef __SYNTHESIS__
						wait();
	#endif
					}
					next_state = INIT;
					break;
				}

			}

			current_state = next_state;

		}
#ifdef SIMU
	for(int i = 0; i < L_SIZE; i++)
		delete[] llr_mem_a[i];
	for(int i = 0; i < L_SIZE; i++)
		delete[] llr_mem_b[i];
	for(int i = 0; i < L_SIZE; i++)
		delete[] bit_mem_1[i];
	for(int i = 0; i < L_SIZE; i++)
		delete[] bit_mem_2[i];

	delete[] llr_mem_a;
	delete[] llr_mem_b;
	delete[] bit_mem_1;
	delete[] bit_mem_2;
#endif
	}
};


#endif
