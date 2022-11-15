template < int Q >
void RANKORDER_SORT_L8 (PS_struct<1,Q,3> input[16], PS_struct<1,Q,3> output[8], sc_biguint<1> fb)
{
#pragma HLS INLINE off

	sc_uint<1>   x0x1, x0x2, x0x3, x0x4, x0x5, x0x6, x0x7, x0x8, x0x9, x0x10, x0x11, x0x12, x0x13, x0x14 ;
	sc_uint<1>   x1x2, x1x3, x1x4, x1x5, x1x6, x1x7, x1x8, x1x9, x1x10, x1x11, x1x12, x1x13, x1x14 ;
	sc_uint<1>   x2x3, x2x4, x2x5, x2x6, x2x7, x2x8, x2x9, x2x10, x2x11, x2x12, x2x13, x2x14 ;
	sc_uint<1>   x3x4, x3x5, x3x6, x3x7, x3x8, x3x9, x3x10, x3x11, x3x12, x3x13, x3x14 ;
	sc_uint<1>   x4x5, x4x6, x4x7, x4x8, x4x9, x4x10, x4x11, x4x12, x4x13, x4x14 ;
	sc_uint<1>   x5x6, x5x7, x5x8, x5x9, x5x10, x5x11, x5x12, x5x13, x5x14 ;
	sc_uint<1>   x6x7, x6x8, x6x9, x6x10, x6x11, x6x12, x6x13, x6x14 ;
	sc_uint<1>   x7x8, x7x9, x7x10, x7x11, x7x12, x7x13, x7x14 ;
	sc_uint<1>   x8x9, x8x10, x8x11, x8x12, x8x13, x8x14 ;
	sc_uint<1>   x9x10, x9x11, x9x12, x9x13, x9x14 ;
	sc_uint<1>   x10x11, x10x12, x10x13, x10x14 ;
	sc_uint<1>   x11x12, x11x13, x11x14 ;
	sc_uint<1>   x12x13, x12x14 ;
	sc_uint<1>   x13x14 ;

	sc_uint<4> P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14 ;
	PS_struct<1,Q,3> temp[15];
#pragma HLS ARRAY_PARTITION variable=temp complete dim=1


// ON AJUSTE LES ENTREES EN FONCTION DE FB

	if (fb == 0){ 
		input[14] = input[7];
		input[15].metric = MAX_VAL;
		input[13] = input[6]; 
		input[11] = input[5]; 
		input[9] = input[4]; 
		input[7] = input[3]; 
		input[5] = input[2]; 
		input[3] = input[1]; 
		input[1] = input[0]; 
		input[0].metric = 0;
		input[2].metric = 0;
		input[4].metric = 0;
		input[6].metric = 0;
		input[8].metric = 0;
		input[10].metric = 0;
		input[12].metric = 0;
	} 
  // ON REALISE LES COMPARAISONS

	x0x1 = 0; 
	x0x2 = 0; 
	x0x3 = 0; 
	x0x4 = 0; 
	x0x5 = 0; 
	x0x6 = 0; 
	x0x7 = 0; 
	x0x8 = 0; 
	x0x9 = 0; 
	x0x10 = 0; 
	x0x11 = 0; 
	x0x12 = 0; 
	x0x13 = 0; 
	x0x14 = 0; 

	x1x2 = COMP <Q, 3> (&input[ 1 ], &input[ 2 ]); 
	x1x3 = COMP <Q, 3> (&input[ 1 ], &input[ 3 ]); 
	x1x4 = COMP <Q, 3> (&input[ 1 ], &input[ 4 ]); 
	x1x5 = COMP <Q, 3> (&input[ 1 ], &input[ 5 ]); 
	x1x6 = COMP <Q, 3> (&input[ 1 ], &input[ 6 ]); 
	x1x7 = COMP <Q, 3> (&input[ 1 ], &input[ 7 ]); 
	x1x8 = COMP <Q, 3> (&input[ 1 ], &input[ 8 ]); 
	x1x9 = COMP <Q, 3> (&input[ 1 ], &input[ 9 ]); 
	x1x10 = COMP <Q, 3> (&input[ 1 ], &input[ 10 ]); 
	x1x11 = COMP <Q, 3> (&input[ 1 ], &input[ 11 ]); 
	x1x12 = COMP <Q, 3> (&input[ 1 ], &input[ 12 ]); 
	x1x13 = COMP <Q, 3> (&input[ 1 ], &input[ 13 ]); 
	x1x14 = COMP <Q, 3> (&input[ 1 ], &input[ 14 ]); 

	x2x3 = 0; 
	x2x4 = 0; 
	x2x5 = 0; 
	x2x6 = 0; 
	x2x7 = 0; 
	x2x8 = 0; 
	x2x9 = 0; 
	x2x10 = 0; 
	x2x11 = 0; 
	x2x12 = 0; 
	x2x13 = 0; 
	x2x14 = 0; 

	x3x4 = COMP <Q, 3> (&input[ 3 ], &input[ 4 ]); 
	x3x5 = COMP <Q, 3> (&input[ 3 ], &input[ 5 ]); 
	x3x6 = COMP <Q, 3> (&input[ 3 ], &input[ 6 ]); 
	x3x7 = COMP <Q, 3> (&input[ 3 ], &input[ 7 ]); 
	x3x8 = COMP <Q, 3> (&input[ 3 ], &input[ 8 ]); 
	x3x9 = COMP <Q, 3> (&input[ 3 ], &input[ 9 ]); 
	x3x10 = COMP <Q, 3> (&input[ 3 ], &input[ 10 ]); 
	x3x11 = COMP <Q, 3> (&input[ 3 ], &input[ 11 ]); 
	x3x12 = COMP <Q, 3> (&input[ 3 ], &input[ 12 ]); 
	x3x13 = COMP <Q, 3> (&input[ 3 ], &input[ 13 ]); 
	x3x14 = COMP <Q, 3> (&input[ 3 ], &input[ 14 ]); 

	x4x5 = 0; 
	x4x6 = 0; 
	x4x7 = 0; 
	x4x8 = 0; 
	x4x9 = 0; 
	x4x10 = 0; 
	x4x11 = 0; 
	x4x12 = 0; 
	x4x13 = 0; 
	x4x14 = 0; 

	x5x6 = COMP <Q, 3> (&input[ 5 ], &input[ 6 ]); 
	x5x7 = COMP <Q, 3> (&input[ 5 ], &input[ 7 ]); 
	x5x8 = COMP <Q, 3> (&input[ 5 ], &input[ 8 ]); 
	x5x9 = COMP <Q, 3> (&input[ 5 ], &input[ 9 ]); 
	x5x10 = COMP <Q, 3> (&input[ 5 ], &input[ 10 ]); 
	x5x11 = COMP <Q, 3> (&input[ 5 ], &input[ 11 ]); 
	x5x12 = COMP <Q, 3> (&input[ 5 ], &input[ 12 ]); 
	x5x13 = COMP <Q, 3> (&input[ 5 ], &input[ 13 ]); 
	x5x14 = COMP <Q, 3> (&input[ 5 ], &input[ 14 ]); 

	x6x7 = 0; 
	x6x8 = 0; 
	x6x9 = 0; 
	x6x10 = 0; 
	x6x11 = 0; 
	x6x12 = 0; 
	x6x13 = 0; 
	x6x14 = 0; 

	x7x8 = COMP <Q, 3> (&input[ 7 ], &input[ 8 ]); 
	x7x9 = COMP <Q, 3> (&input[ 7 ], &input[ 9 ]); 
	x7x10 = COMP <Q, 3> (&input[ 7 ], &input[ 10 ]); 
	x7x11 = COMP <Q, 3> (&input[ 7 ], &input[ 11 ]); 
	x7x12 = COMP <Q, 3> (&input[ 7 ], &input[ 12 ]); 
	x7x13 = COMP <Q, 3> (&input[ 7 ], &input[ 13 ]); 
	x7x14 = COMP <Q, 3> (&input[ 7 ], &input[ 14 ]); 

	x8x9 = 0; 
	x8x10 = 0; 
	x8x11 = 0; 
	x8x12 = 0; 
	x8x13 = 0; 
	x8x14 = 0; 

	x9x10 = COMP <Q, 3> (&input[ 9 ], &input[ 10 ]); 
	x9x11 = COMP <Q, 3> (&input[ 9 ], &input[ 11 ]); 
	x9x12 = COMP <Q, 3> (&input[ 9 ], &input[ 12 ]); 
	x9x13 = COMP <Q, 3> (&input[ 9 ], &input[ 13 ]); 
	x9x14 = COMP <Q, 3> (&input[ 9 ], &input[ 14 ]); 

	x10x11 = 0; 
	x10x12 = 0; 
	x10x13 = 0; 
	x10x14 = 0; 

	x11x12 = COMP <Q, 3> (&input[ 11 ], &input[ 12 ]); 
	x11x13 = COMP <Q, 3> (&input[ 11 ], &input[ 13 ]); 
	x11x14 = COMP <Q, 3> (&input[ 11 ], &input[ 14 ]); 

	x12x13 = 0; 
	x12x14 = 0; 

	x13x14 = COMP <Q, 3> (&input[ 13 ], &input[ 14 ]); 


// ON CALCULE LES POSITIONS DES DONNEES EN SORTIE

	P0 = (sc_uint<4>) x0x1 + (sc_uint<4>) x0x2 + (sc_uint<4>) x0x3 + (sc_uint<4>) x0x4 + (sc_uint<4>) x0x5 + (sc_uint<4>) x0x6 + (sc_uint<4>) x0x7 + (sc_uint<4>) x0x8 + (sc_uint<4>) x0x9 + (sc_uint<4>) x0x10 + (sc_uint<4>) x0x11 + (sc_uint<4>) x0x12 + (sc_uint<4>) x0x13 + (sc_uint<4>) x0x14;
	P1 = (sc_uint<4>) ~x0x1 + (sc_uint<4>) x1x2 + (sc_uint<4>) x1x3 + (sc_uint<4>) x1x4 + (sc_uint<4>) x1x5 + (sc_uint<4>) x1x6 + (sc_uint<4>) x1x7 + (sc_uint<4>) x1x8 + (sc_uint<4>) x1x9 + (sc_uint<4>) x1x10 + (sc_uint<4>) x1x11 + (sc_uint<4>) x1x12 + (sc_uint<4>) x1x13 + (sc_uint<4>) x1x14;
	P2 = (sc_uint<4>) ~x0x2 + (sc_uint<4>) ~x1x2 + (sc_uint<4>) x2x3 + (sc_uint<4>) x2x4 + (sc_uint<4>) x2x5 + (sc_uint<4>) x2x6 + (sc_uint<4>) x2x7 + (sc_uint<4>) x2x8 + (sc_uint<4>) x2x9 + (sc_uint<4>) x2x10 + (sc_uint<4>) x2x11 + (sc_uint<4>) x2x12 + (sc_uint<4>) x2x13 + (sc_uint<4>) x2x14;
	P3 = (sc_uint<4>) ~x0x3 + (sc_uint<4>) ~x1x3 + (sc_uint<4>) ~x2x3 + (sc_uint<4>) x3x4 + (sc_uint<4>) x3x5 + (sc_uint<4>) x3x6 + (sc_uint<4>) x3x7 + (sc_uint<4>) x3x8 + (sc_uint<4>) x3x9 + (sc_uint<4>) x3x10 + (sc_uint<4>) x3x11 + (sc_uint<4>) x3x12 + (sc_uint<4>) x3x13 + (sc_uint<4>) x3x14;
	P4 = (sc_uint<4>) ~x0x4 + (sc_uint<4>) ~x1x4 + (sc_uint<4>) ~x2x4 + (sc_uint<4>) ~x3x4 + (sc_uint<4>) x4x5 + (sc_uint<4>) x4x6 + (sc_uint<4>) x4x7 + (sc_uint<4>) x4x8 + (sc_uint<4>) x4x9 + (sc_uint<4>) x4x10 + (sc_uint<4>) x4x11 + (sc_uint<4>) x4x12 + (sc_uint<4>) x4x13 + (sc_uint<4>) x4x14;
	P5 = (sc_uint<4>) ~x0x5 + (sc_uint<4>) ~x1x5 + (sc_uint<4>) ~x2x5 + (sc_uint<4>) ~x3x5 + (sc_uint<4>) ~x4x5 + (sc_uint<4>) x5x6 + (sc_uint<4>) x5x7 + (sc_uint<4>) x5x8 + (sc_uint<4>) x5x9 + (sc_uint<4>) x5x10 + (sc_uint<4>) x5x11 + (sc_uint<4>) x5x12 + (sc_uint<4>) x5x13 + (sc_uint<4>) x5x14;
	P6 = (sc_uint<4>) ~x0x6 + (sc_uint<4>) ~x1x6 + (sc_uint<4>) ~x2x6 + (sc_uint<4>) ~x3x6 + (sc_uint<4>) ~x4x6 + (sc_uint<4>) ~x5x6 + (sc_uint<4>) x6x7 + (sc_uint<4>) x6x8 + (sc_uint<4>) x6x9 + (sc_uint<4>) x6x10 + (sc_uint<4>) x6x11 + (sc_uint<4>) x6x12 + (sc_uint<4>) x6x13 + (sc_uint<4>) x6x14;
	P7 = (sc_uint<4>) ~x0x7 + (sc_uint<4>) ~x1x7 + (sc_uint<4>) ~x2x7 + (sc_uint<4>) ~x3x7 + (sc_uint<4>) ~x4x7 + (sc_uint<4>) ~x5x7 + (sc_uint<4>) ~x6x7 + (sc_uint<4>) x7x8 + (sc_uint<4>) x7x9 + (sc_uint<4>) x7x10 + (sc_uint<4>) x7x11 + (sc_uint<4>) x7x12 + (sc_uint<4>) x7x13 + (sc_uint<4>) x7x14;
	P8 = (sc_uint<4>) ~x0x8 + (sc_uint<4>) ~x1x8 + (sc_uint<4>) ~x2x8 + (sc_uint<4>) ~x3x8 + (sc_uint<4>) ~x4x8 + (sc_uint<4>) ~x5x8 + (sc_uint<4>) ~x6x8 + (sc_uint<4>) ~x7x8 + (sc_uint<4>) x8x9 + (sc_uint<4>) x8x10 + (sc_uint<4>) x8x11 + (sc_uint<4>) x8x12 + (sc_uint<4>) x8x13 + (sc_uint<4>) x8x14;
	P9 = (sc_uint<4>) ~x0x9 + (sc_uint<4>) ~x1x9 + (sc_uint<4>) ~x2x9 + (sc_uint<4>) ~x3x9 + (sc_uint<4>) ~x4x9 + (sc_uint<4>) ~x5x9 + (sc_uint<4>) ~x6x9 + (sc_uint<4>) ~x7x9 + (sc_uint<4>) ~x8x9 + (sc_uint<4>) x9x10 + (sc_uint<4>) x9x11 + (sc_uint<4>) x9x12 + (sc_uint<4>) x9x13 + (sc_uint<4>) x9x14;
	P10 = (sc_uint<4>) ~x0x10 + (sc_uint<4>) ~x1x10 + (sc_uint<4>) ~x2x10 + (sc_uint<4>) ~x3x10 + (sc_uint<4>) ~x4x10 + (sc_uint<4>) ~x5x10 + (sc_uint<4>) ~x6x10 + (sc_uint<4>) ~x7x10 + (sc_uint<4>) ~x8x10 + (sc_uint<4>) ~x9x10 + (sc_uint<4>) x10x11 + (sc_uint<4>) x10x12 + (sc_uint<4>) x10x13 + (sc_uint<4>) x10x14;
	P11 = (sc_uint<4>) ~x0x11 + (sc_uint<4>) ~x1x11 + (sc_uint<4>) ~x2x11 + (sc_uint<4>) ~x3x11 + (sc_uint<4>) ~x4x11 + (sc_uint<4>) ~x5x11 + (sc_uint<4>) ~x6x11 + (sc_uint<4>) ~x7x11 + (sc_uint<4>) ~x8x11 + (sc_uint<4>) ~x9x11 + (sc_uint<4>) ~x10x11 + (sc_uint<4>) x11x12 + (sc_uint<4>) x11x13 + (sc_uint<4>) x11x14;
	P12 = (sc_uint<4>) ~x0x12 + (sc_uint<4>) ~x1x12 + (sc_uint<4>) ~x2x12 + (sc_uint<4>) ~x3x12 + (sc_uint<4>) ~x4x12 + (sc_uint<4>) ~x5x12 + (sc_uint<4>) ~x6x12 + (sc_uint<4>) ~x7x12 + (sc_uint<4>) ~x8x12 + (sc_uint<4>) ~x9x12 + (sc_uint<4>) ~x10x12 + (sc_uint<4>) ~x11x12 + (sc_uint<4>) x12x13 + (sc_uint<4>) x12x14;
	P13 = (sc_uint<4>) ~x0x13 + (sc_uint<4>) ~x1x13 + (sc_uint<4>) ~x2x13 + (sc_uint<4>) ~x3x13 + (sc_uint<4>) ~x4x13 + (sc_uint<4>) ~x5x13 + (sc_uint<4>) ~x6x13 + (sc_uint<4>) ~x7x13 + (sc_uint<4>) ~x8x13 + (sc_uint<4>) ~x9x13 + (sc_uint<4>) ~x10x13 + (sc_uint<4>) ~x11x13 + (sc_uint<4>) ~x12x13 + (sc_uint<4>) x13x14;
	P14 = (sc_uint<4>) ~x0x14 + (sc_uint<4>) ~x1x14 + (sc_uint<4>) ~x2x14 + (sc_uint<4>) ~x3x14 + (sc_uint<4>) ~x4x14 + (sc_uint<4>) ~x5x14 + (sc_uint<4>) ~x6x14 + (sc_uint<4>) ~x7x14 + (sc_uint<4>) ~x8x14 + (sc_uint<4>) ~x9x14 + (sc_uint<4>) ~x10x14 + (sc_uint<4>) ~x11x14 + (sc_uint<4>) ~x12x14 + (sc_uint<4>) ~x13x14;

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
	else	if ( P7 == 4 )
		temp[4] = input[7]; 
	else	if ( P8 == 4 )
		temp[4] = input[8]; 

	if ( P1 == 5 )
		temp[5] = input[1]; 
	else	if ( P3 == 5 )
		temp[5] = input[3]; 
	else	if ( P5 == 5 )
		temp[5] = input[5]; 
	else	if ( P6 == 5 )
		temp[5] = input[6]; 
	else	if ( P7 == 5 )
		temp[5] = input[7]; 
	else	if ( P8 == 5 )
		temp[5] = input[8]; 
	else	if ( P9 == 5 )
		temp[5] = input[9]; 
	else	if ( P10 == 5 )
		temp[5] = input[10]; 

	if ( P1 == 6 )
		temp[6] = input[1]; 
	else	if ( P3 == 6 )
		temp[6] = input[3]; 
	else	if ( P5 == 6 )
		temp[6] = input[5]; 
	else	if ( P6 == 6 )
		temp[6] = input[6]; 
	else	if ( P7 == 6 )
		temp[6] = input[7]; 
	else	if ( P8 == 6 )
		temp[6] = input[8]; 
	else	if ( P9 == 6 )
		temp[6] = input[9]; 
	else	if ( P10 == 6 )
		temp[6] = input[10]; 
	else	if ( P11 == 6 )
		temp[6] = input[11]; 
	else	if ( P12 == 6 )
		temp[6] = input[12]; 

	if ( P1 == 7 )
		temp[7] = input[1]; 
	else	if ( P3 == 7 )
		temp[7] = input[3]; 
	else	if ( P5 == 7 )
		temp[7] = input[5]; 
	else	if ( P7 == 7 )
		temp[7] = input[7]; 
	else	if ( P8 == 7 )
		temp[7] = input[8]; 
	else	if ( P9 == 7 )
		temp[7] = input[9]; 
	else	if ( P10 == 7 )
		temp[7] = input[10]; 
	else	if ( P11 == 7 )
		temp[7] = input[11]; 
	else	if ( P12 == 7 )
		temp[7] = input[12]; 
	else	if ( P13 == 7 )
		temp[7] = input[13]; 
	else	if ( P14 == 7 )
		temp[7] = input[14]; 

	if ( P1 == 8 )
		temp[8] = input[1]; 
	else	if ( P3 == 8 )
		temp[8] = input[3]; 
	else	if ( P5 == 8 )
		temp[8] = input[5]; 
	else	if ( P7 == 8 )
		temp[8] = input[7]; 
	else	if ( P8 == 8 )
		temp[8] = input[8]; 
	else	if ( P9 == 8 )
		temp[8] = input[9]; 
	else	if ( P10 == 8 )
		temp[8] = input[10]; 
	else	if ( P11 == 8 )
		temp[8] = input[11]; 
	else	if ( P12 == 8 )
		temp[8] = input[12]; 
	else	if ( P13 == 8 )
		temp[8] = input[13]; 
	else	if ( P14 == 8 )
		temp[8] = input[14]; 

	if ( P1 == 9 )
		temp[9] = input[1]; 
	else	if ( P3 == 9 )
		temp[9] = input[3]; 
	else	if ( P5 == 9 )
		temp[9] = input[5]; 
	else	if ( P7 == 9 )
		temp[9] = input[7]; 
	else	if ( P9 == 9 )
		temp[9] = input[9]; 
	else	if ( P10 == 9 )
		temp[9] = input[10]; 
	else	if ( P11 == 9 )
		temp[9] = input[11]; 
	else	if ( P12 == 9 )
		temp[9] = input[12]; 
	else	if ( P13 == 9 )
		temp[9] = input[13]; 
	else	if ( P14 == 9 )
		temp[9] = input[14]; 

	if ( P1 == 10 )
		temp[10] = input[1]; 
	else	if ( P3 == 10 )
		temp[10] = input[3]; 
	else	if ( P5 == 10 )
		temp[10] = input[5]; 
	else	if ( P7 == 10 )
		temp[10] = input[7]; 
	else	if ( P9 == 10 )
		temp[10] = input[9]; 
	else	if ( P10 == 10 )
		temp[10] = input[10]; 
	else	if ( P11 == 10 )
		temp[10] = input[11]; 
	else	if ( P12 == 10 )
		temp[10] = input[12]; 
	else	if ( P13 == 10 )
		temp[10] = input[13]; 
	else	if ( P14 == 10 )
		temp[10] = input[14]; 

	if ( P1 == 11 )
		temp[11] = input[1]; 
	else	if ( P3 == 11 )
		temp[11] = input[3]; 
	else	if ( P5 == 11 )
		temp[11] = input[5]; 
	else	if ( P7 == 11 )
		temp[11] = input[7]; 
	else	if ( P9 == 11 )
		temp[11] = input[9]; 
	else	if ( P11 == 11 )
		temp[11] = input[11]; 
	else	if ( P12 == 11 )
		temp[11] = input[12]; 
	else	if ( P13 == 11 )
		temp[11] = input[13]; 
	else	if ( P14 == 11 )
		temp[11] = input[14]; 

	if ( P1 == 12 )
		temp[12] = input[1]; 
	else	if ( P3 == 12 )
		temp[12] = input[3]; 
	else	if ( P5 == 12 )
		temp[12] = input[5]; 
	else	if ( P7 == 12 )
		temp[12] = input[7]; 
	else	if ( P9 == 12 )
		temp[12] = input[9]; 
	else	if ( P11 == 12 )
		temp[12] = input[11]; 
	else	if ( P12 == 12 )
		temp[12] = input[12]; 
	else	if ( P13 == 12 )
		temp[12] = input[13]; 
	else	if ( P14 == 12 )
		temp[12] = input[14]; 

	if ( P1 == 13 )
		temp[13] = input[1]; 
	else	if ( P3 == 13 )
		temp[13] = input[3]; 
	else	if ( P5 == 13 )
		temp[13] = input[5]; 
	else	if ( P7 == 13 )
		temp[13] = input[7]; 
	else	if ( P9 == 13 )
		temp[13] = input[9]; 
	else	if ( P11 == 13 )
		temp[13] = input[11]; 
	else	if ( P13 == 13 )
		temp[13] = input[13]; 
	else	if ( P14 == 13 )
		temp[13] = input[14]; 

	if ( P1 == 14 )
		temp[14] = input[1]; 
	else	if ( P3 == 14 )
		temp[14] = input[3]; 
	else	if ( P5 == 14 )
		temp[14] = input[5]; 
	else	if ( P7 == 14 )
		temp[14] = input[7]; 
	else	if ( P9 == 14 )
		temp[14] = input[9]; 
	else	if ( P11 == 14 )
		temp[14] = input[11]; 
	else	if ( P13 == 14 )
		temp[14] = input[13]; 
	else	if ( P14 == 14 )
		temp[14] = input[14]; 


// ON AJUSTE LES SORTIE EN FONCTION DE FB

	if (fb == 0){ 
		output[0] = temp[7]; 
		output[1] = temp[8]; 
		output[2] = temp[9]; 
		output[3] = temp[10]; 
		output[4] = temp[11]; 
		output[5] = temp[12]; 
		output[6] = temp[13]; 
		output[7] = temp[14]; 
	} 
	else{ 
		output[0] = temp[0]; 
		output[1] = temp[1]; 
		output[2] = temp[2]; 
		output[3] = temp[3]; 
		output[4] = temp[4]; 
		output[5] = temp[5]; 
		output[6] = temp[6]; 
		output[7] = temp[7]; 
	} 
} 
