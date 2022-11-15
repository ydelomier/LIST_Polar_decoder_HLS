template < int Q >
void RANKORDER_SORT_L4 (PS_struct<1,Q,2> input[8], PS_struct<1,Q,2> output[4], sc_biguint<1> fb)
{
#pragma HLS INLINE off

	sc_uint<1>   x0x1, x0x2, x0x3, x0x4, x0x5, x0x6 ;
	sc_uint<1>   x1x2, x1x3, x1x4, x1x5, x1x6 ;
	sc_uint<1>   x2x3, x2x4, x2x5, x2x6 ;
	sc_uint<1>   x3x4, x3x5, x3x6 ;
	sc_uint<1>   x4x5, x4x6 ;
	sc_uint<1>   x5x6 ;

	sc_uint<3> P0, P1, P2, P3, P4, P5, P6 ;
	PS_struct<1,Q,2> temp[7];
#pragma HLS ARRAY_PARTITION variable=temp complete dim=1


// ON AJUSTE LES ENTREES EN FONCTION DE FB

	if (fb == 0){ 
		input[6] = input[3];
		input[7].metric = MAX_VAL;
		input[5] = input[2]; 
		input[3] = input[1]; 
		input[1] = input[0]; 
		input[0].metric = 0;
		input[2].metric = 0;
		input[4].metric = 0;
	} 
  // ON REALISE LES COMPARAISONS

	x0x1 = 0; 
	x0x2 = 0; 
	x0x3 = 0; 
	x0x4 = 0; 
	x0x5 = 0; 
	x0x6 = 0; 

	x1x2 = COMP <Q, 2> (&input[ 1 ], &input[ 2 ]); 
	x1x3 = COMP <Q, 2> (&input[ 1 ], &input[ 3 ]); 
	x1x4 = COMP <Q, 2> (&input[ 1 ], &input[ 4 ]); 
	x1x5 = COMP <Q, 2> (&input[ 1 ], &input[ 5 ]); 
	x1x6 = COMP <Q, 2> (&input[ 1 ], &input[ 6 ]); 

	x2x3 = 0; 
	x2x4 = 0; 
	x2x5 = 0; 
	x2x6 = 0; 

	x3x4 = COMP <Q, 2> (&input[ 3 ], &input[ 4 ]); 
	x3x5 = COMP <Q, 2> (&input[ 3 ], &input[ 5 ]); 
	x3x6 = COMP <Q, 2> (&input[ 3 ], &input[ 6 ]); 

	x4x5 = 0; 
	x4x6 = 0; 

	x5x6 = COMP <Q, 2> (&input[ 5 ], &input[ 6 ]); 


// ON CALCULE LES POSITIONS DES DONNEES EN SORTIE

	P0 = (sc_uint<3>) x0x1 + (sc_uint<3>) x0x2 + (sc_uint<3>) x0x3 + (sc_uint<3>) x0x4 + (sc_uint<3>) x0x5 + (sc_uint<3>) x0x6;
	P1 = (sc_uint<3>) ~x0x1 + (sc_uint<3>) x1x2 + (sc_uint<3>) x1x3 + (sc_uint<3>) x1x4 + (sc_uint<3>) x1x5 + (sc_uint<3>) x1x6;
	P2 = (sc_uint<3>) ~x0x2 + (sc_uint<3>) ~x1x2 + (sc_uint<3>) x2x3 + (sc_uint<3>) x2x4 + (sc_uint<3>) x2x5 + (sc_uint<3>) x2x6;
	P3 = (sc_uint<3>) ~x0x3 + (sc_uint<3>) ~x1x3 + (sc_uint<3>) ~x2x3 + (sc_uint<3>) x3x4 + (sc_uint<3>) x3x5 + (sc_uint<3>) x3x6;
	P4 = (sc_uint<3>) ~x0x4 + (sc_uint<3>) ~x1x4 + (sc_uint<3>) ~x2x4 + (sc_uint<3>) ~x3x4 + (sc_uint<3>) x4x5 + (sc_uint<3>) x4x6;
	P5 = (sc_uint<3>) ~x0x5 + (sc_uint<3>) ~x1x5 + (sc_uint<3>) ~x2x5 + (sc_uint<3>) ~x3x5 + (sc_uint<3>) ~x4x5 + (sc_uint<3>) x5x6;
	P6 = (sc_uint<3>) ~x0x6 + (sc_uint<3>) ~x1x6 + (sc_uint<3>) ~x2x6 + (sc_uint<3>) ~x3x6 + (sc_uint<3>) ~x4x6 + (sc_uint<3>) ~x5x6;

// ON MULTIPLEXE LES DONNEES EN SORTIE

	temp[0] = input[0]; 

	if ( P1 == 1 )
		temp[1] = input[1]; 
	else	if ( P2 == 1 )
		temp[1] = input[2]; 

	if ( P1 == 2 )
		temp[2] = input[1]; 
	else	if ( P2 == 2 )
		temp[2] = input[2]; 
	else	if ( P3 == 2 )
		temp[2] = input[3]; 
	else	if ( P4 == 2 )
		temp[2] = input[4]; 

	if ( P1 == 3 )
		temp[3] = input[1]; 
	else	if ( P3 == 3 )
		temp[3] = input[3]; 
	else	if ( P4 == 3 )
		temp[3] = input[4]; 
	else	if ( P5 == 3 )
		temp[3] = input[5]; 
	else	if ( P6 == 3 )
		temp[3] = input[6]; 

	if ( P1 == 4 )
		temp[4] = input[1]; 
	else	if ( P3 == 4 )
		temp[4] = input[3]; 
	else	if ( P4 == 4 )
		temp[4] = input[4]; 
	else	if ( P5 == 4 )
		temp[4] = input[5]; 
	else	if ( P6 == 4 )
		temp[4] = input[6]; 

	if ( P1 == 5 )
		temp[5] = input[1]; 
	else	if ( P3 == 5 )
		temp[5] = input[3]; 
	else	if ( P5 == 5 )
		temp[5] = input[5]; 
	else	if ( P6 == 5 )
		temp[5] = input[6]; 

	if ( P1 == 6 )
		temp[6] = input[1]; 
	else	if ( P3 == 6 )
		temp[6] = input[3]; 
	else	if ( P5 == 6 )
		temp[6] = input[5]; 
	else	if ( P6 == 6 )
		temp[6] = input[6]; 


// ON AJUSTE LES SORTIE EN FONCTION DE FB

	if (fb == 0){ 
		output[0] = temp[3]; 
		output[1] = temp[4]; 
		output[2] = temp[5]; 
		output[3] = temp[6]; 
	} 
	else{ 
		output[0] = temp[0]; 
		output[1] = temp[1]; 
		output[2] = temp[2]; 
		output[3] = temp[3]; 
	} 
} 
