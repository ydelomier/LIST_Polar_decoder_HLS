template < int Q >
void RANKORDER_SORT_L16 (PS_struct<1,Q,4> input[32], PS_struct<1,Q,4> output[16], sc_biguint<1> fb)
{
#pragma HLS INLINE off

	sc_uint<1>   x0x1, x0x2, x0x3, x0x4, x0x5, x0x6, x0x7, x0x8, x0x9, x0x10, x0x11, x0x12, x0x13, x0x14, x0x15, x0x16, x0x17, x0x18, x0x19, x0x20, x0x21, x0x22, x0x23, x0x24, x0x25, x0x26, x0x27, x0x28, x0x29, x0x30 ;
	sc_uint<1>   x1x2, x1x3, x1x4, x1x5, x1x6, x1x7, x1x8, x1x9, x1x10, x1x11, x1x12, x1x13, x1x14, x1x15, x1x16, x1x17, x1x18, x1x19, x1x20, x1x21, x1x22, x1x23, x1x24, x1x25, x1x26, x1x27, x1x28, x1x29, x1x30 ;
	sc_uint<1>   x2x3, x2x4, x2x5, x2x6, x2x7, x2x8, x2x9, x2x10, x2x11, x2x12, x2x13, x2x14, x2x15, x2x16, x2x17, x2x18, x2x19, x2x20, x2x21, x2x22, x2x23, x2x24, x2x25, x2x26, x2x27, x2x28, x2x29, x2x30 ;
	sc_uint<1>   x3x4, x3x5, x3x6, x3x7, x3x8, x3x9, x3x10, x3x11, x3x12, x3x13, x3x14, x3x15, x3x16, x3x17, x3x18, x3x19, x3x20, x3x21, x3x22, x3x23, x3x24, x3x25, x3x26, x3x27, x3x28, x3x29, x3x30 ;
	sc_uint<1>   x4x5, x4x6, x4x7, x4x8, x4x9, x4x10, x4x11, x4x12, x4x13, x4x14, x4x15, x4x16, x4x17, x4x18, x4x19, x4x20, x4x21, x4x22, x4x23, x4x24, x4x25, x4x26, x4x27, x4x28, x4x29, x4x30 ;
	sc_uint<1>   x5x6, x5x7, x5x8, x5x9, x5x10, x5x11, x5x12, x5x13, x5x14, x5x15, x5x16, x5x17, x5x18, x5x19, x5x20, x5x21, x5x22, x5x23, x5x24, x5x25, x5x26, x5x27, x5x28, x5x29, x5x30 ;
	sc_uint<1>   x6x7, x6x8, x6x9, x6x10, x6x11, x6x12, x6x13, x6x14, x6x15, x6x16, x6x17, x6x18, x6x19, x6x20, x6x21, x6x22, x6x23, x6x24, x6x25, x6x26, x6x27, x6x28, x6x29, x6x30 ;
	sc_uint<1>   x7x8, x7x9, x7x10, x7x11, x7x12, x7x13, x7x14, x7x15, x7x16, x7x17, x7x18, x7x19, x7x20, x7x21, x7x22, x7x23, x7x24, x7x25, x7x26, x7x27, x7x28, x7x29, x7x30 ;
	sc_uint<1>   x8x9, x8x10, x8x11, x8x12, x8x13, x8x14, x8x15, x8x16, x8x17, x8x18, x8x19, x8x20, x8x21, x8x22, x8x23, x8x24, x8x25, x8x26, x8x27, x8x28, x8x29, x8x30 ;
	sc_uint<1>   x9x10, x9x11, x9x12, x9x13, x9x14, x9x15, x9x16, x9x17, x9x18, x9x19, x9x20, x9x21, x9x22, x9x23, x9x24, x9x25, x9x26, x9x27, x9x28, x9x29, x9x30 ;
	sc_uint<1>   x10x11, x10x12, x10x13, x10x14, x10x15, x10x16, x10x17, x10x18, x10x19, x10x20, x10x21, x10x22, x10x23, x10x24, x10x25, x10x26, x10x27, x10x28, x10x29, x10x30 ;
	sc_uint<1>   x11x12, x11x13, x11x14, x11x15, x11x16, x11x17, x11x18, x11x19, x11x20, x11x21, x11x22, x11x23, x11x24, x11x25, x11x26, x11x27, x11x28, x11x29, x11x30 ;
	sc_uint<1>   x12x13, x12x14, x12x15, x12x16, x12x17, x12x18, x12x19, x12x20, x12x21, x12x22, x12x23, x12x24, x12x25, x12x26, x12x27, x12x28, x12x29, x12x30 ;
	sc_uint<1>   x13x14, x13x15, x13x16, x13x17, x13x18, x13x19, x13x20, x13x21, x13x22, x13x23, x13x24, x13x25, x13x26, x13x27, x13x28, x13x29, x13x30 ;
	sc_uint<1>   x14x15, x14x16, x14x17, x14x18, x14x19, x14x20, x14x21, x14x22, x14x23, x14x24, x14x25, x14x26, x14x27, x14x28, x14x29, x14x30 ;
	sc_uint<1>   x15x16, x15x17, x15x18, x15x19, x15x20, x15x21, x15x22, x15x23, x15x24, x15x25, x15x26, x15x27, x15x28, x15x29, x15x30 ;
	sc_uint<1>   x16x17, x16x18, x16x19, x16x20, x16x21, x16x22, x16x23, x16x24, x16x25, x16x26, x16x27, x16x28, x16x29, x16x30 ;
	sc_uint<1>   x17x18, x17x19, x17x20, x17x21, x17x22, x17x23, x17x24, x17x25, x17x26, x17x27, x17x28, x17x29, x17x30 ;
	sc_uint<1>   x18x19, x18x20, x18x21, x18x22, x18x23, x18x24, x18x25, x18x26, x18x27, x18x28, x18x29, x18x30 ;
	sc_uint<1>   x19x20, x19x21, x19x22, x19x23, x19x24, x19x25, x19x26, x19x27, x19x28, x19x29, x19x30 ;
	sc_uint<1>   x20x21, x20x22, x20x23, x20x24, x20x25, x20x26, x20x27, x20x28, x20x29, x20x30 ;
	sc_uint<1>   x21x22, x21x23, x21x24, x21x25, x21x26, x21x27, x21x28, x21x29, x21x30 ;
	sc_uint<1>   x22x23, x22x24, x22x25, x22x26, x22x27, x22x28, x22x29, x22x30 ;
	sc_uint<1>   x23x24, x23x25, x23x26, x23x27, x23x28, x23x29, x23x30 ;
	sc_uint<1>   x24x25, x24x26, x24x27, x24x28, x24x29, x24x30 ;
	sc_uint<1>   x25x26, x25x27, x25x28, x25x29, x25x30 ;
	sc_uint<1>   x26x27, x26x28, x26x29, x26x30 ;
	sc_uint<1>   x27x28, x27x29, x27x30 ;
	sc_uint<1>   x28x29, x28x30 ;
	sc_uint<1>   x29x30 ;

	sc_uint<5> P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30 ;
	PS_struct<1,Q,4> temp[31];
#pragma HLS ARRAY_PARTITION variable=temp complete dim=1


// ON AJUSTE LES ENTREES EN FONCTION DE FB

	if (fb == 0){ 
		input[30] = input[15];
		input[31].metric = MAX_VAL;
		input[29] = input[14]; 
		input[27] = input[13]; 
		input[25] = input[12]; 
		input[23] = input[11]; 
		input[21] = input[10]; 
		input[19] = input[9]; 
		input[17] = input[8]; 
		input[15] = input[7]; 
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
		input[14].metric = 0;
		input[16].metric = 0;
		input[18].metric = 0;
		input[20].metric = 0;
		input[22].metric = 0;
		input[24].metric = 0;
		input[26].metric = 0;
		input[28].metric = 0;
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
	x0x15 = 0; 
	x0x16 = 0; 
	x0x17 = 0; 
	x0x18 = 0; 
	x0x19 = 0; 
	x0x20 = 0; 
	x0x21 = 0; 
	x0x22 = 0; 
	x0x23 = 0; 
	x0x24 = 0; 
	x0x25 = 0; 
	x0x26 = 0; 
	x0x27 = 0; 
	x0x28 = 0; 
	x0x29 = 0; 
	x0x30 = 0; 

	x1x2 = COMP <Q, 4> (&input[ 1 ], &input[ 2 ]); 
	x1x3 = COMP <Q, 4> (&input[ 1 ], &input[ 3 ]); 
	x1x4 = COMP <Q, 4> (&input[ 1 ], &input[ 4 ]); 
	x1x5 = COMP <Q, 4> (&input[ 1 ], &input[ 5 ]); 
	x1x6 = COMP <Q, 4> (&input[ 1 ], &input[ 6 ]); 
	x1x7 = COMP <Q, 4> (&input[ 1 ], &input[ 7 ]); 
	x1x8 = COMP <Q, 4> (&input[ 1 ], &input[ 8 ]); 
	x1x9 = COMP <Q, 4> (&input[ 1 ], &input[ 9 ]); 
	x1x10 = COMP <Q, 4> (&input[ 1 ], &input[ 10 ]); 
	x1x11 = COMP <Q, 4> (&input[ 1 ], &input[ 11 ]); 
	x1x12 = COMP <Q, 4> (&input[ 1 ], &input[ 12 ]); 
	x1x13 = COMP <Q, 4> (&input[ 1 ], &input[ 13 ]); 
	x1x14 = COMP <Q, 4> (&input[ 1 ], &input[ 14 ]); 
	x1x15 = COMP <Q, 4> (&input[ 1 ], &input[ 15 ]); 
	x1x16 = COMP <Q, 4> (&input[ 1 ], &input[ 16 ]); 
	x1x17 = COMP <Q, 4> (&input[ 1 ], &input[ 17 ]); 
	x1x18 = COMP <Q, 4> (&input[ 1 ], &input[ 18 ]); 
	x1x19 = COMP <Q, 4> (&input[ 1 ], &input[ 19 ]); 
	x1x20 = COMP <Q, 4> (&input[ 1 ], &input[ 20 ]); 
	x1x21 = COMP <Q, 4> (&input[ 1 ], &input[ 21 ]); 
	x1x22 = COMP <Q, 4> (&input[ 1 ], &input[ 22 ]); 
	x1x23 = COMP <Q, 4> (&input[ 1 ], &input[ 23 ]); 
	x1x24 = COMP <Q, 4> (&input[ 1 ], &input[ 24 ]); 
	x1x25 = COMP <Q, 4> (&input[ 1 ], &input[ 25 ]); 
	x1x26 = COMP <Q, 4> (&input[ 1 ], &input[ 26 ]); 
	x1x27 = COMP <Q, 4> (&input[ 1 ], &input[ 27 ]); 
	x1x28 = COMP <Q, 4> (&input[ 1 ], &input[ 28 ]); 
	x1x29 = COMP <Q, 4> (&input[ 1 ], &input[ 29 ]); 
	x1x30 = COMP <Q, 4> (&input[ 1 ], &input[ 30 ]); 

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
	x2x15 = 0; 
	x2x16 = 0; 
	x2x17 = 0; 
	x2x18 = 0; 
	x2x19 = 0; 
	x2x20 = 0; 
	x2x21 = 0; 
	x2x22 = 0; 
	x2x23 = 0; 
	x2x24 = 0; 
	x2x25 = 0; 
	x2x26 = 0; 
	x2x27 = 0; 
	x2x28 = 0; 
	x2x29 = 0; 
	x2x30 = 0; 

	x3x4 = COMP <Q, 4> (&input[ 3 ], &input[ 4 ]); 
	x3x5 = COMP <Q, 4> (&input[ 3 ], &input[ 5 ]); 
	x3x6 = COMP <Q, 4> (&input[ 3 ], &input[ 6 ]); 
	x3x7 = COMP <Q, 4> (&input[ 3 ], &input[ 7 ]); 
	x3x8 = COMP <Q, 4> (&input[ 3 ], &input[ 8 ]); 
	x3x9 = COMP <Q, 4> (&input[ 3 ], &input[ 9 ]); 
	x3x10 = COMP <Q, 4> (&input[ 3 ], &input[ 10 ]); 
	x3x11 = COMP <Q, 4> (&input[ 3 ], &input[ 11 ]); 
	x3x12 = COMP <Q, 4> (&input[ 3 ], &input[ 12 ]); 
	x3x13 = COMP <Q, 4> (&input[ 3 ], &input[ 13 ]); 
	x3x14 = COMP <Q, 4> (&input[ 3 ], &input[ 14 ]); 
	x3x15 = COMP <Q, 4> (&input[ 3 ], &input[ 15 ]); 
	x3x16 = COMP <Q, 4> (&input[ 3 ], &input[ 16 ]); 
	x3x17 = COMP <Q, 4> (&input[ 3 ], &input[ 17 ]); 
	x3x18 = COMP <Q, 4> (&input[ 3 ], &input[ 18 ]); 
	x3x19 = COMP <Q, 4> (&input[ 3 ], &input[ 19 ]); 
	x3x20 = COMP <Q, 4> (&input[ 3 ], &input[ 20 ]); 
	x3x21 = COMP <Q, 4> (&input[ 3 ], &input[ 21 ]); 
	x3x22 = COMP <Q, 4> (&input[ 3 ], &input[ 22 ]); 
	x3x23 = COMP <Q, 4> (&input[ 3 ], &input[ 23 ]); 
	x3x24 = COMP <Q, 4> (&input[ 3 ], &input[ 24 ]); 
	x3x25 = COMP <Q, 4> (&input[ 3 ], &input[ 25 ]); 
	x3x26 = COMP <Q, 4> (&input[ 3 ], &input[ 26 ]); 
	x3x27 = COMP <Q, 4> (&input[ 3 ], &input[ 27 ]); 
	x3x28 = COMP <Q, 4> (&input[ 3 ], &input[ 28 ]); 
	x3x29 = COMP <Q, 4> (&input[ 3 ], &input[ 29 ]); 
	x3x30 = COMP <Q, 4> (&input[ 3 ], &input[ 30 ]); 

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
	x4x15 = 0; 
	x4x16 = 0; 
	x4x17 = 0; 
	x4x18 = 0; 
	x4x19 = 0; 
	x4x20 = 0; 
	x4x21 = 0; 
	x4x22 = 0; 
	x4x23 = 0; 
	x4x24 = 0; 
	x4x25 = 0; 
	x4x26 = 0; 
	x4x27 = 0; 
	x4x28 = 0; 
	x4x29 = 0; 
	x4x30 = 0; 

	x5x6 = COMP <Q, 4> (&input[ 5 ], &input[ 6 ]); 
	x5x7 = COMP <Q, 4> (&input[ 5 ], &input[ 7 ]); 
	x5x8 = COMP <Q, 4> (&input[ 5 ], &input[ 8 ]); 
	x5x9 = COMP <Q, 4> (&input[ 5 ], &input[ 9 ]); 
	x5x10 = COMP <Q, 4> (&input[ 5 ], &input[ 10 ]); 
	x5x11 = COMP <Q, 4> (&input[ 5 ], &input[ 11 ]); 
	x5x12 = COMP <Q, 4> (&input[ 5 ], &input[ 12 ]); 
	x5x13 = COMP <Q, 4> (&input[ 5 ], &input[ 13 ]); 
	x5x14 = COMP <Q, 4> (&input[ 5 ], &input[ 14 ]); 
	x5x15 = COMP <Q, 4> (&input[ 5 ], &input[ 15 ]); 
	x5x16 = COMP <Q, 4> (&input[ 5 ], &input[ 16 ]); 
	x5x17 = COMP <Q, 4> (&input[ 5 ], &input[ 17 ]); 
	x5x18 = COMP <Q, 4> (&input[ 5 ], &input[ 18 ]); 
	x5x19 = COMP <Q, 4> (&input[ 5 ], &input[ 19 ]); 
	x5x20 = COMP <Q, 4> (&input[ 5 ], &input[ 20 ]); 
	x5x21 = COMP <Q, 4> (&input[ 5 ], &input[ 21 ]); 
	x5x22 = COMP <Q, 4> (&input[ 5 ], &input[ 22 ]); 
	x5x23 = COMP <Q, 4> (&input[ 5 ], &input[ 23 ]); 
	x5x24 = COMP <Q, 4> (&input[ 5 ], &input[ 24 ]); 
	x5x25 = COMP <Q, 4> (&input[ 5 ], &input[ 25 ]); 
	x5x26 = COMP <Q, 4> (&input[ 5 ], &input[ 26 ]); 
	x5x27 = COMP <Q, 4> (&input[ 5 ], &input[ 27 ]); 
	x5x28 = COMP <Q, 4> (&input[ 5 ], &input[ 28 ]); 
	x5x29 = COMP <Q, 4> (&input[ 5 ], &input[ 29 ]); 
	x5x30 = COMP <Q, 4> (&input[ 5 ], &input[ 30 ]); 

	x6x7 = 0; 
	x6x8 = 0; 
	x6x9 = 0; 
	x6x10 = 0; 
	x6x11 = 0; 
	x6x12 = 0; 
	x6x13 = 0; 
	x6x14 = 0; 
	x6x15 = 0; 
	x6x16 = 0; 
	x6x17 = 0; 
	x6x18 = 0; 
	x6x19 = 0; 
	x6x20 = 0; 
	x6x21 = 0; 
	x6x22 = 0; 
	x6x23 = 0; 
	x6x24 = 0; 
	x6x25 = 0; 
	x6x26 = 0; 
	x6x27 = 0; 
	x6x28 = 0; 
	x6x29 = 0; 
	x6x30 = 0; 

	x7x8 = COMP <Q, 4> (&input[ 7 ], &input[ 8 ]); 
	x7x9 = COMP <Q, 4> (&input[ 7 ], &input[ 9 ]); 
	x7x10 = COMP <Q, 4> (&input[ 7 ], &input[ 10 ]); 
	x7x11 = COMP <Q, 4> (&input[ 7 ], &input[ 11 ]); 
	x7x12 = COMP <Q, 4> (&input[ 7 ], &input[ 12 ]); 
	x7x13 = COMP <Q, 4> (&input[ 7 ], &input[ 13 ]); 
	x7x14 = COMP <Q, 4> (&input[ 7 ], &input[ 14 ]); 
	x7x15 = COMP <Q, 4> (&input[ 7 ], &input[ 15 ]); 
	x7x16 = COMP <Q, 4> (&input[ 7 ], &input[ 16 ]); 
	x7x17 = COMP <Q, 4> (&input[ 7 ], &input[ 17 ]); 
	x7x18 = COMP <Q, 4> (&input[ 7 ], &input[ 18 ]); 
	x7x19 = COMP <Q, 4> (&input[ 7 ], &input[ 19 ]); 
	x7x20 = COMP <Q, 4> (&input[ 7 ], &input[ 20 ]); 
	x7x21 = COMP <Q, 4> (&input[ 7 ], &input[ 21 ]); 
	x7x22 = COMP <Q, 4> (&input[ 7 ], &input[ 22 ]); 
	x7x23 = COMP <Q, 4> (&input[ 7 ], &input[ 23 ]); 
	x7x24 = COMP <Q, 4> (&input[ 7 ], &input[ 24 ]); 
	x7x25 = COMP <Q, 4> (&input[ 7 ], &input[ 25 ]); 
	x7x26 = COMP <Q, 4> (&input[ 7 ], &input[ 26 ]); 
	x7x27 = COMP <Q, 4> (&input[ 7 ], &input[ 27 ]); 
	x7x28 = COMP <Q, 4> (&input[ 7 ], &input[ 28 ]); 
	x7x29 = COMP <Q, 4> (&input[ 7 ], &input[ 29 ]); 
	x7x30 = COMP <Q, 4> (&input[ 7 ], &input[ 30 ]); 

	x8x9 = 0; 
	x8x10 = 0; 
	x8x11 = 0; 
	x8x12 = 0; 
	x8x13 = 0; 
	x8x14 = 0; 
	x8x15 = 0; 
	x8x16 = 0; 
	x8x17 = 0; 
	x8x18 = 0; 
	x8x19 = 0; 
	x8x20 = 0; 
	x8x21 = 0; 
	x8x22 = 0; 
	x8x23 = 0; 
	x8x24 = 0; 
	x8x25 = 0; 
	x8x26 = 0; 
	x8x27 = 0; 
	x8x28 = 0; 
	x8x29 = 0; 
	x8x30 = 0; 

	x9x10 = COMP <Q, 4> (&input[ 9 ], &input[ 10 ]); 
	x9x11 = COMP <Q, 4> (&input[ 9 ], &input[ 11 ]); 
	x9x12 = COMP <Q, 4> (&input[ 9 ], &input[ 12 ]); 
	x9x13 = COMP <Q, 4> (&input[ 9 ], &input[ 13 ]); 
	x9x14 = COMP <Q, 4> (&input[ 9 ], &input[ 14 ]); 
	x9x15 = COMP <Q, 4> (&input[ 9 ], &input[ 15 ]); 
	x9x16 = COMP <Q, 4> (&input[ 9 ], &input[ 16 ]); 
	x9x17 = COMP <Q, 4> (&input[ 9 ], &input[ 17 ]); 
	x9x18 = COMP <Q, 4> (&input[ 9 ], &input[ 18 ]); 
	x9x19 = COMP <Q, 4> (&input[ 9 ], &input[ 19 ]); 
	x9x20 = COMP <Q, 4> (&input[ 9 ], &input[ 20 ]); 
	x9x21 = COMP <Q, 4> (&input[ 9 ], &input[ 21 ]); 
	x9x22 = COMP <Q, 4> (&input[ 9 ], &input[ 22 ]); 
	x9x23 = COMP <Q, 4> (&input[ 9 ], &input[ 23 ]); 
	x9x24 = COMP <Q, 4> (&input[ 9 ], &input[ 24 ]); 
	x9x25 = COMP <Q, 4> (&input[ 9 ], &input[ 25 ]); 
	x9x26 = COMP <Q, 4> (&input[ 9 ], &input[ 26 ]); 
	x9x27 = COMP <Q, 4> (&input[ 9 ], &input[ 27 ]); 
	x9x28 = COMP <Q, 4> (&input[ 9 ], &input[ 28 ]); 
	x9x29 = COMP <Q, 4> (&input[ 9 ], &input[ 29 ]); 
	x9x30 = COMP <Q, 4> (&input[ 9 ], &input[ 30 ]); 

	x10x11 = 0; 
	x10x12 = 0; 
	x10x13 = 0; 
	x10x14 = 0; 
	x10x15 = 0; 
	x10x16 = 0; 
	x10x17 = 0; 
	x10x18 = 0; 
	x10x19 = 0; 
	x10x20 = 0; 
	x10x21 = 0; 
	x10x22 = 0; 
	x10x23 = 0; 
	x10x24 = 0; 
	x10x25 = 0; 
	x10x26 = 0; 
	x10x27 = 0; 
	x10x28 = 0; 
	x10x29 = 0; 
	x10x30 = 0; 

	x11x12 = COMP <Q, 4> (&input[ 11 ], &input[ 12 ]); 
	x11x13 = COMP <Q, 4> (&input[ 11 ], &input[ 13 ]); 
	x11x14 = COMP <Q, 4> (&input[ 11 ], &input[ 14 ]); 
	x11x15 = COMP <Q, 4> (&input[ 11 ], &input[ 15 ]); 
	x11x16 = COMP <Q, 4> (&input[ 11 ], &input[ 16 ]); 
	x11x17 = COMP <Q, 4> (&input[ 11 ], &input[ 17 ]); 
	x11x18 = COMP <Q, 4> (&input[ 11 ], &input[ 18 ]); 
	x11x19 = COMP <Q, 4> (&input[ 11 ], &input[ 19 ]); 
	x11x20 = COMP <Q, 4> (&input[ 11 ], &input[ 20 ]); 
	x11x21 = COMP <Q, 4> (&input[ 11 ], &input[ 21 ]); 
	x11x22 = COMP <Q, 4> (&input[ 11 ], &input[ 22 ]); 
	x11x23 = COMP <Q, 4> (&input[ 11 ], &input[ 23 ]); 
	x11x24 = COMP <Q, 4> (&input[ 11 ], &input[ 24 ]); 
	x11x25 = COMP <Q, 4> (&input[ 11 ], &input[ 25 ]); 
	x11x26 = COMP <Q, 4> (&input[ 11 ], &input[ 26 ]); 
	x11x27 = COMP <Q, 4> (&input[ 11 ], &input[ 27 ]); 
	x11x28 = COMP <Q, 4> (&input[ 11 ], &input[ 28 ]); 
	x11x29 = COMP <Q, 4> (&input[ 11 ], &input[ 29 ]); 
	x11x30 = COMP <Q, 4> (&input[ 11 ], &input[ 30 ]); 

	x12x13 = 0; 
	x12x14 = 0; 
	x12x15 = 0; 
	x12x16 = 0; 
	x12x17 = 0; 
	x12x18 = 0; 
	x12x19 = 0; 
	x12x20 = 0; 
	x12x21 = 0; 
	x12x22 = 0; 
	x12x23 = 0; 
	x12x24 = 0; 
	x12x25 = 0; 
	x12x26 = 0; 
	x12x27 = 0; 
	x12x28 = 0; 
	x12x29 = 0; 
	x12x30 = 0; 

	x13x14 = COMP <Q, 4> (&input[ 13 ], &input[ 14 ]); 
	x13x15 = COMP <Q, 4> (&input[ 13 ], &input[ 15 ]); 
	x13x16 = COMP <Q, 4> (&input[ 13 ], &input[ 16 ]); 
	x13x17 = COMP <Q, 4> (&input[ 13 ], &input[ 17 ]); 
	x13x18 = COMP <Q, 4> (&input[ 13 ], &input[ 18 ]); 
	x13x19 = COMP <Q, 4> (&input[ 13 ], &input[ 19 ]); 
	x13x20 = COMP <Q, 4> (&input[ 13 ], &input[ 20 ]); 
	x13x21 = COMP <Q, 4> (&input[ 13 ], &input[ 21 ]); 
	x13x22 = COMP <Q, 4> (&input[ 13 ], &input[ 22 ]); 
	x13x23 = COMP <Q, 4> (&input[ 13 ], &input[ 23 ]); 
	x13x24 = COMP <Q, 4> (&input[ 13 ], &input[ 24 ]); 
	x13x25 = COMP <Q, 4> (&input[ 13 ], &input[ 25 ]); 
	x13x26 = COMP <Q, 4> (&input[ 13 ], &input[ 26 ]); 
	x13x27 = COMP <Q, 4> (&input[ 13 ], &input[ 27 ]); 
	x13x28 = COMP <Q, 4> (&input[ 13 ], &input[ 28 ]); 
	x13x29 = COMP <Q, 4> (&input[ 13 ], &input[ 29 ]); 
	x13x30 = COMP <Q, 4> (&input[ 13 ], &input[ 30 ]); 

	x14x15 = 0; 
	x14x16 = 0; 
	x14x17 = 0; 
	x14x18 = 0; 
	x14x19 = 0; 
	x14x20 = 0; 
	x14x21 = 0; 
	x14x22 = 0; 
	x14x23 = 0; 
	x14x24 = 0; 
	x14x25 = 0; 
	x14x26 = 0; 
	x14x27 = 0; 
	x14x28 = 0; 
	x14x29 = 0; 
	x14x30 = 0; 

	x15x16 = COMP <Q, 4> (&input[ 15 ], &input[ 16 ]); 
	x15x17 = COMP <Q, 4> (&input[ 15 ], &input[ 17 ]); 
	x15x18 = COMP <Q, 4> (&input[ 15 ], &input[ 18 ]); 
	x15x19 = COMP <Q, 4> (&input[ 15 ], &input[ 19 ]); 
	x15x20 = COMP <Q, 4> (&input[ 15 ], &input[ 20 ]); 
	x15x21 = COMP <Q, 4> (&input[ 15 ], &input[ 21 ]); 
	x15x22 = COMP <Q, 4> (&input[ 15 ], &input[ 22 ]); 
	x15x23 = COMP <Q, 4> (&input[ 15 ], &input[ 23 ]); 
	x15x24 = COMP <Q, 4> (&input[ 15 ], &input[ 24 ]); 
	x15x25 = COMP <Q, 4> (&input[ 15 ], &input[ 25 ]); 
	x15x26 = COMP <Q, 4> (&input[ 15 ], &input[ 26 ]); 
	x15x27 = COMP <Q, 4> (&input[ 15 ], &input[ 27 ]); 
	x15x28 = COMP <Q, 4> (&input[ 15 ], &input[ 28 ]); 
	x15x29 = COMP <Q, 4> (&input[ 15 ], &input[ 29 ]); 
	x15x30 = COMP <Q, 4> (&input[ 15 ], &input[ 30 ]); 

	x16x17 = 0; 
	x16x18 = 0; 
	x16x19 = 0; 
	x16x20 = 0; 
	x16x21 = 0; 
	x16x22 = 0; 
	x16x23 = 0; 
	x16x24 = 0; 
	x16x25 = 0; 
	x16x26 = 0; 
	x16x27 = 0; 
	x16x28 = 0; 
	x16x29 = 0; 
	x16x30 = 0; 

	x17x18 = COMP <Q, 4> (&input[ 17 ], &input[ 18 ]); 
	x17x19 = COMP <Q, 4> (&input[ 17 ], &input[ 19 ]); 
	x17x20 = COMP <Q, 4> (&input[ 17 ], &input[ 20 ]); 
	x17x21 = COMP <Q, 4> (&input[ 17 ], &input[ 21 ]); 
	x17x22 = COMP <Q, 4> (&input[ 17 ], &input[ 22 ]); 
	x17x23 = COMP <Q, 4> (&input[ 17 ], &input[ 23 ]); 
	x17x24 = COMP <Q, 4> (&input[ 17 ], &input[ 24 ]); 
	x17x25 = COMP <Q, 4> (&input[ 17 ], &input[ 25 ]); 
	x17x26 = COMP <Q, 4> (&input[ 17 ], &input[ 26 ]); 
	x17x27 = COMP <Q, 4> (&input[ 17 ], &input[ 27 ]); 
	x17x28 = COMP <Q, 4> (&input[ 17 ], &input[ 28 ]); 
	x17x29 = COMP <Q, 4> (&input[ 17 ], &input[ 29 ]); 
	x17x30 = COMP <Q, 4> (&input[ 17 ], &input[ 30 ]); 

	x18x19 = 0; 
	x18x20 = 0; 
	x18x21 = 0; 
	x18x22 = 0; 
	x18x23 = 0; 
	x18x24 = 0; 
	x18x25 = 0; 
	x18x26 = 0; 
	x18x27 = 0; 
	x18x28 = 0; 
	x18x29 = 0; 
	x18x30 = 0; 

	x19x20 = COMP <Q, 4> (&input[ 19 ], &input[ 20 ]); 
	x19x21 = COMP <Q, 4> (&input[ 19 ], &input[ 21 ]); 
	x19x22 = COMP <Q, 4> (&input[ 19 ], &input[ 22 ]); 
	x19x23 = COMP <Q, 4> (&input[ 19 ], &input[ 23 ]); 
	x19x24 = COMP <Q, 4> (&input[ 19 ], &input[ 24 ]); 
	x19x25 = COMP <Q, 4> (&input[ 19 ], &input[ 25 ]); 
	x19x26 = COMP <Q, 4> (&input[ 19 ], &input[ 26 ]); 
	x19x27 = COMP <Q, 4> (&input[ 19 ], &input[ 27 ]); 
	x19x28 = COMP <Q, 4> (&input[ 19 ], &input[ 28 ]); 
	x19x29 = COMP <Q, 4> (&input[ 19 ], &input[ 29 ]); 
	x19x30 = COMP <Q, 4> (&input[ 19 ], &input[ 30 ]); 

	x20x21 = 0; 
	x20x22 = 0; 
	x20x23 = 0; 
	x20x24 = 0; 
	x20x25 = 0; 
	x20x26 = 0; 
	x20x27 = 0; 
	x20x28 = 0; 
	x20x29 = 0; 
	x20x30 = 0; 

	x21x22 = COMP <Q, 4> (&input[ 21 ], &input[ 22 ]); 
	x21x23 = COMP <Q, 4> (&input[ 21 ], &input[ 23 ]); 
	x21x24 = COMP <Q, 4> (&input[ 21 ], &input[ 24 ]); 
	x21x25 = COMP <Q, 4> (&input[ 21 ], &input[ 25 ]); 
	x21x26 = COMP <Q, 4> (&input[ 21 ], &input[ 26 ]); 
	x21x27 = COMP <Q, 4> (&input[ 21 ], &input[ 27 ]); 
	x21x28 = COMP <Q, 4> (&input[ 21 ], &input[ 28 ]); 
	x21x29 = COMP <Q, 4> (&input[ 21 ], &input[ 29 ]); 
	x21x30 = COMP <Q, 4> (&input[ 21 ], &input[ 30 ]); 

	x22x23 = 0; 
	x22x24 = 0; 
	x22x25 = 0; 
	x22x26 = 0; 
	x22x27 = 0; 
	x22x28 = 0; 
	x22x29 = 0; 
	x22x30 = 0; 

	x23x24 = COMP <Q, 4> (&input[ 23 ], &input[ 24 ]); 
	x23x25 = COMP <Q, 4> (&input[ 23 ], &input[ 25 ]); 
	x23x26 = COMP <Q, 4> (&input[ 23 ], &input[ 26 ]); 
	x23x27 = COMP <Q, 4> (&input[ 23 ], &input[ 27 ]); 
	x23x28 = COMP <Q, 4> (&input[ 23 ], &input[ 28 ]); 
	x23x29 = COMP <Q, 4> (&input[ 23 ], &input[ 29 ]); 
	x23x30 = COMP <Q, 4> (&input[ 23 ], &input[ 30 ]); 

	x24x25 = 0; 
	x24x26 = 0; 
	x24x27 = 0; 
	x24x28 = 0; 
	x24x29 = 0; 
	x24x30 = 0; 

	x25x26 = COMP <Q, 4> (&input[ 25 ], &input[ 26 ]); 
	x25x27 = COMP <Q, 4> (&input[ 25 ], &input[ 27 ]); 
	x25x28 = COMP <Q, 4> (&input[ 25 ], &input[ 28 ]); 
	x25x29 = COMP <Q, 4> (&input[ 25 ], &input[ 29 ]); 
	x25x30 = COMP <Q, 4> (&input[ 25 ], &input[ 30 ]); 

	x26x27 = 0; 
	x26x28 = 0; 
	x26x29 = 0; 
	x26x30 = 0; 

	x27x28 = COMP <Q, 4> (&input[ 27 ], &input[ 28 ]); 
	x27x29 = COMP <Q, 4> (&input[ 27 ], &input[ 29 ]); 
	x27x30 = COMP <Q, 4> (&input[ 27 ], &input[ 30 ]); 

	x28x29 = 0; 
	x28x30 = 0; 

	x29x30 = COMP <Q, 4> (&input[ 29 ], &input[ 30 ]); 


// ON CALCULE LES POSITIONS DES DONNEES EN SORTIE

	P0 = (sc_uint<5>) x0x1 + (sc_uint<5>) x0x2 + (sc_uint<5>) x0x3 + (sc_uint<5>) x0x4 + (sc_uint<5>) x0x5 + (sc_uint<5>) x0x6 + (sc_uint<5>) x0x7 + (sc_uint<5>) x0x8 + (sc_uint<5>) x0x9 + (sc_uint<5>) x0x10 + (sc_uint<5>) x0x11 + (sc_uint<5>) x0x12 + (sc_uint<5>) x0x13 + (sc_uint<5>) x0x14 + (sc_uint<5>) x0x15 + (sc_uint<5>) x0x16 + (sc_uint<5>) x0x17 + (sc_uint<5>) x0x18 + (sc_uint<5>) x0x19 + (sc_uint<5>) x0x20 + (sc_uint<5>) x0x21 + (sc_uint<5>) x0x22 + (sc_uint<5>) x0x23 + (sc_uint<5>) x0x24 + (sc_uint<5>) x0x25 + (sc_uint<5>) x0x26 + (sc_uint<5>) x0x27 + (sc_uint<5>) x0x28 + (sc_uint<5>) x0x29 + (sc_uint<5>) x0x30;
	P1 = (sc_uint<5>) ~x0x1 + (sc_uint<5>) x1x2 + (sc_uint<5>) x1x3 + (sc_uint<5>) x1x4 + (sc_uint<5>) x1x5 + (sc_uint<5>) x1x6 + (sc_uint<5>) x1x7 + (sc_uint<5>) x1x8 + (sc_uint<5>) x1x9 + (sc_uint<5>) x1x10 + (sc_uint<5>) x1x11 + (sc_uint<5>) x1x12 + (sc_uint<5>) x1x13 + (sc_uint<5>) x1x14 + (sc_uint<5>) x1x15 + (sc_uint<5>) x1x16 + (sc_uint<5>) x1x17 + (sc_uint<5>) x1x18 + (sc_uint<5>) x1x19 + (sc_uint<5>) x1x20 + (sc_uint<5>) x1x21 + (sc_uint<5>) x1x22 + (sc_uint<5>) x1x23 + (sc_uint<5>) x1x24 + (sc_uint<5>) x1x25 + (sc_uint<5>) x1x26 + (sc_uint<5>) x1x27 + (sc_uint<5>) x1x28 + (sc_uint<5>) x1x29 + (sc_uint<5>) x1x30;
	P2 = (sc_uint<5>) ~x0x2 + (sc_uint<5>) ~x1x2 + (sc_uint<5>) x2x3 + (sc_uint<5>) x2x4 + (sc_uint<5>) x2x5 + (sc_uint<5>) x2x6 + (sc_uint<5>) x2x7 + (sc_uint<5>) x2x8 + (sc_uint<5>) x2x9 + (sc_uint<5>) x2x10 + (sc_uint<5>) x2x11 + (sc_uint<5>) x2x12 + (sc_uint<5>) x2x13 + (sc_uint<5>) x2x14 + (sc_uint<5>) x2x15 + (sc_uint<5>) x2x16 + (sc_uint<5>) x2x17 + (sc_uint<5>) x2x18 + (sc_uint<5>) x2x19 + (sc_uint<5>) x2x20 + (sc_uint<5>) x2x21 + (sc_uint<5>) x2x22 + (sc_uint<5>) x2x23 + (sc_uint<5>) x2x24 + (sc_uint<5>) x2x25 + (sc_uint<5>) x2x26 + (sc_uint<5>) x2x27 + (sc_uint<5>) x2x28 + (sc_uint<5>) x2x29 + (sc_uint<5>) x2x30;
	P3 = (sc_uint<5>) ~x0x3 + (sc_uint<5>) ~x1x3 + (sc_uint<5>) ~x2x3 + (sc_uint<5>) x3x4 + (sc_uint<5>) x3x5 + (sc_uint<5>) x3x6 + (sc_uint<5>) x3x7 + (sc_uint<5>) x3x8 + (sc_uint<5>) x3x9 + (sc_uint<5>) x3x10 + (sc_uint<5>) x3x11 + (sc_uint<5>) x3x12 + (sc_uint<5>) x3x13 + (sc_uint<5>) x3x14 + (sc_uint<5>) x3x15 + (sc_uint<5>) x3x16 + (sc_uint<5>) x3x17 + (sc_uint<5>) x3x18 + (sc_uint<5>) x3x19 + (sc_uint<5>) x3x20 + (sc_uint<5>) x3x21 + (sc_uint<5>) x3x22 + (sc_uint<5>) x3x23 + (sc_uint<5>) x3x24 + (sc_uint<5>) x3x25 + (sc_uint<5>) x3x26 + (sc_uint<5>) x3x27 + (sc_uint<5>) x3x28 + (sc_uint<5>) x3x29 + (sc_uint<5>) x3x30;
	P4 = (sc_uint<5>) ~x0x4 + (sc_uint<5>) ~x1x4 + (sc_uint<5>) ~x2x4 + (sc_uint<5>) ~x3x4 + (sc_uint<5>) x4x5 + (sc_uint<5>) x4x6 + (sc_uint<5>) x4x7 + (sc_uint<5>) x4x8 + (sc_uint<5>) x4x9 + (sc_uint<5>) x4x10 + (sc_uint<5>) x4x11 + (sc_uint<5>) x4x12 + (sc_uint<5>) x4x13 + (sc_uint<5>) x4x14 + (sc_uint<5>) x4x15 + (sc_uint<5>) x4x16 + (sc_uint<5>) x4x17 + (sc_uint<5>) x4x18 + (sc_uint<5>) x4x19 + (sc_uint<5>) x4x20 + (sc_uint<5>) x4x21 + (sc_uint<5>) x4x22 + (sc_uint<5>) x4x23 + (sc_uint<5>) x4x24 + (sc_uint<5>) x4x25 + (sc_uint<5>) x4x26 + (sc_uint<5>) x4x27 + (sc_uint<5>) x4x28 + (sc_uint<5>) x4x29 + (sc_uint<5>) x4x30;
	P5 = (sc_uint<5>) ~x0x5 + (sc_uint<5>) ~x1x5 + (sc_uint<5>) ~x2x5 + (sc_uint<5>) ~x3x5 + (sc_uint<5>) ~x4x5 + (sc_uint<5>) x5x6 + (sc_uint<5>) x5x7 + (sc_uint<5>) x5x8 + (sc_uint<5>) x5x9 + (sc_uint<5>) x5x10 + (sc_uint<5>) x5x11 + (sc_uint<5>) x5x12 + (sc_uint<5>) x5x13 + (sc_uint<5>) x5x14 + (sc_uint<5>) x5x15 + (sc_uint<5>) x5x16 + (sc_uint<5>) x5x17 + (sc_uint<5>) x5x18 + (sc_uint<5>) x5x19 + (sc_uint<5>) x5x20 + (sc_uint<5>) x5x21 + (sc_uint<5>) x5x22 + (sc_uint<5>) x5x23 + (sc_uint<5>) x5x24 + (sc_uint<5>) x5x25 + (sc_uint<5>) x5x26 + (sc_uint<5>) x5x27 + (sc_uint<5>) x5x28 + (sc_uint<5>) x5x29 + (sc_uint<5>) x5x30;
	P6 = (sc_uint<5>) ~x0x6 + (sc_uint<5>) ~x1x6 + (sc_uint<5>) ~x2x6 + (sc_uint<5>) ~x3x6 + (sc_uint<5>) ~x4x6 + (sc_uint<5>) ~x5x6 + (sc_uint<5>) x6x7 + (sc_uint<5>) x6x8 + (sc_uint<5>) x6x9 + (sc_uint<5>) x6x10 + (sc_uint<5>) x6x11 + (sc_uint<5>) x6x12 + (sc_uint<5>) x6x13 + (sc_uint<5>) x6x14 + (sc_uint<5>) x6x15 + (sc_uint<5>) x6x16 + (sc_uint<5>) x6x17 + (sc_uint<5>) x6x18 + (sc_uint<5>) x6x19 + (sc_uint<5>) x6x20 + (sc_uint<5>) x6x21 + (sc_uint<5>) x6x22 + (sc_uint<5>) x6x23 + (sc_uint<5>) x6x24 + (sc_uint<5>) x6x25 + (sc_uint<5>) x6x26 + (sc_uint<5>) x6x27 + (sc_uint<5>) x6x28 + (sc_uint<5>) x6x29 + (sc_uint<5>) x6x30;
	P7 = (sc_uint<5>) ~x0x7 + (sc_uint<5>) ~x1x7 + (sc_uint<5>) ~x2x7 + (sc_uint<5>) ~x3x7 + (sc_uint<5>) ~x4x7 + (sc_uint<5>) ~x5x7 + (sc_uint<5>) ~x6x7 + (sc_uint<5>) x7x8 + (sc_uint<5>) x7x9 + (sc_uint<5>) x7x10 + (sc_uint<5>) x7x11 + (sc_uint<5>) x7x12 + (sc_uint<5>) x7x13 + (sc_uint<5>) x7x14 + (sc_uint<5>) x7x15 + (sc_uint<5>) x7x16 + (sc_uint<5>) x7x17 + (sc_uint<5>) x7x18 + (sc_uint<5>) x7x19 + (sc_uint<5>) x7x20 + (sc_uint<5>) x7x21 + (sc_uint<5>) x7x22 + (sc_uint<5>) x7x23 + (sc_uint<5>) x7x24 + (sc_uint<5>) x7x25 + (sc_uint<5>) x7x26 + (sc_uint<5>) x7x27 + (sc_uint<5>) x7x28 + (sc_uint<5>) x7x29 + (sc_uint<5>) x7x30;
	P8 = (sc_uint<5>) ~x0x8 + (sc_uint<5>) ~x1x8 + (sc_uint<5>) ~x2x8 + (sc_uint<5>) ~x3x8 + (sc_uint<5>) ~x4x8 + (sc_uint<5>) ~x5x8 + (sc_uint<5>) ~x6x8 + (sc_uint<5>) ~x7x8 + (sc_uint<5>) x8x9 + (sc_uint<5>) x8x10 + (sc_uint<5>) x8x11 + (sc_uint<5>) x8x12 + (sc_uint<5>) x8x13 + (sc_uint<5>) x8x14 + (sc_uint<5>) x8x15 + (sc_uint<5>) x8x16 + (sc_uint<5>) x8x17 + (sc_uint<5>) x8x18 + (sc_uint<5>) x8x19 + (sc_uint<5>) x8x20 + (sc_uint<5>) x8x21 + (sc_uint<5>) x8x22 + (sc_uint<5>) x8x23 + (sc_uint<5>) x8x24 + (sc_uint<5>) x8x25 + (sc_uint<5>) x8x26 + (sc_uint<5>) x8x27 + (sc_uint<5>) x8x28 + (sc_uint<5>) x8x29 + (sc_uint<5>) x8x30;
	P9 = (sc_uint<5>) ~x0x9 + (sc_uint<5>) ~x1x9 + (sc_uint<5>) ~x2x9 + (sc_uint<5>) ~x3x9 + (sc_uint<5>) ~x4x9 + (sc_uint<5>) ~x5x9 + (sc_uint<5>) ~x6x9 + (sc_uint<5>) ~x7x9 + (sc_uint<5>) ~x8x9 + (sc_uint<5>) x9x10 + (sc_uint<5>) x9x11 + (sc_uint<5>) x9x12 + (sc_uint<5>) x9x13 + (sc_uint<5>) x9x14 + (sc_uint<5>) x9x15 + (sc_uint<5>) x9x16 + (sc_uint<5>) x9x17 + (sc_uint<5>) x9x18 + (sc_uint<5>) x9x19 + (sc_uint<5>) x9x20 + (sc_uint<5>) x9x21 + (sc_uint<5>) x9x22 + (sc_uint<5>) x9x23 + (sc_uint<5>) x9x24 + (sc_uint<5>) x9x25 + (sc_uint<5>) x9x26 + (sc_uint<5>) x9x27 + (sc_uint<5>) x9x28 + (sc_uint<5>) x9x29 + (sc_uint<5>) x9x30;
	P10 = (sc_uint<5>) ~x0x10 + (sc_uint<5>) ~x1x10 + (sc_uint<5>) ~x2x10 + (sc_uint<5>) ~x3x10 + (sc_uint<5>) ~x4x10 + (sc_uint<5>) ~x5x10 + (sc_uint<5>) ~x6x10 + (sc_uint<5>) ~x7x10 + (sc_uint<5>) ~x8x10 + (sc_uint<5>) ~x9x10 + (sc_uint<5>) x10x11 + (sc_uint<5>) x10x12 + (sc_uint<5>) x10x13 + (sc_uint<5>) x10x14 + (sc_uint<5>) x10x15 + (sc_uint<5>) x10x16 + (sc_uint<5>) x10x17 + (sc_uint<5>) x10x18 + (sc_uint<5>) x10x19 + (sc_uint<5>) x10x20 + (sc_uint<5>) x10x21 + (sc_uint<5>) x10x22 + (sc_uint<5>) x10x23 + (sc_uint<5>) x10x24 + (sc_uint<5>) x10x25 + (sc_uint<5>) x10x26 + (sc_uint<5>) x10x27 + (sc_uint<5>) x10x28 + (sc_uint<5>) x10x29 + (sc_uint<5>) x10x30;
	P11 = (sc_uint<5>) ~x0x11 + (sc_uint<5>) ~x1x11 + (sc_uint<5>) ~x2x11 + (sc_uint<5>) ~x3x11 + (sc_uint<5>) ~x4x11 + (sc_uint<5>) ~x5x11 + (sc_uint<5>) ~x6x11 + (sc_uint<5>) ~x7x11 + (sc_uint<5>) ~x8x11 + (sc_uint<5>) ~x9x11 + (sc_uint<5>) ~x10x11 + (sc_uint<5>) x11x12 + (sc_uint<5>) x11x13 + (sc_uint<5>) x11x14 + (sc_uint<5>) x11x15 + (sc_uint<5>) x11x16 + (sc_uint<5>) x11x17 + (sc_uint<5>) x11x18 + (sc_uint<5>) x11x19 + (sc_uint<5>) x11x20 + (sc_uint<5>) x11x21 + (sc_uint<5>) x11x22 + (sc_uint<5>) x11x23 + (sc_uint<5>) x11x24 + (sc_uint<5>) x11x25 + (sc_uint<5>) x11x26 + (sc_uint<5>) x11x27 + (sc_uint<5>) x11x28 + (sc_uint<5>) x11x29 + (sc_uint<5>) x11x30;
	P12 = (sc_uint<5>) ~x0x12 + (sc_uint<5>) ~x1x12 + (sc_uint<5>) ~x2x12 + (sc_uint<5>) ~x3x12 + (sc_uint<5>) ~x4x12 + (sc_uint<5>) ~x5x12 + (sc_uint<5>) ~x6x12 + (sc_uint<5>) ~x7x12 + (sc_uint<5>) ~x8x12 + (sc_uint<5>) ~x9x12 + (sc_uint<5>) ~x10x12 + (sc_uint<5>) ~x11x12 + (sc_uint<5>) x12x13 + (sc_uint<5>) x12x14 + (sc_uint<5>) x12x15 + (sc_uint<5>) x12x16 + (sc_uint<5>) x12x17 + (sc_uint<5>) x12x18 + (sc_uint<5>) x12x19 + (sc_uint<5>) x12x20 + (sc_uint<5>) x12x21 + (sc_uint<5>) x12x22 + (sc_uint<5>) x12x23 + (sc_uint<5>) x12x24 + (sc_uint<5>) x12x25 + (sc_uint<5>) x12x26 + (sc_uint<5>) x12x27 + (sc_uint<5>) x12x28 + (sc_uint<5>) x12x29 + (sc_uint<5>) x12x30;
	P13 = (sc_uint<5>) ~x0x13 + (sc_uint<5>) ~x1x13 + (sc_uint<5>) ~x2x13 + (sc_uint<5>) ~x3x13 + (sc_uint<5>) ~x4x13 + (sc_uint<5>) ~x5x13 + (sc_uint<5>) ~x6x13 + (sc_uint<5>) ~x7x13 + (sc_uint<5>) ~x8x13 + (sc_uint<5>) ~x9x13 + (sc_uint<5>) ~x10x13 + (sc_uint<5>) ~x11x13 + (sc_uint<5>) ~x12x13 + (sc_uint<5>) x13x14 + (sc_uint<5>) x13x15 + (sc_uint<5>) x13x16 + (sc_uint<5>) x13x17 + (sc_uint<5>) x13x18 + (sc_uint<5>) x13x19 + (sc_uint<5>) x13x20 + (sc_uint<5>) x13x21 + (sc_uint<5>) x13x22 + (sc_uint<5>) x13x23 + (sc_uint<5>) x13x24 + (sc_uint<5>) x13x25 + (sc_uint<5>) x13x26 + (sc_uint<5>) x13x27 + (sc_uint<5>) x13x28 + (sc_uint<5>) x13x29 + (sc_uint<5>) x13x30;
	P14 = (sc_uint<5>) ~x0x14 + (sc_uint<5>) ~x1x14 + (sc_uint<5>) ~x2x14 + (sc_uint<5>) ~x3x14 + (sc_uint<5>) ~x4x14 + (sc_uint<5>) ~x5x14 + (sc_uint<5>) ~x6x14 + (sc_uint<5>) ~x7x14 + (sc_uint<5>) ~x8x14 + (sc_uint<5>) ~x9x14 + (sc_uint<5>) ~x10x14 + (sc_uint<5>) ~x11x14 + (sc_uint<5>) ~x12x14 + (sc_uint<5>) ~x13x14 + (sc_uint<5>) x14x15 + (sc_uint<5>) x14x16 + (sc_uint<5>) x14x17 + (sc_uint<5>) x14x18 + (sc_uint<5>) x14x19 + (sc_uint<5>) x14x20 + (sc_uint<5>) x14x21 + (sc_uint<5>) x14x22 + (sc_uint<5>) x14x23 + (sc_uint<5>) x14x24 + (sc_uint<5>) x14x25 + (sc_uint<5>) x14x26 + (sc_uint<5>) x14x27 + (sc_uint<5>) x14x28 + (sc_uint<5>) x14x29 + (sc_uint<5>) x14x30;
	P15 = (sc_uint<5>) ~x0x15 + (sc_uint<5>) ~x1x15 + (sc_uint<5>) ~x2x15 + (sc_uint<5>) ~x3x15 + (sc_uint<5>) ~x4x15 + (sc_uint<5>) ~x5x15 + (sc_uint<5>) ~x6x15 + (sc_uint<5>) ~x7x15 + (sc_uint<5>) ~x8x15 + (sc_uint<5>) ~x9x15 + (sc_uint<5>) ~x10x15 + (sc_uint<5>) ~x11x15 + (sc_uint<5>) ~x12x15 + (sc_uint<5>) ~x13x15 + (sc_uint<5>) ~x14x15 + (sc_uint<5>) x15x16 + (sc_uint<5>) x15x17 + (sc_uint<5>) x15x18 + (sc_uint<5>) x15x19 + (sc_uint<5>) x15x20 + (sc_uint<5>) x15x21 + (sc_uint<5>) x15x22 + (sc_uint<5>) x15x23 + (sc_uint<5>) x15x24 + (sc_uint<5>) x15x25 + (sc_uint<5>) x15x26 + (sc_uint<5>) x15x27 + (sc_uint<5>) x15x28 + (sc_uint<5>) x15x29 + (sc_uint<5>) x15x30;
	P16 = (sc_uint<5>) ~x0x16 + (sc_uint<5>) ~x1x16 + (sc_uint<5>) ~x2x16 + (sc_uint<5>) ~x3x16 + (sc_uint<5>) ~x4x16 + (sc_uint<5>) ~x5x16 + (sc_uint<5>) ~x6x16 + (sc_uint<5>) ~x7x16 + (sc_uint<5>) ~x8x16 + (sc_uint<5>) ~x9x16 + (sc_uint<5>) ~x10x16 + (sc_uint<5>) ~x11x16 + (sc_uint<5>) ~x12x16 + (sc_uint<5>) ~x13x16 + (sc_uint<5>) ~x14x16 + (sc_uint<5>) ~x15x16 + (sc_uint<5>) x16x17 + (sc_uint<5>) x16x18 + (sc_uint<5>) x16x19 + (sc_uint<5>) x16x20 + (sc_uint<5>) x16x21 + (sc_uint<5>) x16x22 + (sc_uint<5>) x16x23 + (sc_uint<5>) x16x24 + (sc_uint<5>) x16x25 + (sc_uint<5>) x16x26 + (sc_uint<5>) x16x27 + (sc_uint<5>) x16x28 + (sc_uint<5>) x16x29 + (sc_uint<5>) x16x30;
	P17 = (sc_uint<5>) ~x0x17 + (sc_uint<5>) ~x1x17 + (sc_uint<5>) ~x2x17 + (sc_uint<5>) ~x3x17 + (sc_uint<5>) ~x4x17 + (sc_uint<5>) ~x5x17 + (sc_uint<5>) ~x6x17 + (sc_uint<5>) ~x7x17 + (sc_uint<5>) ~x8x17 + (sc_uint<5>) ~x9x17 + (sc_uint<5>) ~x10x17 + (sc_uint<5>) ~x11x17 + (sc_uint<5>) ~x12x17 + (sc_uint<5>) ~x13x17 + (sc_uint<5>) ~x14x17 + (sc_uint<5>) ~x15x17 + (sc_uint<5>) ~x16x17 + (sc_uint<5>) x17x18 + (sc_uint<5>) x17x19 + (sc_uint<5>) x17x20 + (sc_uint<5>) x17x21 + (sc_uint<5>) x17x22 + (sc_uint<5>) x17x23 + (sc_uint<5>) x17x24 + (sc_uint<5>) x17x25 + (sc_uint<5>) x17x26 + (sc_uint<5>) x17x27 + (sc_uint<5>) x17x28 + (sc_uint<5>) x17x29 + (sc_uint<5>) x17x30;
	P18 = (sc_uint<5>) ~x0x18 + (sc_uint<5>) ~x1x18 + (sc_uint<5>) ~x2x18 + (sc_uint<5>) ~x3x18 + (sc_uint<5>) ~x4x18 + (sc_uint<5>) ~x5x18 + (sc_uint<5>) ~x6x18 + (sc_uint<5>) ~x7x18 + (sc_uint<5>) ~x8x18 + (sc_uint<5>) ~x9x18 + (sc_uint<5>) ~x10x18 + (sc_uint<5>) ~x11x18 + (sc_uint<5>) ~x12x18 + (sc_uint<5>) ~x13x18 + (sc_uint<5>) ~x14x18 + (sc_uint<5>) ~x15x18 + (sc_uint<5>) ~x16x18 + (sc_uint<5>) ~x17x18 + (sc_uint<5>) x18x19 + (sc_uint<5>) x18x20 + (sc_uint<5>) x18x21 + (sc_uint<5>) x18x22 + (sc_uint<5>) x18x23 + (sc_uint<5>) x18x24 + (sc_uint<5>) x18x25 + (sc_uint<5>) x18x26 + (sc_uint<5>) x18x27 + (sc_uint<5>) x18x28 + (sc_uint<5>) x18x29 + (sc_uint<5>) x18x30;
	P19 = (sc_uint<5>) ~x0x19 + (sc_uint<5>) ~x1x19 + (sc_uint<5>) ~x2x19 + (sc_uint<5>) ~x3x19 + (sc_uint<5>) ~x4x19 + (sc_uint<5>) ~x5x19 + (sc_uint<5>) ~x6x19 + (sc_uint<5>) ~x7x19 + (sc_uint<5>) ~x8x19 + (sc_uint<5>) ~x9x19 + (sc_uint<5>) ~x10x19 + (sc_uint<5>) ~x11x19 + (sc_uint<5>) ~x12x19 + (sc_uint<5>) ~x13x19 + (sc_uint<5>) ~x14x19 + (sc_uint<5>) ~x15x19 + (sc_uint<5>) ~x16x19 + (sc_uint<5>) ~x17x19 + (sc_uint<5>) ~x18x19 + (sc_uint<5>) x19x20 + (sc_uint<5>) x19x21 + (sc_uint<5>) x19x22 + (sc_uint<5>) x19x23 + (sc_uint<5>) x19x24 + (sc_uint<5>) x19x25 + (sc_uint<5>) x19x26 + (sc_uint<5>) x19x27 + (sc_uint<5>) x19x28 + (sc_uint<5>) x19x29 + (sc_uint<5>) x19x30;
	P20 = (sc_uint<5>) ~x0x20 + (sc_uint<5>) ~x1x20 + (sc_uint<5>) ~x2x20 + (sc_uint<5>) ~x3x20 + (sc_uint<5>) ~x4x20 + (sc_uint<5>) ~x5x20 + (sc_uint<5>) ~x6x20 + (sc_uint<5>) ~x7x20 + (sc_uint<5>) ~x8x20 + (sc_uint<5>) ~x9x20 + (sc_uint<5>) ~x10x20 + (sc_uint<5>) ~x11x20 + (sc_uint<5>) ~x12x20 + (sc_uint<5>) ~x13x20 + (sc_uint<5>) ~x14x20 + (sc_uint<5>) ~x15x20 + (sc_uint<5>) ~x16x20 + (sc_uint<5>) ~x17x20 + (sc_uint<5>) ~x18x20 + (sc_uint<5>) ~x19x20 + (sc_uint<5>) x20x21 + (sc_uint<5>) x20x22 + (sc_uint<5>) x20x23 + (sc_uint<5>) x20x24 + (sc_uint<5>) x20x25 + (sc_uint<5>) x20x26 + (sc_uint<5>) x20x27 + (sc_uint<5>) x20x28 + (sc_uint<5>) x20x29 + (sc_uint<5>) x20x30;
	P21 = (sc_uint<5>) ~x0x21 + (sc_uint<5>) ~x1x21 + (sc_uint<5>) ~x2x21 + (sc_uint<5>) ~x3x21 + (sc_uint<5>) ~x4x21 + (sc_uint<5>) ~x5x21 + (sc_uint<5>) ~x6x21 + (sc_uint<5>) ~x7x21 + (sc_uint<5>) ~x8x21 + (sc_uint<5>) ~x9x21 + (sc_uint<5>) ~x10x21 + (sc_uint<5>) ~x11x21 + (sc_uint<5>) ~x12x21 + (sc_uint<5>) ~x13x21 + (sc_uint<5>) ~x14x21 + (sc_uint<5>) ~x15x21 + (sc_uint<5>) ~x16x21 + (sc_uint<5>) ~x17x21 + (sc_uint<5>) ~x18x21 + (sc_uint<5>) ~x19x21 + (sc_uint<5>) ~x20x21 + (sc_uint<5>) x21x22 + (sc_uint<5>) x21x23 + (sc_uint<5>) x21x24 + (sc_uint<5>) x21x25 + (sc_uint<5>) x21x26 + (sc_uint<5>) x21x27 + (sc_uint<5>) x21x28 + (sc_uint<5>) x21x29 + (sc_uint<5>) x21x30;
	P22 = (sc_uint<5>) ~x0x22 + (sc_uint<5>) ~x1x22 + (sc_uint<5>) ~x2x22 + (sc_uint<5>) ~x3x22 + (sc_uint<5>) ~x4x22 + (sc_uint<5>) ~x5x22 + (sc_uint<5>) ~x6x22 + (sc_uint<5>) ~x7x22 + (sc_uint<5>) ~x8x22 + (sc_uint<5>) ~x9x22 + (sc_uint<5>) ~x10x22 + (sc_uint<5>) ~x11x22 + (sc_uint<5>) ~x12x22 + (sc_uint<5>) ~x13x22 + (sc_uint<5>) ~x14x22 + (sc_uint<5>) ~x15x22 + (sc_uint<5>) ~x16x22 + (sc_uint<5>) ~x17x22 + (sc_uint<5>) ~x18x22 + (sc_uint<5>) ~x19x22 + (sc_uint<5>) ~x20x22 + (sc_uint<5>) ~x21x22 + (sc_uint<5>) x22x23 + (sc_uint<5>) x22x24 + (sc_uint<5>) x22x25 + (sc_uint<5>) x22x26 + (sc_uint<5>) x22x27 + (sc_uint<5>) x22x28 + (sc_uint<5>) x22x29 + (sc_uint<5>) x22x30;
	P23 = (sc_uint<5>) ~x0x23 + (sc_uint<5>) ~x1x23 + (sc_uint<5>) ~x2x23 + (sc_uint<5>) ~x3x23 + (sc_uint<5>) ~x4x23 + (sc_uint<5>) ~x5x23 + (sc_uint<5>) ~x6x23 + (sc_uint<5>) ~x7x23 + (sc_uint<5>) ~x8x23 + (sc_uint<5>) ~x9x23 + (sc_uint<5>) ~x10x23 + (sc_uint<5>) ~x11x23 + (sc_uint<5>) ~x12x23 + (sc_uint<5>) ~x13x23 + (sc_uint<5>) ~x14x23 + (sc_uint<5>) ~x15x23 + (sc_uint<5>) ~x16x23 + (sc_uint<5>) ~x17x23 + (sc_uint<5>) ~x18x23 + (sc_uint<5>) ~x19x23 + (sc_uint<5>) ~x20x23 + (sc_uint<5>) ~x21x23 + (sc_uint<5>) ~x22x23 + (sc_uint<5>) x23x24 + (sc_uint<5>) x23x25 + (sc_uint<5>) x23x26 + (sc_uint<5>) x23x27 + (sc_uint<5>) x23x28 + (sc_uint<5>) x23x29 + (sc_uint<5>) x23x30;
	P24 = (sc_uint<5>) ~x0x24 + (sc_uint<5>) ~x1x24 + (sc_uint<5>) ~x2x24 + (sc_uint<5>) ~x3x24 + (sc_uint<5>) ~x4x24 + (sc_uint<5>) ~x5x24 + (sc_uint<5>) ~x6x24 + (sc_uint<5>) ~x7x24 + (sc_uint<5>) ~x8x24 + (sc_uint<5>) ~x9x24 + (sc_uint<5>) ~x10x24 + (sc_uint<5>) ~x11x24 + (sc_uint<5>) ~x12x24 + (sc_uint<5>) ~x13x24 + (sc_uint<5>) ~x14x24 + (sc_uint<5>) ~x15x24 + (sc_uint<5>) ~x16x24 + (sc_uint<5>) ~x17x24 + (sc_uint<5>) ~x18x24 + (sc_uint<5>) ~x19x24 + (sc_uint<5>) ~x20x24 + (sc_uint<5>) ~x21x24 + (sc_uint<5>) ~x22x24 + (sc_uint<5>) ~x23x24 + (sc_uint<5>) x24x25 + (sc_uint<5>) x24x26 + (sc_uint<5>) x24x27 + (sc_uint<5>) x24x28 + (sc_uint<5>) x24x29 + (sc_uint<5>) x24x30;
	P25 = (sc_uint<5>) ~x0x25 + (sc_uint<5>) ~x1x25 + (sc_uint<5>) ~x2x25 + (sc_uint<5>) ~x3x25 + (sc_uint<5>) ~x4x25 + (sc_uint<5>) ~x5x25 + (sc_uint<5>) ~x6x25 + (sc_uint<5>) ~x7x25 + (sc_uint<5>) ~x8x25 + (sc_uint<5>) ~x9x25 + (sc_uint<5>) ~x10x25 + (sc_uint<5>) ~x11x25 + (sc_uint<5>) ~x12x25 + (sc_uint<5>) ~x13x25 + (sc_uint<5>) ~x14x25 + (sc_uint<5>) ~x15x25 + (sc_uint<5>) ~x16x25 + (sc_uint<5>) ~x17x25 + (sc_uint<5>) ~x18x25 + (sc_uint<5>) ~x19x25 + (sc_uint<5>) ~x20x25 + (sc_uint<5>) ~x21x25 + (sc_uint<5>) ~x22x25 + (sc_uint<5>) ~x23x25 + (sc_uint<5>) ~x24x25 + (sc_uint<5>) x25x26 + (sc_uint<5>) x25x27 + (sc_uint<5>) x25x28 + (sc_uint<5>) x25x29 + (sc_uint<5>) x25x30;
	P26 = (sc_uint<5>) ~x0x26 + (sc_uint<5>) ~x1x26 + (sc_uint<5>) ~x2x26 + (sc_uint<5>) ~x3x26 + (sc_uint<5>) ~x4x26 + (sc_uint<5>) ~x5x26 + (sc_uint<5>) ~x6x26 + (sc_uint<5>) ~x7x26 + (sc_uint<5>) ~x8x26 + (sc_uint<5>) ~x9x26 + (sc_uint<5>) ~x10x26 + (sc_uint<5>) ~x11x26 + (sc_uint<5>) ~x12x26 + (sc_uint<5>) ~x13x26 + (sc_uint<5>) ~x14x26 + (sc_uint<5>) ~x15x26 + (sc_uint<5>) ~x16x26 + (sc_uint<5>) ~x17x26 + (sc_uint<5>) ~x18x26 + (sc_uint<5>) ~x19x26 + (sc_uint<5>) ~x20x26 + (sc_uint<5>) ~x21x26 + (sc_uint<5>) ~x22x26 + (sc_uint<5>) ~x23x26 + (sc_uint<5>) ~x24x26 + (sc_uint<5>) ~x25x26 + (sc_uint<5>) x26x27 + (sc_uint<5>) x26x28 + (sc_uint<5>) x26x29 + (sc_uint<5>) x26x30;
	P27 = (sc_uint<5>) ~x0x27 + (sc_uint<5>) ~x1x27 + (sc_uint<5>) ~x2x27 + (sc_uint<5>) ~x3x27 + (sc_uint<5>) ~x4x27 + (sc_uint<5>) ~x5x27 + (sc_uint<5>) ~x6x27 + (sc_uint<5>) ~x7x27 + (sc_uint<5>) ~x8x27 + (sc_uint<5>) ~x9x27 + (sc_uint<5>) ~x10x27 + (sc_uint<5>) ~x11x27 + (sc_uint<5>) ~x12x27 + (sc_uint<5>) ~x13x27 + (sc_uint<5>) ~x14x27 + (sc_uint<5>) ~x15x27 + (sc_uint<5>) ~x16x27 + (sc_uint<5>) ~x17x27 + (sc_uint<5>) ~x18x27 + (sc_uint<5>) ~x19x27 + (sc_uint<5>) ~x20x27 + (sc_uint<5>) ~x21x27 + (sc_uint<5>) ~x22x27 + (sc_uint<5>) ~x23x27 + (sc_uint<5>) ~x24x27 + (sc_uint<5>) ~x25x27 + (sc_uint<5>) ~x26x27 + (sc_uint<5>) x27x28 + (sc_uint<5>) x27x29 + (sc_uint<5>) x27x30;
	P28 = (sc_uint<5>) ~x0x28 + (sc_uint<5>) ~x1x28 + (sc_uint<5>) ~x2x28 + (sc_uint<5>) ~x3x28 + (sc_uint<5>) ~x4x28 + (sc_uint<5>) ~x5x28 + (sc_uint<5>) ~x6x28 + (sc_uint<5>) ~x7x28 + (sc_uint<5>) ~x8x28 + (sc_uint<5>) ~x9x28 + (sc_uint<5>) ~x10x28 + (sc_uint<5>) ~x11x28 + (sc_uint<5>) ~x12x28 + (sc_uint<5>) ~x13x28 + (sc_uint<5>) ~x14x28 + (sc_uint<5>) ~x15x28 + (sc_uint<5>) ~x16x28 + (sc_uint<5>) ~x17x28 + (sc_uint<5>) ~x18x28 + (sc_uint<5>) ~x19x28 + (sc_uint<5>) ~x20x28 + (sc_uint<5>) ~x21x28 + (sc_uint<5>) ~x22x28 + (sc_uint<5>) ~x23x28 + (sc_uint<5>) ~x24x28 + (sc_uint<5>) ~x25x28 + (sc_uint<5>) ~x26x28 + (sc_uint<5>) ~x27x28 + (sc_uint<5>) x28x29 + (sc_uint<5>) x28x30;
	P29 = (sc_uint<5>) ~x0x29 + (sc_uint<5>) ~x1x29 + (sc_uint<5>) ~x2x29 + (sc_uint<5>) ~x3x29 + (sc_uint<5>) ~x4x29 + (sc_uint<5>) ~x5x29 + (sc_uint<5>) ~x6x29 + (sc_uint<5>) ~x7x29 + (sc_uint<5>) ~x8x29 + (sc_uint<5>) ~x9x29 + (sc_uint<5>) ~x10x29 + (sc_uint<5>) ~x11x29 + (sc_uint<5>) ~x12x29 + (sc_uint<5>) ~x13x29 + (sc_uint<5>) ~x14x29 + (sc_uint<5>) ~x15x29 + (sc_uint<5>) ~x16x29 + (sc_uint<5>) ~x17x29 + (sc_uint<5>) ~x18x29 + (sc_uint<5>) ~x19x29 + (sc_uint<5>) ~x20x29 + (sc_uint<5>) ~x21x29 + (sc_uint<5>) ~x22x29 + (sc_uint<5>) ~x23x29 + (sc_uint<5>) ~x24x29 + (sc_uint<5>) ~x25x29 + (sc_uint<5>) ~x26x29 + (sc_uint<5>) ~x27x29 + (sc_uint<5>) ~x28x29 + (sc_uint<5>) x29x30;
	P30 = (sc_uint<5>) ~x0x30 + (sc_uint<5>) ~x1x30 + (sc_uint<5>) ~x2x30 + (sc_uint<5>) ~x3x30 + (sc_uint<5>) ~x4x30 + (sc_uint<5>) ~x5x30 + (sc_uint<5>) ~x6x30 + (sc_uint<5>) ~x7x30 + (sc_uint<5>) ~x8x30 + (sc_uint<5>) ~x9x30 + (sc_uint<5>) ~x10x30 + (sc_uint<5>) ~x11x30 + (sc_uint<5>) ~x12x30 + (sc_uint<5>) ~x13x30 + (sc_uint<5>) ~x14x30 + (sc_uint<5>) ~x15x30 + (sc_uint<5>) ~x16x30 + (sc_uint<5>) ~x17x30 + (sc_uint<5>) ~x18x30 + (sc_uint<5>) ~x19x30 + (sc_uint<5>) ~x20x30 + (sc_uint<5>) ~x21x30 + (sc_uint<5>) ~x22x30 + (sc_uint<5>) ~x23x30 + (sc_uint<5>) ~x24x30 + (sc_uint<5>) ~x25x30 + (sc_uint<5>) ~x26x30 + (sc_uint<5>) ~x27x30 + (sc_uint<5>) ~x28x30 + (sc_uint<5>) ~x29x30;

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
	else	if ( P15 == 8 )
		temp[8] = input[15]; 
	else	if ( P16 == 8 )
		temp[8] = input[16]; 

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
	else	if ( P15 == 9 )
		temp[9] = input[15]; 
	else	if ( P16 == 9 )
		temp[9] = input[16]; 
	else	if ( P17 == 9 )
		temp[9] = input[17]; 
	else	if ( P18 == 9 )
		temp[9] = input[18]; 

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
	else	if ( P15 == 10 )
		temp[10] = input[15]; 
	else	if ( P16 == 10 )
		temp[10] = input[16]; 
	else	if ( P17 == 10 )
		temp[10] = input[17]; 
	else	if ( P18 == 10 )
		temp[10] = input[18]; 
	else	if ( P19 == 10 )
		temp[10] = input[19]; 
	else	if ( P20 == 10 )
		temp[10] = input[20]; 

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
	else	if ( P15 == 11 )
		temp[11] = input[15]; 
	else	if ( P16 == 11 )
		temp[11] = input[16]; 
	else	if ( P17 == 11 )
		temp[11] = input[17]; 
	else	if ( P18 == 11 )
		temp[11] = input[18]; 
	else	if ( P19 == 11 )
		temp[11] = input[19]; 
	else	if ( P20 == 11 )
		temp[11] = input[20]; 
	else	if ( P21 == 11 )
		temp[11] = input[21]; 
	else	if ( P22 == 11 )
		temp[11] = input[22]; 

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
	else	if ( P15 == 12 )
		temp[12] = input[15]; 
	else	if ( P16 == 12 )
		temp[12] = input[16]; 
	else	if ( P17 == 12 )
		temp[12] = input[17]; 
	else	if ( P18 == 12 )
		temp[12] = input[18]; 
	else	if ( P19 == 12 )
		temp[12] = input[19]; 
	else	if ( P20 == 12 )
		temp[12] = input[20]; 
	else	if ( P21 == 12 )
		temp[12] = input[21]; 
	else	if ( P22 == 12 )
		temp[12] = input[22]; 
	else	if ( P23 == 12 )
		temp[12] = input[23]; 
	else	if ( P24 == 12 )
		temp[12] = input[24]; 

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
	else	if ( P15 == 13 )
		temp[13] = input[15]; 
	else	if ( P16 == 13 )
		temp[13] = input[16]; 
	else	if ( P17 == 13 )
		temp[13] = input[17]; 
	else	if ( P18 == 13 )
		temp[13] = input[18]; 
	else	if ( P19 == 13 )
		temp[13] = input[19]; 
	else	if ( P20 == 13 )
		temp[13] = input[20]; 
	else	if ( P21 == 13 )
		temp[13] = input[21]; 
	else	if ( P22 == 13 )
		temp[13] = input[22]; 
	else	if ( P23 == 13 )
		temp[13] = input[23]; 
	else	if ( P24 == 13 )
		temp[13] = input[24]; 
	else	if ( P25 == 13 )
		temp[13] = input[25]; 
	else	if ( P26 == 13 )
		temp[13] = input[26]; 

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
	else	if ( P15 == 14 )
		temp[14] = input[15]; 
	else	if ( P16 == 14 )
		temp[14] = input[16]; 
	else	if ( P17 == 14 )
		temp[14] = input[17]; 
	else	if ( P18 == 14 )
		temp[14] = input[18]; 
	else	if ( P19 == 14 )
		temp[14] = input[19]; 
	else	if ( P20 == 14 )
		temp[14] = input[20]; 
	else	if ( P21 == 14 )
		temp[14] = input[21]; 
	else	if ( P22 == 14 )
		temp[14] = input[22]; 
	else	if ( P23 == 14 )
		temp[14] = input[23]; 
	else	if ( P24 == 14 )
		temp[14] = input[24]; 
	else	if ( P25 == 14 )
		temp[14] = input[25]; 
	else	if ( P26 == 14 )
		temp[14] = input[26]; 
	else	if ( P27 == 14 )
		temp[14] = input[27]; 
	else	if ( P28 == 14 )
		temp[14] = input[28]; 

	if ( P1 == 15 )
		temp[15] = input[1]; 
	else	if ( P3 == 15 )
		temp[15] = input[3]; 
	else	if ( P5 == 15 )
		temp[15] = input[5]; 
	else	if ( P7 == 15 )
		temp[15] = input[7]; 
	else	if ( P9 == 15 )
		temp[15] = input[9]; 
	else	if ( P11 == 15 )
		temp[15] = input[11]; 
	else	if ( P13 == 15 )
		temp[15] = input[13]; 
	else	if ( P15 == 15 )
		temp[15] = input[15]; 
	else	if ( P16 == 15 )
		temp[15] = input[16]; 
	else	if ( P17 == 15 )
		temp[15] = input[17]; 
	else	if ( P18 == 15 )
		temp[15] = input[18]; 
	else	if ( P19 == 15 )
		temp[15] = input[19]; 
	else	if ( P20 == 15 )
		temp[15] = input[20]; 
	else	if ( P21 == 15 )
		temp[15] = input[21]; 
	else	if ( P22 == 15 )
		temp[15] = input[22]; 
	else	if ( P23 == 15 )
		temp[15] = input[23]; 
	else	if ( P24 == 15 )
		temp[15] = input[24]; 
	else	if ( P25 == 15 )
		temp[15] = input[25]; 
	else	if ( P26 == 15 )
		temp[15] = input[26]; 
	else	if ( P27 == 15 )
		temp[15] = input[27]; 
	else	if ( P28 == 15 )
		temp[15] = input[28]; 
	else	if ( P29 == 15 )
		temp[15] = input[29]; 
	else	if ( P30 == 15 )
		temp[15] = input[30]; 

	if ( P1 == 16 )
		temp[16] = input[1]; 
	else	if ( P3 == 16 )
		temp[16] = input[3]; 
	else	if ( P5 == 16 )
		temp[16] = input[5]; 
	else	if ( P7 == 16 )
		temp[16] = input[7]; 
	else	if ( P9 == 16 )
		temp[16] = input[9]; 
	else	if ( P11 == 16 )
		temp[16] = input[11]; 
	else	if ( P13 == 16 )
		temp[16] = input[13]; 
	else	if ( P15 == 16 )
		temp[16] = input[15]; 
	else	if ( P16 == 16 )
		temp[16] = input[16]; 
	else	if ( P17 == 16 )
		temp[16] = input[17]; 
	else	if ( P18 == 16 )
		temp[16] = input[18]; 
	else	if ( P19 == 16 )
		temp[16] = input[19]; 
	else	if ( P20 == 16 )
		temp[16] = input[20]; 
	else	if ( P21 == 16 )
		temp[16] = input[21]; 
	else	if ( P22 == 16 )
		temp[16] = input[22]; 
	else	if ( P23 == 16 )
		temp[16] = input[23]; 
	else	if ( P24 == 16 )
		temp[16] = input[24]; 
	else	if ( P25 == 16 )
		temp[16] = input[25]; 
	else	if ( P26 == 16 )
		temp[16] = input[26]; 
	else	if ( P27 == 16 )
		temp[16] = input[27]; 
	else	if ( P28 == 16 )
		temp[16] = input[28]; 
	else	if ( P29 == 16 )
		temp[16] = input[29]; 
	else	if ( P30 == 16 )
		temp[16] = input[30]; 

	if ( P1 == 17 )
		temp[17] = input[1]; 
	else	if ( P3 == 17 )
		temp[17] = input[3]; 
	else	if ( P5 == 17 )
		temp[17] = input[5]; 
	else	if ( P7 == 17 )
		temp[17] = input[7]; 
	else	if ( P9 == 17 )
		temp[17] = input[9]; 
	else	if ( P11 == 17 )
		temp[17] = input[11]; 
	else	if ( P13 == 17 )
		temp[17] = input[13]; 
	else	if ( P15 == 17 )
		temp[17] = input[15]; 
	else	if ( P17 == 17 )
		temp[17] = input[17]; 
	else	if ( P18 == 17 )
		temp[17] = input[18]; 
	else	if ( P19 == 17 )
		temp[17] = input[19]; 
	else	if ( P20 == 17 )
		temp[17] = input[20]; 
	else	if ( P21 == 17 )
		temp[17] = input[21]; 
	else	if ( P22 == 17 )
		temp[17] = input[22]; 
	else	if ( P23 == 17 )
		temp[17] = input[23]; 
	else	if ( P24 == 17 )
		temp[17] = input[24]; 
	else	if ( P25 == 17 )
		temp[17] = input[25]; 
	else	if ( P26 == 17 )
		temp[17] = input[26]; 
	else	if ( P27 == 17 )
		temp[17] = input[27]; 
	else	if ( P28 == 17 )
		temp[17] = input[28]; 
	else	if ( P29 == 17 )
		temp[17] = input[29]; 
	else	if ( P30 == 17 )
		temp[17] = input[30]; 

	if ( P1 == 18 )
		temp[18] = input[1]; 
	else	if ( P3 == 18 )
		temp[18] = input[3]; 
	else	if ( P5 == 18 )
		temp[18] = input[5]; 
	else	if ( P7 == 18 )
		temp[18] = input[7]; 
	else	if ( P9 == 18 )
		temp[18] = input[9]; 
	else	if ( P11 == 18 )
		temp[18] = input[11]; 
	else	if ( P13 == 18 )
		temp[18] = input[13]; 
	else	if ( P15 == 18 )
		temp[18] = input[15]; 
	else	if ( P17 == 18 )
		temp[18] = input[17]; 
	else	if ( P18 == 18 )
		temp[18] = input[18]; 
	else	if ( P19 == 18 )
		temp[18] = input[19]; 
	else	if ( P20 == 18 )
		temp[18] = input[20]; 
	else	if ( P21 == 18 )
		temp[18] = input[21]; 
	else	if ( P22 == 18 )
		temp[18] = input[22]; 
	else	if ( P23 == 18 )
		temp[18] = input[23]; 
	else	if ( P24 == 18 )
		temp[18] = input[24]; 
	else	if ( P25 == 18 )
		temp[18] = input[25]; 
	else	if ( P26 == 18 )
		temp[18] = input[26]; 
	else	if ( P27 == 18 )
		temp[18] = input[27]; 
	else	if ( P28 == 18 )
		temp[18] = input[28]; 
	else	if ( P29 == 18 )
		temp[18] = input[29]; 
	else	if ( P30 == 18 )
		temp[18] = input[30]; 

	if ( P1 == 19 )
		temp[19] = input[1]; 
	else	if ( P3 == 19 )
		temp[19] = input[3]; 
	else	if ( P5 == 19 )
		temp[19] = input[5]; 
	else	if ( P7 == 19 )
		temp[19] = input[7]; 
	else	if ( P9 == 19 )
		temp[19] = input[9]; 
	else	if ( P11 == 19 )
		temp[19] = input[11]; 
	else	if ( P13 == 19 )
		temp[19] = input[13]; 
	else	if ( P15 == 19 )
		temp[19] = input[15]; 
	else	if ( P17 == 19 )
		temp[19] = input[17]; 
	else	if ( P19 == 19 )
		temp[19] = input[19]; 
	else	if ( P20 == 19 )
		temp[19] = input[20]; 
	else	if ( P21 == 19 )
		temp[19] = input[21]; 
	else	if ( P22 == 19 )
		temp[19] = input[22]; 
	else	if ( P23 == 19 )
		temp[19] = input[23]; 
	else	if ( P24 == 19 )
		temp[19] = input[24]; 
	else	if ( P25 == 19 )
		temp[19] = input[25]; 
	else	if ( P26 == 19 )
		temp[19] = input[26]; 
	else	if ( P27 == 19 )
		temp[19] = input[27]; 
	else	if ( P28 == 19 )
		temp[19] = input[28]; 
	else	if ( P29 == 19 )
		temp[19] = input[29]; 
	else	if ( P30 == 19 )
		temp[19] = input[30]; 

	if ( P1 == 20 )
		temp[20] = input[1]; 
	else	if ( P3 == 20 )
		temp[20] = input[3]; 
	else	if ( P5 == 20 )
		temp[20] = input[5]; 
	else	if ( P7 == 20 )
		temp[20] = input[7]; 
	else	if ( P9 == 20 )
		temp[20] = input[9]; 
	else	if ( P11 == 20 )
		temp[20] = input[11]; 
	else	if ( P13 == 20 )
		temp[20] = input[13]; 
	else	if ( P15 == 20 )
		temp[20] = input[15]; 
	else	if ( P17 == 20 )
		temp[20] = input[17]; 
	else	if ( P19 == 20 )
		temp[20] = input[19]; 
	else	if ( P20 == 20 )
		temp[20] = input[20]; 
	else	if ( P21 == 20 )
		temp[20] = input[21]; 
	else	if ( P22 == 20 )
		temp[20] = input[22]; 
	else	if ( P23 == 20 )
		temp[20] = input[23]; 
	else	if ( P24 == 20 )
		temp[20] = input[24]; 
	else	if ( P25 == 20 )
		temp[20] = input[25]; 
	else	if ( P26 == 20 )
		temp[20] = input[26]; 
	else	if ( P27 == 20 )
		temp[20] = input[27]; 
	else	if ( P28 == 20 )
		temp[20] = input[28]; 
	else	if ( P29 == 20 )
		temp[20] = input[29]; 
	else	if ( P30 == 20 )
		temp[20] = input[30]; 

	if ( P1 == 21 )
		temp[21] = input[1]; 
	else	if ( P3 == 21 )
		temp[21] = input[3]; 
	else	if ( P5 == 21 )
		temp[21] = input[5]; 
	else	if ( P7 == 21 )
		temp[21] = input[7]; 
	else	if ( P9 == 21 )
		temp[21] = input[9]; 
	else	if ( P11 == 21 )
		temp[21] = input[11]; 
	else	if ( P13 == 21 )
		temp[21] = input[13]; 
	else	if ( P15 == 21 )
		temp[21] = input[15]; 
	else	if ( P17 == 21 )
		temp[21] = input[17]; 
	else	if ( P19 == 21 )
		temp[21] = input[19]; 
	else	if ( P21 == 21 )
		temp[21] = input[21]; 
	else	if ( P22 == 21 )
		temp[21] = input[22]; 
	else	if ( P23 == 21 )
		temp[21] = input[23]; 
	else	if ( P24 == 21 )
		temp[21] = input[24]; 
	else	if ( P25 == 21 )
		temp[21] = input[25]; 
	else	if ( P26 == 21 )
		temp[21] = input[26]; 
	else	if ( P27 == 21 )
		temp[21] = input[27]; 
	else	if ( P28 == 21 )
		temp[21] = input[28]; 
	else	if ( P29 == 21 )
		temp[21] = input[29]; 
	else	if ( P30 == 21 )
		temp[21] = input[30]; 

	if ( P1 == 22 )
		temp[22] = input[1]; 
	else	if ( P3 == 22 )
		temp[22] = input[3]; 
	else	if ( P5 == 22 )
		temp[22] = input[5]; 
	else	if ( P7 == 22 )
		temp[22] = input[7]; 
	else	if ( P9 == 22 )
		temp[22] = input[9]; 
	else	if ( P11 == 22 )
		temp[22] = input[11]; 
	else	if ( P13 == 22 )
		temp[22] = input[13]; 
	else	if ( P15 == 22 )
		temp[22] = input[15]; 
	else	if ( P17 == 22 )
		temp[22] = input[17]; 
	else	if ( P19 == 22 )
		temp[22] = input[19]; 
	else	if ( P21 == 22 )
		temp[22] = input[21]; 
	else	if ( P22 == 22 )
		temp[22] = input[22]; 
	else	if ( P23 == 22 )
		temp[22] = input[23]; 
	else	if ( P24 == 22 )
		temp[22] = input[24]; 
	else	if ( P25 == 22 )
		temp[22] = input[25]; 
	else	if ( P26 == 22 )
		temp[22] = input[26]; 
	else	if ( P27 == 22 )
		temp[22] = input[27]; 
	else	if ( P28 == 22 )
		temp[22] = input[28]; 
	else	if ( P29 == 22 )
		temp[22] = input[29]; 
	else	if ( P30 == 22 )
		temp[22] = input[30]; 

	if ( P1 == 23 )
		temp[23] = input[1]; 
	else	if ( P3 == 23 )
		temp[23] = input[3]; 
	else	if ( P5 == 23 )
		temp[23] = input[5]; 
	else	if ( P7 == 23 )
		temp[23] = input[7]; 
	else	if ( P9 == 23 )
		temp[23] = input[9]; 
	else	if ( P11 == 23 )
		temp[23] = input[11]; 
	else	if ( P13 == 23 )
		temp[23] = input[13]; 
	else	if ( P15 == 23 )
		temp[23] = input[15]; 
	else	if ( P17 == 23 )
		temp[23] = input[17]; 
	else	if ( P19 == 23 )
		temp[23] = input[19]; 
	else	if ( P21 == 23 )
		temp[23] = input[21]; 
	else	if ( P23 == 23 )
		temp[23] = input[23]; 
	else	if ( P24 == 23 )
		temp[23] = input[24]; 
	else	if ( P25 == 23 )
		temp[23] = input[25]; 
	else	if ( P26 == 23 )
		temp[23] = input[26]; 
	else	if ( P27 == 23 )
		temp[23] = input[27]; 
	else	if ( P28 == 23 )
		temp[23] = input[28]; 
	else	if ( P29 == 23 )
		temp[23] = input[29]; 
	else	if ( P30 == 23 )
		temp[23] = input[30]; 

	if ( P1 == 24 )
		temp[24] = input[1]; 
	else	if ( P3 == 24 )
		temp[24] = input[3]; 
	else	if ( P5 == 24 )
		temp[24] = input[5]; 
	else	if ( P7 == 24 )
		temp[24] = input[7]; 
	else	if ( P9 == 24 )
		temp[24] = input[9]; 
	else	if ( P11 == 24 )
		temp[24] = input[11]; 
	else	if ( P13 == 24 )
		temp[24] = input[13]; 
	else	if ( P15 == 24 )
		temp[24] = input[15]; 
	else	if ( P17 == 24 )
		temp[24] = input[17]; 
	else	if ( P19 == 24 )
		temp[24] = input[19]; 
	else	if ( P21 == 24 )
		temp[24] = input[21]; 
	else	if ( P23 == 24 )
		temp[24] = input[23]; 
	else	if ( P24 == 24 )
		temp[24] = input[24]; 
	else	if ( P25 == 24 )
		temp[24] = input[25]; 
	else	if ( P26 == 24 )
		temp[24] = input[26]; 
	else	if ( P27 == 24 )
		temp[24] = input[27]; 
	else	if ( P28 == 24 )
		temp[24] = input[28]; 
	else	if ( P29 == 24 )
		temp[24] = input[29]; 
	else	if ( P30 == 24 )
		temp[24] = input[30]; 

	if ( P1 == 25 )
		temp[25] = input[1]; 
	else	if ( P3 == 25 )
		temp[25] = input[3]; 
	else	if ( P5 == 25 )
		temp[25] = input[5]; 
	else	if ( P7 == 25 )
		temp[25] = input[7]; 
	else	if ( P9 == 25 )
		temp[25] = input[9]; 
	else	if ( P11 == 25 )
		temp[25] = input[11]; 
	else	if ( P13 == 25 )
		temp[25] = input[13]; 
	else	if ( P15 == 25 )
		temp[25] = input[15]; 
	else	if ( P17 == 25 )
		temp[25] = input[17]; 
	else	if ( P19 == 25 )
		temp[25] = input[19]; 
	else	if ( P21 == 25 )
		temp[25] = input[21]; 
	else	if ( P23 == 25 )
		temp[25] = input[23]; 
	else	if ( P25 == 25 )
		temp[25] = input[25]; 
	else	if ( P26 == 25 )
		temp[25] = input[26]; 
	else	if ( P27 == 25 )
		temp[25] = input[27]; 
	else	if ( P28 == 25 )
		temp[25] = input[28]; 
	else	if ( P29 == 25 )
		temp[25] = input[29]; 
	else	if ( P30 == 25 )
		temp[25] = input[30]; 

	if ( P1 == 26 )
		temp[26] = input[1]; 
	else	if ( P3 == 26 )
		temp[26] = input[3]; 
	else	if ( P5 == 26 )
		temp[26] = input[5]; 
	else	if ( P7 == 26 )
		temp[26] = input[7]; 
	else	if ( P9 == 26 )
		temp[26] = input[9]; 
	else	if ( P11 == 26 )
		temp[26] = input[11]; 
	else	if ( P13 == 26 )
		temp[26] = input[13]; 
	else	if ( P15 == 26 )
		temp[26] = input[15]; 
	else	if ( P17 == 26 )
		temp[26] = input[17]; 
	else	if ( P19 == 26 )
		temp[26] = input[19]; 
	else	if ( P21 == 26 )
		temp[26] = input[21]; 
	else	if ( P23 == 26 )
		temp[26] = input[23]; 
	else	if ( P25 == 26 )
		temp[26] = input[25]; 
	else	if ( P26 == 26 )
		temp[26] = input[26]; 
	else	if ( P27 == 26 )
		temp[26] = input[27]; 
	else	if ( P28 == 26 )
		temp[26] = input[28]; 
	else	if ( P29 == 26 )
		temp[26] = input[29]; 
	else	if ( P30 == 26 )
		temp[26] = input[30]; 

	if ( P1 == 27 )
		temp[27] = input[1]; 
	else	if ( P3 == 27 )
		temp[27] = input[3]; 
	else	if ( P5 == 27 )
		temp[27] = input[5]; 
	else	if ( P7 == 27 )
		temp[27] = input[7]; 
	else	if ( P9 == 27 )
		temp[27] = input[9]; 
	else	if ( P11 == 27 )
		temp[27] = input[11]; 
	else	if ( P13 == 27 )
		temp[27] = input[13]; 
	else	if ( P15 == 27 )
		temp[27] = input[15]; 
	else	if ( P17 == 27 )
		temp[27] = input[17]; 
	else	if ( P19 == 27 )
		temp[27] = input[19]; 
	else	if ( P21 == 27 )
		temp[27] = input[21]; 
	else	if ( P23 == 27 )
		temp[27] = input[23]; 
	else	if ( P25 == 27 )
		temp[27] = input[25]; 
	else	if ( P27 == 27 )
		temp[27] = input[27]; 
	else	if ( P28 == 27 )
		temp[27] = input[28]; 
	else	if ( P29 == 27 )
		temp[27] = input[29]; 
	else	if ( P30 == 27 )
		temp[27] = input[30]; 

	if ( P1 == 28 )
		temp[28] = input[1]; 
	else	if ( P3 == 28 )
		temp[28] = input[3]; 
	else	if ( P5 == 28 )
		temp[28] = input[5]; 
	else	if ( P7 == 28 )
		temp[28] = input[7]; 
	else	if ( P9 == 28 )
		temp[28] = input[9]; 
	else	if ( P11 == 28 )
		temp[28] = input[11]; 
	else	if ( P13 == 28 )
		temp[28] = input[13]; 
	else	if ( P15 == 28 )
		temp[28] = input[15]; 
	else	if ( P17 == 28 )
		temp[28] = input[17]; 
	else	if ( P19 == 28 )
		temp[28] = input[19]; 
	else	if ( P21 == 28 )
		temp[28] = input[21]; 
	else	if ( P23 == 28 )
		temp[28] = input[23]; 
	else	if ( P25 == 28 )
		temp[28] = input[25]; 
	else	if ( P27 == 28 )
		temp[28] = input[27]; 
	else	if ( P28 == 28 )
		temp[28] = input[28]; 
	else	if ( P29 == 28 )
		temp[28] = input[29]; 
	else	if ( P30 == 28 )
		temp[28] = input[30]; 

	if ( P1 == 29 )
		temp[29] = input[1]; 
	else	if ( P3 == 29 )
		temp[29] = input[3]; 
	else	if ( P5 == 29 )
		temp[29] = input[5]; 
	else	if ( P7 == 29 )
		temp[29] = input[7]; 
	else	if ( P9 == 29 )
		temp[29] = input[9]; 
	else	if ( P11 == 29 )
		temp[29] = input[11]; 
	else	if ( P13 == 29 )
		temp[29] = input[13]; 
	else	if ( P15 == 29 )
		temp[29] = input[15]; 
	else	if ( P17 == 29 )
		temp[29] = input[17]; 
	else	if ( P19 == 29 )
		temp[29] = input[19]; 
	else	if ( P21 == 29 )
		temp[29] = input[21]; 
	else	if ( P23 == 29 )
		temp[29] = input[23]; 
	else	if ( P25 == 29 )
		temp[29] = input[25]; 
	else	if ( P27 == 29 )
		temp[29] = input[27]; 
	else	if ( P29 == 29 )
		temp[29] = input[29]; 
	else	if ( P30 == 29 )
		temp[29] = input[30]; 

	if ( P1 == 30 )
		temp[30] = input[1]; 
	else	if ( P3 == 30 )
		temp[30] = input[3]; 
	else	if ( P5 == 30 )
		temp[30] = input[5]; 
	else	if ( P7 == 30 )
		temp[30] = input[7]; 
	else	if ( P9 == 30 )
		temp[30] = input[9]; 
	else	if ( P11 == 30 )
		temp[30] = input[11]; 
	else	if ( P13 == 30 )
		temp[30] = input[13]; 
	else	if ( P15 == 30 )
		temp[30] = input[15]; 
	else	if ( P17 == 30 )
		temp[30] = input[17]; 
	else	if ( P19 == 30 )
		temp[30] = input[19]; 
	else	if ( P21 == 30 )
		temp[30] = input[21]; 
	else	if ( P23 == 30 )
		temp[30] = input[23]; 
	else	if ( P25 == 30 )
		temp[30] = input[25]; 
	else	if ( P27 == 30 )
		temp[30] = input[27]; 
	else	if ( P29 == 30 )
		temp[30] = input[29]; 
	else	if ( P30 == 30 )
		temp[30] = input[30]; 


// ON AJUSTE LES SORTIE EN FONCTION DE FB

	if (fb == 0){ 
		output[0] = temp[15]; 
		output[1] = temp[16]; 
		output[2] = temp[17]; 
		output[3] = temp[18]; 
		output[4] = temp[19]; 
		output[5] = temp[20]; 
		output[6] = temp[21]; 
		output[7] = temp[22]; 
		output[8] = temp[23]; 
		output[9] = temp[24]; 
		output[10] = temp[25]; 
		output[11] = temp[26]; 
		output[12] = temp[27]; 
		output[13] = temp[28]; 
		output[14] = temp[29]; 
		output[15] = temp[30]; 
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
		output[8] = temp[8]; 
		output[9] = temp[9]; 
		output[10] = temp[10]; 
		output[11] = temp[11]; 
		output[12] = temp[12]; 
		output[13] = temp[13]; 
		output[14] = temp[14]; 
		output[15] = temp[15]; 
	} 
} 
