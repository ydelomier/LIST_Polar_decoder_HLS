template < int Q >
void RANKORDER_SORT_L32 (PS_struct<1,Q,5> input[64], PS_struct<1,Q,5> output[32], sc_biguint<1> fb)
{
#pragma HLS INLINE off

	sc_uint<1>   x0x1, x0x2, x0x3, x0x4, x0x5, x0x6, x0x7, x0x8, x0x9, x0x10, x0x11, x0x12, x0x13, x0x14, x0x15, x0x16, x0x17, x0x18, x0x19, x0x20, x0x21, x0x22, x0x23, x0x24, x0x25, x0x26, x0x27, x0x28, x0x29, x0x30, x0x31, x0x32, x0x33, x0x34, x0x35, x0x36, x0x37, x0x38, x0x39, x0x40, x0x41, x0x42, x0x43, x0x44, x0x45, x0x46, x0x47, x0x48, x0x49, x0x50, x0x51, x0x52, x0x53, x0x54, x0x55, x0x56, x0x57, x0x58, x0x59, x0x60, x0x61, x0x62 ;
	sc_uint<1>   x1x2, x1x3, x1x4, x1x5, x1x6, x1x7, x1x8, x1x9, x1x10, x1x11, x1x12, x1x13, x1x14, x1x15, x1x16, x1x17, x1x18, x1x19, x1x20, x1x21, x1x22, x1x23, x1x24, x1x25, x1x26, x1x27, x1x28, x1x29, x1x30, x1x31, x1x32, x1x33, x1x34, x1x35, x1x36, x1x37, x1x38, x1x39, x1x40, x1x41, x1x42, x1x43, x1x44, x1x45, x1x46, x1x47, x1x48, x1x49, x1x50, x1x51, x1x52, x1x53, x1x54, x1x55, x1x56, x1x57, x1x58, x1x59, x1x60, x1x61, x1x62 ;
	sc_uint<1>   x2x3, x2x4, x2x5, x2x6, x2x7, x2x8, x2x9, x2x10, x2x11, x2x12, x2x13, x2x14, x2x15, x2x16, x2x17, x2x18, x2x19, x2x20, x2x21, x2x22, x2x23, x2x24, x2x25, x2x26, x2x27, x2x28, x2x29, x2x30, x2x31, x2x32, x2x33, x2x34, x2x35, x2x36, x2x37, x2x38, x2x39, x2x40, x2x41, x2x42, x2x43, x2x44, x2x45, x2x46, x2x47, x2x48, x2x49, x2x50, x2x51, x2x52, x2x53, x2x54, x2x55, x2x56, x2x57, x2x58, x2x59, x2x60, x2x61, x2x62 ;
	sc_uint<1>   x3x4, x3x5, x3x6, x3x7, x3x8, x3x9, x3x10, x3x11, x3x12, x3x13, x3x14, x3x15, x3x16, x3x17, x3x18, x3x19, x3x20, x3x21, x3x22, x3x23, x3x24, x3x25, x3x26, x3x27, x3x28, x3x29, x3x30, x3x31, x3x32, x3x33, x3x34, x3x35, x3x36, x3x37, x3x38, x3x39, x3x40, x3x41, x3x42, x3x43, x3x44, x3x45, x3x46, x3x47, x3x48, x3x49, x3x50, x3x51, x3x52, x3x53, x3x54, x3x55, x3x56, x3x57, x3x58, x3x59, x3x60, x3x61, x3x62 ;
	sc_uint<1>   x4x5, x4x6, x4x7, x4x8, x4x9, x4x10, x4x11, x4x12, x4x13, x4x14, x4x15, x4x16, x4x17, x4x18, x4x19, x4x20, x4x21, x4x22, x4x23, x4x24, x4x25, x4x26, x4x27, x4x28, x4x29, x4x30, x4x31, x4x32, x4x33, x4x34, x4x35, x4x36, x4x37, x4x38, x4x39, x4x40, x4x41, x4x42, x4x43, x4x44, x4x45, x4x46, x4x47, x4x48, x4x49, x4x50, x4x51, x4x52, x4x53, x4x54, x4x55, x4x56, x4x57, x4x58, x4x59, x4x60, x4x61, x4x62 ;
	sc_uint<1>   x5x6, x5x7, x5x8, x5x9, x5x10, x5x11, x5x12, x5x13, x5x14, x5x15, x5x16, x5x17, x5x18, x5x19, x5x20, x5x21, x5x22, x5x23, x5x24, x5x25, x5x26, x5x27, x5x28, x5x29, x5x30, x5x31, x5x32, x5x33, x5x34, x5x35, x5x36, x5x37, x5x38, x5x39, x5x40, x5x41, x5x42, x5x43, x5x44, x5x45, x5x46, x5x47, x5x48, x5x49, x5x50, x5x51, x5x52, x5x53, x5x54, x5x55, x5x56, x5x57, x5x58, x5x59, x5x60, x5x61, x5x62 ;
	sc_uint<1>   x6x7, x6x8, x6x9, x6x10, x6x11, x6x12, x6x13, x6x14, x6x15, x6x16, x6x17, x6x18, x6x19, x6x20, x6x21, x6x22, x6x23, x6x24, x6x25, x6x26, x6x27, x6x28, x6x29, x6x30, x6x31, x6x32, x6x33, x6x34, x6x35, x6x36, x6x37, x6x38, x6x39, x6x40, x6x41, x6x42, x6x43, x6x44, x6x45, x6x46, x6x47, x6x48, x6x49, x6x50, x6x51, x6x52, x6x53, x6x54, x6x55, x6x56, x6x57, x6x58, x6x59, x6x60, x6x61, x6x62 ;
	sc_uint<1>   x7x8, x7x9, x7x10, x7x11, x7x12, x7x13, x7x14, x7x15, x7x16, x7x17, x7x18, x7x19, x7x20, x7x21, x7x22, x7x23, x7x24, x7x25, x7x26, x7x27, x7x28, x7x29, x7x30, x7x31, x7x32, x7x33, x7x34, x7x35, x7x36, x7x37, x7x38, x7x39, x7x40, x7x41, x7x42, x7x43, x7x44, x7x45, x7x46, x7x47, x7x48, x7x49, x7x50, x7x51, x7x52, x7x53, x7x54, x7x55, x7x56, x7x57, x7x58, x7x59, x7x60, x7x61, x7x62 ;
	sc_uint<1>   x8x9, x8x10, x8x11, x8x12, x8x13, x8x14, x8x15, x8x16, x8x17, x8x18, x8x19, x8x20, x8x21, x8x22, x8x23, x8x24, x8x25, x8x26, x8x27, x8x28, x8x29, x8x30, x8x31, x8x32, x8x33, x8x34, x8x35, x8x36, x8x37, x8x38, x8x39, x8x40, x8x41, x8x42, x8x43, x8x44, x8x45, x8x46, x8x47, x8x48, x8x49, x8x50, x8x51, x8x52, x8x53, x8x54, x8x55, x8x56, x8x57, x8x58, x8x59, x8x60, x8x61, x8x62 ;
	sc_uint<1>   x9x10, x9x11, x9x12, x9x13, x9x14, x9x15, x9x16, x9x17, x9x18, x9x19, x9x20, x9x21, x9x22, x9x23, x9x24, x9x25, x9x26, x9x27, x9x28, x9x29, x9x30, x9x31, x9x32, x9x33, x9x34, x9x35, x9x36, x9x37, x9x38, x9x39, x9x40, x9x41, x9x42, x9x43, x9x44, x9x45, x9x46, x9x47, x9x48, x9x49, x9x50, x9x51, x9x52, x9x53, x9x54, x9x55, x9x56, x9x57, x9x58, x9x59, x9x60, x9x61, x9x62 ;
	sc_uint<1>   x10x11, x10x12, x10x13, x10x14, x10x15, x10x16, x10x17, x10x18, x10x19, x10x20, x10x21, x10x22, x10x23, x10x24, x10x25, x10x26, x10x27, x10x28, x10x29, x10x30, x10x31, x10x32, x10x33, x10x34, x10x35, x10x36, x10x37, x10x38, x10x39, x10x40, x10x41, x10x42, x10x43, x10x44, x10x45, x10x46, x10x47, x10x48, x10x49, x10x50, x10x51, x10x52, x10x53, x10x54, x10x55, x10x56, x10x57, x10x58, x10x59, x10x60, x10x61, x10x62 ;
	sc_uint<1>   x11x12, x11x13, x11x14, x11x15, x11x16, x11x17, x11x18, x11x19, x11x20, x11x21, x11x22, x11x23, x11x24, x11x25, x11x26, x11x27, x11x28, x11x29, x11x30, x11x31, x11x32, x11x33, x11x34, x11x35, x11x36, x11x37, x11x38, x11x39, x11x40, x11x41, x11x42, x11x43, x11x44, x11x45, x11x46, x11x47, x11x48, x11x49, x11x50, x11x51, x11x52, x11x53, x11x54, x11x55, x11x56, x11x57, x11x58, x11x59, x11x60, x11x61, x11x62 ;
	sc_uint<1>   x12x13, x12x14, x12x15, x12x16, x12x17, x12x18, x12x19, x12x20, x12x21, x12x22, x12x23, x12x24, x12x25, x12x26, x12x27, x12x28, x12x29, x12x30, x12x31, x12x32, x12x33, x12x34, x12x35, x12x36, x12x37, x12x38, x12x39, x12x40, x12x41, x12x42, x12x43, x12x44, x12x45, x12x46, x12x47, x12x48, x12x49, x12x50, x12x51, x12x52, x12x53, x12x54, x12x55, x12x56, x12x57, x12x58, x12x59, x12x60, x12x61, x12x62 ;
	sc_uint<1>   x13x14, x13x15, x13x16, x13x17, x13x18, x13x19, x13x20, x13x21, x13x22, x13x23, x13x24, x13x25, x13x26, x13x27, x13x28, x13x29, x13x30, x13x31, x13x32, x13x33, x13x34, x13x35, x13x36, x13x37, x13x38, x13x39, x13x40, x13x41, x13x42, x13x43, x13x44, x13x45, x13x46, x13x47, x13x48, x13x49, x13x50, x13x51, x13x52, x13x53, x13x54, x13x55, x13x56, x13x57, x13x58, x13x59, x13x60, x13x61, x13x62 ;
	sc_uint<1>   x14x15, x14x16, x14x17, x14x18, x14x19, x14x20, x14x21, x14x22, x14x23, x14x24, x14x25, x14x26, x14x27, x14x28, x14x29, x14x30, x14x31, x14x32, x14x33, x14x34, x14x35, x14x36, x14x37, x14x38, x14x39, x14x40, x14x41, x14x42, x14x43, x14x44, x14x45, x14x46, x14x47, x14x48, x14x49, x14x50, x14x51, x14x52, x14x53, x14x54, x14x55, x14x56, x14x57, x14x58, x14x59, x14x60, x14x61, x14x62 ;
	sc_uint<1>   x15x16, x15x17, x15x18, x15x19, x15x20, x15x21, x15x22, x15x23, x15x24, x15x25, x15x26, x15x27, x15x28, x15x29, x15x30, x15x31, x15x32, x15x33, x15x34, x15x35, x15x36, x15x37, x15x38, x15x39, x15x40, x15x41, x15x42, x15x43, x15x44, x15x45, x15x46, x15x47, x15x48, x15x49, x15x50, x15x51, x15x52, x15x53, x15x54, x15x55, x15x56, x15x57, x15x58, x15x59, x15x60, x15x61, x15x62 ;
	sc_uint<1>   x16x17, x16x18, x16x19, x16x20, x16x21, x16x22, x16x23, x16x24, x16x25, x16x26, x16x27, x16x28, x16x29, x16x30, x16x31, x16x32, x16x33, x16x34, x16x35, x16x36, x16x37, x16x38, x16x39, x16x40, x16x41, x16x42, x16x43, x16x44, x16x45, x16x46, x16x47, x16x48, x16x49, x16x50, x16x51, x16x52, x16x53, x16x54, x16x55, x16x56, x16x57, x16x58, x16x59, x16x60, x16x61, x16x62 ;
	sc_uint<1>   x17x18, x17x19, x17x20, x17x21, x17x22, x17x23, x17x24, x17x25, x17x26, x17x27, x17x28, x17x29, x17x30, x17x31, x17x32, x17x33, x17x34, x17x35, x17x36, x17x37, x17x38, x17x39, x17x40, x17x41, x17x42, x17x43, x17x44, x17x45, x17x46, x17x47, x17x48, x17x49, x17x50, x17x51, x17x52, x17x53, x17x54, x17x55, x17x56, x17x57, x17x58, x17x59, x17x60, x17x61, x17x62 ;
	sc_uint<1>   x18x19, x18x20, x18x21, x18x22, x18x23, x18x24, x18x25, x18x26, x18x27, x18x28, x18x29, x18x30, x18x31, x18x32, x18x33, x18x34, x18x35, x18x36, x18x37, x18x38, x18x39, x18x40, x18x41, x18x42, x18x43, x18x44, x18x45, x18x46, x18x47, x18x48, x18x49, x18x50, x18x51, x18x52, x18x53, x18x54, x18x55, x18x56, x18x57, x18x58, x18x59, x18x60, x18x61, x18x62 ;
	sc_uint<1>   x19x20, x19x21, x19x22, x19x23, x19x24, x19x25, x19x26, x19x27, x19x28, x19x29, x19x30, x19x31, x19x32, x19x33, x19x34, x19x35, x19x36, x19x37, x19x38, x19x39, x19x40, x19x41, x19x42, x19x43, x19x44, x19x45, x19x46, x19x47, x19x48, x19x49, x19x50, x19x51, x19x52, x19x53, x19x54, x19x55, x19x56, x19x57, x19x58, x19x59, x19x60, x19x61, x19x62 ;
	sc_uint<1>   x20x21, x20x22, x20x23, x20x24, x20x25, x20x26, x20x27, x20x28, x20x29, x20x30, x20x31, x20x32, x20x33, x20x34, x20x35, x20x36, x20x37, x20x38, x20x39, x20x40, x20x41, x20x42, x20x43, x20x44, x20x45, x20x46, x20x47, x20x48, x20x49, x20x50, x20x51, x20x52, x20x53, x20x54, x20x55, x20x56, x20x57, x20x58, x20x59, x20x60, x20x61, x20x62 ;
	sc_uint<1>   x21x22, x21x23, x21x24, x21x25, x21x26, x21x27, x21x28, x21x29, x21x30, x21x31, x21x32, x21x33, x21x34, x21x35, x21x36, x21x37, x21x38, x21x39, x21x40, x21x41, x21x42, x21x43, x21x44, x21x45, x21x46, x21x47, x21x48, x21x49, x21x50, x21x51, x21x52, x21x53, x21x54, x21x55, x21x56, x21x57, x21x58, x21x59, x21x60, x21x61, x21x62 ;
	sc_uint<1>   x22x23, x22x24, x22x25, x22x26, x22x27, x22x28, x22x29, x22x30, x22x31, x22x32, x22x33, x22x34, x22x35, x22x36, x22x37, x22x38, x22x39, x22x40, x22x41, x22x42, x22x43, x22x44, x22x45, x22x46, x22x47, x22x48, x22x49, x22x50, x22x51, x22x52, x22x53, x22x54, x22x55, x22x56, x22x57, x22x58, x22x59, x22x60, x22x61, x22x62 ;
	sc_uint<1>   x23x24, x23x25, x23x26, x23x27, x23x28, x23x29, x23x30, x23x31, x23x32, x23x33, x23x34, x23x35, x23x36, x23x37, x23x38, x23x39, x23x40, x23x41, x23x42, x23x43, x23x44, x23x45, x23x46, x23x47, x23x48, x23x49, x23x50, x23x51, x23x52, x23x53, x23x54, x23x55, x23x56, x23x57, x23x58, x23x59, x23x60, x23x61, x23x62 ;
	sc_uint<1>   x24x25, x24x26, x24x27, x24x28, x24x29, x24x30, x24x31, x24x32, x24x33, x24x34, x24x35, x24x36, x24x37, x24x38, x24x39, x24x40, x24x41, x24x42, x24x43, x24x44, x24x45, x24x46, x24x47, x24x48, x24x49, x24x50, x24x51, x24x52, x24x53, x24x54, x24x55, x24x56, x24x57, x24x58, x24x59, x24x60, x24x61, x24x62 ;
	sc_uint<1>   x25x26, x25x27, x25x28, x25x29, x25x30, x25x31, x25x32, x25x33, x25x34, x25x35, x25x36, x25x37, x25x38, x25x39, x25x40, x25x41, x25x42, x25x43, x25x44, x25x45, x25x46, x25x47, x25x48, x25x49, x25x50, x25x51, x25x52, x25x53, x25x54, x25x55, x25x56, x25x57, x25x58, x25x59, x25x60, x25x61, x25x62 ;
	sc_uint<1>   x26x27, x26x28, x26x29, x26x30, x26x31, x26x32, x26x33, x26x34, x26x35, x26x36, x26x37, x26x38, x26x39, x26x40, x26x41, x26x42, x26x43, x26x44, x26x45, x26x46, x26x47, x26x48, x26x49, x26x50, x26x51, x26x52, x26x53, x26x54, x26x55, x26x56, x26x57, x26x58, x26x59, x26x60, x26x61, x26x62 ;
	sc_uint<1>   x27x28, x27x29, x27x30, x27x31, x27x32, x27x33, x27x34, x27x35, x27x36, x27x37, x27x38, x27x39, x27x40, x27x41, x27x42, x27x43, x27x44, x27x45, x27x46, x27x47, x27x48, x27x49, x27x50, x27x51, x27x52, x27x53, x27x54, x27x55, x27x56, x27x57, x27x58, x27x59, x27x60, x27x61, x27x62 ;
	sc_uint<1>   x28x29, x28x30, x28x31, x28x32, x28x33, x28x34, x28x35, x28x36, x28x37, x28x38, x28x39, x28x40, x28x41, x28x42, x28x43, x28x44, x28x45, x28x46, x28x47, x28x48, x28x49, x28x50, x28x51, x28x52, x28x53, x28x54, x28x55, x28x56, x28x57, x28x58, x28x59, x28x60, x28x61, x28x62 ;
	sc_uint<1>   x29x30, x29x31, x29x32, x29x33, x29x34, x29x35, x29x36, x29x37, x29x38, x29x39, x29x40, x29x41, x29x42, x29x43, x29x44, x29x45, x29x46, x29x47, x29x48, x29x49, x29x50, x29x51, x29x52, x29x53, x29x54, x29x55, x29x56, x29x57, x29x58, x29x59, x29x60, x29x61, x29x62 ;
	sc_uint<1>   x30x31, x30x32, x30x33, x30x34, x30x35, x30x36, x30x37, x30x38, x30x39, x30x40, x30x41, x30x42, x30x43, x30x44, x30x45, x30x46, x30x47, x30x48, x30x49, x30x50, x30x51, x30x52, x30x53, x30x54, x30x55, x30x56, x30x57, x30x58, x30x59, x30x60, x30x61, x30x62 ;
	sc_uint<1>   x31x32, x31x33, x31x34, x31x35, x31x36, x31x37, x31x38, x31x39, x31x40, x31x41, x31x42, x31x43, x31x44, x31x45, x31x46, x31x47, x31x48, x31x49, x31x50, x31x51, x31x52, x31x53, x31x54, x31x55, x31x56, x31x57, x31x58, x31x59, x31x60, x31x61, x31x62 ;
	sc_uint<1>   x32x33, x32x34, x32x35, x32x36, x32x37, x32x38, x32x39, x32x40, x32x41, x32x42, x32x43, x32x44, x32x45, x32x46, x32x47, x32x48, x32x49, x32x50, x32x51, x32x52, x32x53, x32x54, x32x55, x32x56, x32x57, x32x58, x32x59, x32x60, x32x61, x32x62 ;
	sc_uint<1>   x33x34, x33x35, x33x36, x33x37, x33x38, x33x39, x33x40, x33x41, x33x42, x33x43, x33x44, x33x45, x33x46, x33x47, x33x48, x33x49, x33x50, x33x51, x33x52, x33x53, x33x54, x33x55, x33x56, x33x57, x33x58, x33x59, x33x60, x33x61, x33x62 ;
	sc_uint<1>   x34x35, x34x36, x34x37, x34x38, x34x39, x34x40, x34x41, x34x42, x34x43, x34x44, x34x45, x34x46, x34x47, x34x48, x34x49, x34x50, x34x51, x34x52, x34x53, x34x54, x34x55, x34x56, x34x57, x34x58, x34x59, x34x60, x34x61, x34x62 ;
	sc_uint<1>   x35x36, x35x37, x35x38, x35x39, x35x40, x35x41, x35x42, x35x43, x35x44, x35x45, x35x46, x35x47, x35x48, x35x49, x35x50, x35x51, x35x52, x35x53, x35x54, x35x55, x35x56, x35x57, x35x58, x35x59, x35x60, x35x61, x35x62 ;
	sc_uint<1>   x36x37, x36x38, x36x39, x36x40, x36x41, x36x42, x36x43, x36x44, x36x45, x36x46, x36x47, x36x48, x36x49, x36x50, x36x51, x36x52, x36x53, x36x54, x36x55, x36x56, x36x57, x36x58, x36x59, x36x60, x36x61, x36x62 ;
	sc_uint<1>   x37x38, x37x39, x37x40, x37x41, x37x42, x37x43, x37x44, x37x45, x37x46, x37x47, x37x48, x37x49, x37x50, x37x51, x37x52, x37x53, x37x54, x37x55, x37x56, x37x57, x37x58, x37x59, x37x60, x37x61, x37x62 ;
	sc_uint<1>   x38x39, x38x40, x38x41, x38x42, x38x43, x38x44, x38x45, x38x46, x38x47, x38x48, x38x49, x38x50, x38x51, x38x52, x38x53, x38x54, x38x55, x38x56, x38x57, x38x58, x38x59, x38x60, x38x61, x38x62 ;
	sc_uint<1>   x39x40, x39x41, x39x42, x39x43, x39x44, x39x45, x39x46, x39x47, x39x48, x39x49, x39x50, x39x51, x39x52, x39x53, x39x54, x39x55, x39x56, x39x57, x39x58, x39x59, x39x60, x39x61, x39x62 ;
	sc_uint<1>   x40x41, x40x42, x40x43, x40x44, x40x45, x40x46, x40x47, x40x48, x40x49, x40x50, x40x51, x40x52, x40x53, x40x54, x40x55, x40x56, x40x57, x40x58, x40x59, x40x60, x40x61, x40x62 ;
	sc_uint<1>   x41x42, x41x43, x41x44, x41x45, x41x46, x41x47, x41x48, x41x49, x41x50, x41x51, x41x52, x41x53, x41x54, x41x55, x41x56, x41x57, x41x58, x41x59, x41x60, x41x61, x41x62 ;
	sc_uint<1>   x42x43, x42x44, x42x45, x42x46, x42x47, x42x48, x42x49, x42x50, x42x51, x42x52, x42x53, x42x54, x42x55, x42x56, x42x57, x42x58, x42x59, x42x60, x42x61, x42x62 ;
	sc_uint<1>   x43x44, x43x45, x43x46, x43x47, x43x48, x43x49, x43x50, x43x51, x43x52, x43x53, x43x54, x43x55, x43x56, x43x57, x43x58, x43x59, x43x60, x43x61, x43x62 ;
	sc_uint<1>   x44x45, x44x46, x44x47, x44x48, x44x49, x44x50, x44x51, x44x52, x44x53, x44x54, x44x55, x44x56, x44x57, x44x58, x44x59, x44x60, x44x61, x44x62 ;
	sc_uint<1>   x45x46, x45x47, x45x48, x45x49, x45x50, x45x51, x45x52, x45x53, x45x54, x45x55, x45x56, x45x57, x45x58, x45x59, x45x60, x45x61, x45x62 ;
	sc_uint<1>   x46x47, x46x48, x46x49, x46x50, x46x51, x46x52, x46x53, x46x54, x46x55, x46x56, x46x57, x46x58, x46x59, x46x60, x46x61, x46x62 ;
	sc_uint<1>   x47x48, x47x49, x47x50, x47x51, x47x52, x47x53, x47x54, x47x55, x47x56, x47x57, x47x58, x47x59, x47x60, x47x61, x47x62 ;
	sc_uint<1>   x48x49, x48x50, x48x51, x48x52, x48x53, x48x54, x48x55, x48x56, x48x57, x48x58, x48x59, x48x60, x48x61, x48x62 ;
	sc_uint<1>   x49x50, x49x51, x49x52, x49x53, x49x54, x49x55, x49x56, x49x57, x49x58, x49x59, x49x60, x49x61, x49x62 ;
	sc_uint<1>   x50x51, x50x52, x50x53, x50x54, x50x55, x50x56, x50x57, x50x58, x50x59, x50x60, x50x61, x50x62 ;
	sc_uint<1>   x51x52, x51x53, x51x54, x51x55, x51x56, x51x57, x51x58, x51x59, x51x60, x51x61, x51x62 ;
	sc_uint<1>   x52x53, x52x54, x52x55, x52x56, x52x57, x52x58, x52x59, x52x60, x52x61, x52x62 ;
	sc_uint<1>   x53x54, x53x55, x53x56, x53x57, x53x58, x53x59, x53x60, x53x61, x53x62 ;
	sc_uint<1>   x54x55, x54x56, x54x57, x54x58, x54x59, x54x60, x54x61, x54x62 ;
	sc_uint<1>   x55x56, x55x57, x55x58, x55x59, x55x60, x55x61, x55x62 ;
	sc_uint<1>   x56x57, x56x58, x56x59, x56x60, x56x61, x56x62 ;
	sc_uint<1>   x57x58, x57x59, x57x60, x57x61, x57x62 ;
	sc_uint<1>   x58x59, x58x60, x58x61, x58x62 ;
	sc_uint<1>   x59x60, x59x61, x59x62 ;
	sc_uint<1>   x60x61, x60x62 ;
	sc_uint<1>   x61x62 ;

	sc_uint<6> P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15, P16, P17, P18, P19, P20, P21, P22, P23, P24, P25, P26, P27, P28, P29, P30, P31, P32, P33, P34, P35, P36, P37, P38, P39, P40, P41, P42, P43, P44, P45, P46, P47, P48, P49, P50, P51, P52, P53, P54, P55, P56, P57, P58, P59, P60, P61, P62 ;
	PS_struct<1,Q,5> temp[63];
#pragma HLS ARRAY_PARTITION variable=temp complete dim=1


// ON AJUSTE LES ENTREES EN FONCTION DE FB

	if (fb == 0){ 
		input[62] = input[31];
		input[63].metric = MAX_VAL;
		input[61] = input[30]; 
		input[59] = input[29]; 
		input[57] = input[28]; 
		input[55] = input[27]; 
		input[53] = input[26]; 
		input[51] = input[25]; 
		input[49] = input[24]; 
		input[47] = input[23]; 
		input[45] = input[22]; 
		input[43] = input[21]; 
		input[41] = input[20]; 
		input[39] = input[19]; 
		input[37] = input[18]; 
		input[35] = input[17]; 
		input[33] = input[16]; 
		input[31] = input[15]; 
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
		input[30].metric = 0;
		input[32].metric = 0;
		input[34].metric = 0;
		input[36].metric = 0;
		input[38].metric = 0;
		input[40].metric = 0;
		input[42].metric = 0;
		input[44].metric = 0;
		input[46].metric = 0;
		input[48].metric = 0;
		input[50].metric = 0;
		input[52].metric = 0;
		input[54].metric = 0;
		input[56].metric = 0;
		input[58].metric = 0;
		input[60].metric = 0;
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
	x0x31 = 0; 
	x0x32 = 0; 
	x0x33 = 0; 
	x0x34 = 0; 
	x0x35 = 0; 
	x0x36 = 0; 
	x0x37 = 0; 
	x0x38 = 0; 
	x0x39 = 0; 
	x0x40 = 0; 
	x0x41 = 0; 
	x0x42 = 0; 
	x0x43 = 0; 
	x0x44 = 0; 
	x0x45 = 0; 
	x0x46 = 0; 
	x0x47 = 0; 
	x0x48 = 0; 
	x0x49 = 0; 
	x0x50 = 0; 
	x0x51 = 0; 
	x0x52 = 0; 
	x0x53 = 0; 
	x0x54 = 0; 
	x0x55 = 0; 
	x0x56 = 0; 
	x0x57 = 0; 
	x0x58 = 0; 
	x0x59 = 0; 
	x0x60 = 0; 
	x0x61 = 0; 
	x0x62 = 0; 

	x1x2 = COMP <Q, 5> (&input[ 1 ], &input[ 2 ]); 
	x1x3 = COMP <Q, 5> (&input[ 1 ], &input[ 3 ]); 
	x1x4 = COMP <Q, 5> (&input[ 1 ], &input[ 4 ]); 
	x1x5 = COMP <Q, 5> (&input[ 1 ], &input[ 5 ]); 
	x1x6 = COMP <Q, 5> (&input[ 1 ], &input[ 6 ]); 
	x1x7 = COMP <Q, 5> (&input[ 1 ], &input[ 7 ]); 
	x1x8 = COMP <Q, 5> (&input[ 1 ], &input[ 8 ]); 
	x1x9 = COMP <Q, 5> (&input[ 1 ], &input[ 9 ]); 
	x1x10 = COMP <Q, 5> (&input[ 1 ], &input[ 10 ]); 
	x1x11 = COMP <Q, 5> (&input[ 1 ], &input[ 11 ]); 
	x1x12 = COMP <Q, 5> (&input[ 1 ], &input[ 12 ]); 
	x1x13 = COMP <Q, 5> (&input[ 1 ], &input[ 13 ]); 
	x1x14 = COMP <Q, 5> (&input[ 1 ], &input[ 14 ]); 
	x1x15 = COMP <Q, 5> (&input[ 1 ], &input[ 15 ]); 
	x1x16 = COMP <Q, 5> (&input[ 1 ], &input[ 16 ]); 
	x1x17 = COMP <Q, 5> (&input[ 1 ], &input[ 17 ]); 
	x1x18 = COMP <Q, 5> (&input[ 1 ], &input[ 18 ]); 
	x1x19 = COMP <Q, 5> (&input[ 1 ], &input[ 19 ]); 
	x1x20 = COMP <Q, 5> (&input[ 1 ], &input[ 20 ]); 
	x1x21 = COMP <Q, 5> (&input[ 1 ], &input[ 21 ]); 
	x1x22 = COMP <Q, 5> (&input[ 1 ], &input[ 22 ]); 
	x1x23 = COMP <Q, 5> (&input[ 1 ], &input[ 23 ]); 
	x1x24 = COMP <Q, 5> (&input[ 1 ], &input[ 24 ]); 
	x1x25 = COMP <Q, 5> (&input[ 1 ], &input[ 25 ]); 
	x1x26 = COMP <Q, 5> (&input[ 1 ], &input[ 26 ]); 
	x1x27 = COMP <Q, 5> (&input[ 1 ], &input[ 27 ]); 
	x1x28 = COMP <Q, 5> (&input[ 1 ], &input[ 28 ]); 
	x1x29 = COMP <Q, 5> (&input[ 1 ], &input[ 29 ]); 
	x1x30 = COMP <Q, 5> (&input[ 1 ], &input[ 30 ]); 
	x1x31 = COMP <Q, 5> (&input[ 1 ], &input[ 31 ]); 
	x1x32 = COMP <Q, 5> (&input[ 1 ], &input[ 32 ]); 
	x1x33 = COMP <Q, 5> (&input[ 1 ], &input[ 33 ]); 
	x1x34 = COMP <Q, 5> (&input[ 1 ], &input[ 34 ]); 
	x1x35 = COMP <Q, 5> (&input[ 1 ], &input[ 35 ]); 
	x1x36 = COMP <Q, 5> (&input[ 1 ], &input[ 36 ]); 
	x1x37 = COMP <Q, 5> (&input[ 1 ], &input[ 37 ]); 
	x1x38 = COMP <Q, 5> (&input[ 1 ], &input[ 38 ]); 
	x1x39 = COMP <Q, 5> (&input[ 1 ], &input[ 39 ]); 
	x1x40 = COMP <Q, 5> (&input[ 1 ], &input[ 40 ]); 
	x1x41 = COMP <Q, 5> (&input[ 1 ], &input[ 41 ]); 
	x1x42 = COMP <Q, 5> (&input[ 1 ], &input[ 42 ]); 
	x1x43 = COMP <Q, 5> (&input[ 1 ], &input[ 43 ]); 
	x1x44 = COMP <Q, 5> (&input[ 1 ], &input[ 44 ]); 
	x1x45 = COMP <Q, 5> (&input[ 1 ], &input[ 45 ]); 
	x1x46 = COMP <Q, 5> (&input[ 1 ], &input[ 46 ]); 
	x1x47 = COMP <Q, 5> (&input[ 1 ], &input[ 47 ]); 
	x1x48 = COMP <Q, 5> (&input[ 1 ], &input[ 48 ]); 
	x1x49 = COMP <Q, 5> (&input[ 1 ], &input[ 49 ]); 
	x1x50 = COMP <Q, 5> (&input[ 1 ], &input[ 50 ]); 
	x1x51 = COMP <Q, 5> (&input[ 1 ], &input[ 51 ]); 
	x1x52 = COMP <Q, 5> (&input[ 1 ], &input[ 52 ]); 
	x1x53 = COMP <Q, 5> (&input[ 1 ], &input[ 53 ]); 
	x1x54 = COMP <Q, 5> (&input[ 1 ], &input[ 54 ]); 
	x1x55 = COMP <Q, 5> (&input[ 1 ], &input[ 55 ]); 
	x1x56 = COMP <Q, 5> (&input[ 1 ], &input[ 56 ]); 
	x1x57 = COMP <Q, 5> (&input[ 1 ], &input[ 57 ]); 
	x1x58 = COMP <Q, 5> (&input[ 1 ], &input[ 58 ]); 
	x1x59 = COMP <Q, 5> (&input[ 1 ], &input[ 59 ]); 
	x1x60 = COMP <Q, 5> (&input[ 1 ], &input[ 60 ]); 
	x1x61 = COMP <Q, 5> (&input[ 1 ], &input[ 61 ]); 
	x1x62 = COMP <Q, 5> (&input[ 1 ], &input[ 62 ]); 

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
	x2x31 = 0; 
	x2x32 = 0; 
	x2x33 = 0; 
	x2x34 = 0; 
	x2x35 = 0; 
	x2x36 = 0; 
	x2x37 = 0; 
	x2x38 = 0; 
	x2x39 = 0; 
	x2x40 = 0; 
	x2x41 = 0; 
	x2x42 = 0; 
	x2x43 = 0; 
	x2x44 = 0; 
	x2x45 = 0; 
	x2x46 = 0; 
	x2x47 = 0; 
	x2x48 = 0; 
	x2x49 = 0; 
	x2x50 = 0; 
	x2x51 = 0; 
	x2x52 = 0; 
	x2x53 = 0; 
	x2x54 = 0; 
	x2x55 = 0; 
	x2x56 = 0; 
	x2x57 = 0; 
	x2x58 = 0; 
	x2x59 = 0; 
	x2x60 = 0; 
	x2x61 = 0; 
	x2x62 = 0; 

	x3x4 = COMP <Q, 5> (&input[ 3 ], &input[ 4 ]); 
	x3x5 = COMP <Q, 5> (&input[ 3 ], &input[ 5 ]); 
	x3x6 = COMP <Q, 5> (&input[ 3 ], &input[ 6 ]); 
	x3x7 = COMP <Q, 5> (&input[ 3 ], &input[ 7 ]); 
	x3x8 = COMP <Q, 5> (&input[ 3 ], &input[ 8 ]); 
	x3x9 = COMP <Q, 5> (&input[ 3 ], &input[ 9 ]); 
	x3x10 = COMP <Q, 5> (&input[ 3 ], &input[ 10 ]); 
	x3x11 = COMP <Q, 5> (&input[ 3 ], &input[ 11 ]); 
	x3x12 = COMP <Q, 5> (&input[ 3 ], &input[ 12 ]); 
	x3x13 = COMP <Q, 5> (&input[ 3 ], &input[ 13 ]); 
	x3x14 = COMP <Q, 5> (&input[ 3 ], &input[ 14 ]); 
	x3x15 = COMP <Q, 5> (&input[ 3 ], &input[ 15 ]); 
	x3x16 = COMP <Q, 5> (&input[ 3 ], &input[ 16 ]); 
	x3x17 = COMP <Q, 5> (&input[ 3 ], &input[ 17 ]); 
	x3x18 = COMP <Q, 5> (&input[ 3 ], &input[ 18 ]); 
	x3x19 = COMP <Q, 5> (&input[ 3 ], &input[ 19 ]); 
	x3x20 = COMP <Q, 5> (&input[ 3 ], &input[ 20 ]); 
	x3x21 = COMP <Q, 5> (&input[ 3 ], &input[ 21 ]); 
	x3x22 = COMP <Q, 5> (&input[ 3 ], &input[ 22 ]); 
	x3x23 = COMP <Q, 5> (&input[ 3 ], &input[ 23 ]); 
	x3x24 = COMP <Q, 5> (&input[ 3 ], &input[ 24 ]); 
	x3x25 = COMP <Q, 5> (&input[ 3 ], &input[ 25 ]); 
	x3x26 = COMP <Q, 5> (&input[ 3 ], &input[ 26 ]); 
	x3x27 = COMP <Q, 5> (&input[ 3 ], &input[ 27 ]); 
	x3x28 = COMP <Q, 5> (&input[ 3 ], &input[ 28 ]); 
	x3x29 = COMP <Q, 5> (&input[ 3 ], &input[ 29 ]); 
	x3x30 = COMP <Q, 5> (&input[ 3 ], &input[ 30 ]); 
	x3x31 = COMP <Q, 5> (&input[ 3 ], &input[ 31 ]); 
	x3x32 = COMP <Q, 5> (&input[ 3 ], &input[ 32 ]); 
	x3x33 = COMP <Q, 5> (&input[ 3 ], &input[ 33 ]); 
	x3x34 = COMP <Q, 5> (&input[ 3 ], &input[ 34 ]); 
	x3x35 = COMP <Q, 5> (&input[ 3 ], &input[ 35 ]); 
	x3x36 = COMP <Q, 5> (&input[ 3 ], &input[ 36 ]); 
	x3x37 = COMP <Q, 5> (&input[ 3 ], &input[ 37 ]); 
	x3x38 = COMP <Q, 5> (&input[ 3 ], &input[ 38 ]); 
	x3x39 = COMP <Q, 5> (&input[ 3 ], &input[ 39 ]); 
	x3x40 = COMP <Q, 5> (&input[ 3 ], &input[ 40 ]); 
	x3x41 = COMP <Q, 5> (&input[ 3 ], &input[ 41 ]); 
	x3x42 = COMP <Q, 5> (&input[ 3 ], &input[ 42 ]); 
	x3x43 = COMP <Q, 5> (&input[ 3 ], &input[ 43 ]); 
	x3x44 = COMP <Q, 5> (&input[ 3 ], &input[ 44 ]); 
	x3x45 = COMP <Q, 5> (&input[ 3 ], &input[ 45 ]); 
	x3x46 = COMP <Q, 5> (&input[ 3 ], &input[ 46 ]); 
	x3x47 = COMP <Q, 5> (&input[ 3 ], &input[ 47 ]); 
	x3x48 = COMP <Q, 5> (&input[ 3 ], &input[ 48 ]); 
	x3x49 = COMP <Q, 5> (&input[ 3 ], &input[ 49 ]); 
	x3x50 = COMP <Q, 5> (&input[ 3 ], &input[ 50 ]); 
	x3x51 = COMP <Q, 5> (&input[ 3 ], &input[ 51 ]); 
	x3x52 = COMP <Q, 5> (&input[ 3 ], &input[ 52 ]); 
	x3x53 = COMP <Q, 5> (&input[ 3 ], &input[ 53 ]); 
	x3x54 = COMP <Q, 5> (&input[ 3 ], &input[ 54 ]); 
	x3x55 = COMP <Q, 5> (&input[ 3 ], &input[ 55 ]); 
	x3x56 = COMP <Q, 5> (&input[ 3 ], &input[ 56 ]); 
	x3x57 = COMP <Q, 5> (&input[ 3 ], &input[ 57 ]); 
	x3x58 = COMP <Q, 5> (&input[ 3 ], &input[ 58 ]); 
	x3x59 = COMP <Q, 5> (&input[ 3 ], &input[ 59 ]); 
	x3x60 = COMP <Q, 5> (&input[ 3 ], &input[ 60 ]); 
	x3x61 = COMP <Q, 5> (&input[ 3 ], &input[ 61 ]); 
	x3x62 = COMP <Q, 5> (&input[ 3 ], &input[ 62 ]); 

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
	x4x31 = 0; 
	x4x32 = 0; 
	x4x33 = 0; 
	x4x34 = 0; 
	x4x35 = 0; 
	x4x36 = 0; 
	x4x37 = 0; 
	x4x38 = 0; 
	x4x39 = 0; 
	x4x40 = 0; 
	x4x41 = 0; 
	x4x42 = 0; 
	x4x43 = 0; 
	x4x44 = 0; 
	x4x45 = 0; 
	x4x46 = 0; 
	x4x47 = 0; 
	x4x48 = 0; 
	x4x49 = 0; 
	x4x50 = 0; 
	x4x51 = 0; 
	x4x52 = 0; 
	x4x53 = 0; 
	x4x54 = 0; 
	x4x55 = 0; 
	x4x56 = 0; 
	x4x57 = 0; 
	x4x58 = 0; 
	x4x59 = 0; 
	x4x60 = 0; 
	x4x61 = 0; 
	x4x62 = 0; 

	x5x6 = COMP <Q, 5> (&input[ 5 ], &input[ 6 ]); 
	x5x7 = COMP <Q, 5> (&input[ 5 ], &input[ 7 ]); 
	x5x8 = COMP <Q, 5> (&input[ 5 ], &input[ 8 ]); 
	x5x9 = COMP <Q, 5> (&input[ 5 ], &input[ 9 ]); 
	x5x10 = COMP <Q, 5> (&input[ 5 ], &input[ 10 ]); 
	x5x11 = COMP <Q, 5> (&input[ 5 ], &input[ 11 ]); 
	x5x12 = COMP <Q, 5> (&input[ 5 ], &input[ 12 ]); 
	x5x13 = COMP <Q, 5> (&input[ 5 ], &input[ 13 ]); 
	x5x14 = COMP <Q, 5> (&input[ 5 ], &input[ 14 ]); 
	x5x15 = COMP <Q, 5> (&input[ 5 ], &input[ 15 ]); 
	x5x16 = COMP <Q, 5> (&input[ 5 ], &input[ 16 ]); 
	x5x17 = COMP <Q, 5> (&input[ 5 ], &input[ 17 ]); 
	x5x18 = COMP <Q, 5> (&input[ 5 ], &input[ 18 ]); 
	x5x19 = COMP <Q, 5> (&input[ 5 ], &input[ 19 ]); 
	x5x20 = COMP <Q, 5> (&input[ 5 ], &input[ 20 ]); 
	x5x21 = COMP <Q, 5> (&input[ 5 ], &input[ 21 ]); 
	x5x22 = COMP <Q, 5> (&input[ 5 ], &input[ 22 ]); 
	x5x23 = COMP <Q, 5> (&input[ 5 ], &input[ 23 ]); 
	x5x24 = COMP <Q, 5> (&input[ 5 ], &input[ 24 ]); 
	x5x25 = COMP <Q, 5> (&input[ 5 ], &input[ 25 ]); 
	x5x26 = COMP <Q, 5> (&input[ 5 ], &input[ 26 ]); 
	x5x27 = COMP <Q, 5> (&input[ 5 ], &input[ 27 ]); 
	x5x28 = COMP <Q, 5> (&input[ 5 ], &input[ 28 ]); 
	x5x29 = COMP <Q, 5> (&input[ 5 ], &input[ 29 ]); 
	x5x30 = COMP <Q, 5> (&input[ 5 ], &input[ 30 ]); 
	x5x31 = COMP <Q, 5> (&input[ 5 ], &input[ 31 ]); 
	x5x32 = COMP <Q, 5> (&input[ 5 ], &input[ 32 ]); 
	x5x33 = COMP <Q, 5> (&input[ 5 ], &input[ 33 ]); 
	x5x34 = COMP <Q, 5> (&input[ 5 ], &input[ 34 ]); 
	x5x35 = COMP <Q, 5> (&input[ 5 ], &input[ 35 ]); 
	x5x36 = COMP <Q, 5> (&input[ 5 ], &input[ 36 ]); 
	x5x37 = COMP <Q, 5> (&input[ 5 ], &input[ 37 ]); 
	x5x38 = COMP <Q, 5> (&input[ 5 ], &input[ 38 ]); 
	x5x39 = COMP <Q, 5> (&input[ 5 ], &input[ 39 ]); 
	x5x40 = COMP <Q, 5> (&input[ 5 ], &input[ 40 ]); 
	x5x41 = COMP <Q, 5> (&input[ 5 ], &input[ 41 ]); 
	x5x42 = COMP <Q, 5> (&input[ 5 ], &input[ 42 ]); 
	x5x43 = COMP <Q, 5> (&input[ 5 ], &input[ 43 ]); 
	x5x44 = COMP <Q, 5> (&input[ 5 ], &input[ 44 ]); 
	x5x45 = COMP <Q, 5> (&input[ 5 ], &input[ 45 ]); 
	x5x46 = COMP <Q, 5> (&input[ 5 ], &input[ 46 ]); 
	x5x47 = COMP <Q, 5> (&input[ 5 ], &input[ 47 ]); 
	x5x48 = COMP <Q, 5> (&input[ 5 ], &input[ 48 ]); 
	x5x49 = COMP <Q, 5> (&input[ 5 ], &input[ 49 ]); 
	x5x50 = COMP <Q, 5> (&input[ 5 ], &input[ 50 ]); 
	x5x51 = COMP <Q, 5> (&input[ 5 ], &input[ 51 ]); 
	x5x52 = COMP <Q, 5> (&input[ 5 ], &input[ 52 ]); 
	x5x53 = COMP <Q, 5> (&input[ 5 ], &input[ 53 ]); 
	x5x54 = COMP <Q, 5> (&input[ 5 ], &input[ 54 ]); 
	x5x55 = COMP <Q, 5> (&input[ 5 ], &input[ 55 ]); 
	x5x56 = COMP <Q, 5> (&input[ 5 ], &input[ 56 ]); 
	x5x57 = COMP <Q, 5> (&input[ 5 ], &input[ 57 ]); 
	x5x58 = COMP <Q, 5> (&input[ 5 ], &input[ 58 ]); 
	x5x59 = COMP <Q, 5> (&input[ 5 ], &input[ 59 ]); 
	x5x60 = COMP <Q, 5> (&input[ 5 ], &input[ 60 ]); 
	x5x61 = COMP <Q, 5> (&input[ 5 ], &input[ 61 ]); 
	x5x62 = COMP <Q, 5> (&input[ 5 ], &input[ 62 ]); 

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
	x6x31 = 0; 
	x6x32 = 0; 
	x6x33 = 0; 
	x6x34 = 0; 
	x6x35 = 0; 
	x6x36 = 0; 
	x6x37 = 0; 
	x6x38 = 0; 
	x6x39 = 0; 
	x6x40 = 0; 
	x6x41 = 0; 
	x6x42 = 0; 
	x6x43 = 0; 
	x6x44 = 0; 
	x6x45 = 0; 
	x6x46 = 0; 
	x6x47 = 0; 
	x6x48 = 0; 
	x6x49 = 0; 
	x6x50 = 0; 
	x6x51 = 0; 
	x6x52 = 0; 
	x6x53 = 0; 
	x6x54 = 0; 
	x6x55 = 0; 
	x6x56 = 0; 
	x6x57 = 0; 
	x6x58 = 0; 
	x6x59 = 0; 
	x6x60 = 0; 
	x6x61 = 0; 
	x6x62 = 0; 

	x7x8 = COMP <Q, 5> (&input[ 7 ], &input[ 8 ]); 
	x7x9 = COMP <Q, 5> (&input[ 7 ], &input[ 9 ]); 
	x7x10 = COMP <Q, 5> (&input[ 7 ], &input[ 10 ]); 
	x7x11 = COMP <Q, 5> (&input[ 7 ], &input[ 11 ]); 
	x7x12 = COMP <Q, 5> (&input[ 7 ], &input[ 12 ]); 
	x7x13 = COMP <Q, 5> (&input[ 7 ], &input[ 13 ]); 
	x7x14 = COMP <Q, 5> (&input[ 7 ], &input[ 14 ]); 
	x7x15 = COMP <Q, 5> (&input[ 7 ], &input[ 15 ]); 
	x7x16 = COMP <Q, 5> (&input[ 7 ], &input[ 16 ]); 
	x7x17 = COMP <Q, 5> (&input[ 7 ], &input[ 17 ]); 
	x7x18 = COMP <Q, 5> (&input[ 7 ], &input[ 18 ]); 
	x7x19 = COMP <Q, 5> (&input[ 7 ], &input[ 19 ]); 
	x7x20 = COMP <Q, 5> (&input[ 7 ], &input[ 20 ]); 
	x7x21 = COMP <Q, 5> (&input[ 7 ], &input[ 21 ]); 
	x7x22 = COMP <Q, 5> (&input[ 7 ], &input[ 22 ]); 
	x7x23 = COMP <Q, 5> (&input[ 7 ], &input[ 23 ]); 
	x7x24 = COMP <Q, 5> (&input[ 7 ], &input[ 24 ]); 
	x7x25 = COMP <Q, 5> (&input[ 7 ], &input[ 25 ]); 
	x7x26 = COMP <Q, 5> (&input[ 7 ], &input[ 26 ]); 
	x7x27 = COMP <Q, 5> (&input[ 7 ], &input[ 27 ]); 
	x7x28 = COMP <Q, 5> (&input[ 7 ], &input[ 28 ]); 
	x7x29 = COMP <Q, 5> (&input[ 7 ], &input[ 29 ]); 
	x7x30 = COMP <Q, 5> (&input[ 7 ], &input[ 30 ]); 
	x7x31 = COMP <Q, 5> (&input[ 7 ], &input[ 31 ]); 
	x7x32 = COMP <Q, 5> (&input[ 7 ], &input[ 32 ]); 
	x7x33 = COMP <Q, 5> (&input[ 7 ], &input[ 33 ]); 
	x7x34 = COMP <Q, 5> (&input[ 7 ], &input[ 34 ]); 
	x7x35 = COMP <Q, 5> (&input[ 7 ], &input[ 35 ]); 
	x7x36 = COMP <Q, 5> (&input[ 7 ], &input[ 36 ]); 
	x7x37 = COMP <Q, 5> (&input[ 7 ], &input[ 37 ]); 
	x7x38 = COMP <Q, 5> (&input[ 7 ], &input[ 38 ]); 
	x7x39 = COMP <Q, 5> (&input[ 7 ], &input[ 39 ]); 
	x7x40 = COMP <Q, 5> (&input[ 7 ], &input[ 40 ]); 
	x7x41 = COMP <Q, 5> (&input[ 7 ], &input[ 41 ]); 
	x7x42 = COMP <Q, 5> (&input[ 7 ], &input[ 42 ]); 
	x7x43 = COMP <Q, 5> (&input[ 7 ], &input[ 43 ]); 
	x7x44 = COMP <Q, 5> (&input[ 7 ], &input[ 44 ]); 
	x7x45 = COMP <Q, 5> (&input[ 7 ], &input[ 45 ]); 
	x7x46 = COMP <Q, 5> (&input[ 7 ], &input[ 46 ]); 
	x7x47 = COMP <Q, 5> (&input[ 7 ], &input[ 47 ]); 
	x7x48 = COMP <Q, 5> (&input[ 7 ], &input[ 48 ]); 
	x7x49 = COMP <Q, 5> (&input[ 7 ], &input[ 49 ]); 
	x7x50 = COMP <Q, 5> (&input[ 7 ], &input[ 50 ]); 
	x7x51 = COMP <Q, 5> (&input[ 7 ], &input[ 51 ]); 
	x7x52 = COMP <Q, 5> (&input[ 7 ], &input[ 52 ]); 
	x7x53 = COMP <Q, 5> (&input[ 7 ], &input[ 53 ]); 
	x7x54 = COMP <Q, 5> (&input[ 7 ], &input[ 54 ]); 
	x7x55 = COMP <Q, 5> (&input[ 7 ], &input[ 55 ]); 
	x7x56 = COMP <Q, 5> (&input[ 7 ], &input[ 56 ]); 
	x7x57 = COMP <Q, 5> (&input[ 7 ], &input[ 57 ]); 
	x7x58 = COMP <Q, 5> (&input[ 7 ], &input[ 58 ]); 
	x7x59 = COMP <Q, 5> (&input[ 7 ], &input[ 59 ]); 
	x7x60 = COMP <Q, 5> (&input[ 7 ], &input[ 60 ]); 
	x7x61 = COMP <Q, 5> (&input[ 7 ], &input[ 61 ]); 
	x7x62 = COMP <Q, 5> (&input[ 7 ], &input[ 62 ]); 

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
	x8x31 = 0; 
	x8x32 = 0; 
	x8x33 = 0; 
	x8x34 = 0; 
	x8x35 = 0; 
	x8x36 = 0; 
	x8x37 = 0; 
	x8x38 = 0; 
	x8x39 = 0; 
	x8x40 = 0; 
	x8x41 = 0; 
	x8x42 = 0; 
	x8x43 = 0; 
	x8x44 = 0; 
	x8x45 = 0; 
	x8x46 = 0; 
	x8x47 = 0; 
	x8x48 = 0; 
	x8x49 = 0; 
	x8x50 = 0; 
	x8x51 = 0; 
	x8x52 = 0; 
	x8x53 = 0; 
	x8x54 = 0; 
	x8x55 = 0; 
	x8x56 = 0; 
	x8x57 = 0; 
	x8x58 = 0; 
	x8x59 = 0; 
	x8x60 = 0; 
	x8x61 = 0; 
	x8x62 = 0; 

	x9x10 = COMP <Q, 5> (&input[ 9 ], &input[ 10 ]); 
	x9x11 = COMP <Q, 5> (&input[ 9 ], &input[ 11 ]); 
	x9x12 = COMP <Q, 5> (&input[ 9 ], &input[ 12 ]); 
	x9x13 = COMP <Q, 5> (&input[ 9 ], &input[ 13 ]); 
	x9x14 = COMP <Q, 5> (&input[ 9 ], &input[ 14 ]); 
	x9x15 = COMP <Q, 5> (&input[ 9 ], &input[ 15 ]); 
	x9x16 = COMP <Q, 5> (&input[ 9 ], &input[ 16 ]); 
	x9x17 = COMP <Q, 5> (&input[ 9 ], &input[ 17 ]); 
	x9x18 = COMP <Q, 5> (&input[ 9 ], &input[ 18 ]); 
	x9x19 = COMP <Q, 5> (&input[ 9 ], &input[ 19 ]); 
	x9x20 = COMP <Q, 5> (&input[ 9 ], &input[ 20 ]); 
	x9x21 = COMP <Q, 5> (&input[ 9 ], &input[ 21 ]); 
	x9x22 = COMP <Q, 5> (&input[ 9 ], &input[ 22 ]); 
	x9x23 = COMP <Q, 5> (&input[ 9 ], &input[ 23 ]); 
	x9x24 = COMP <Q, 5> (&input[ 9 ], &input[ 24 ]); 
	x9x25 = COMP <Q, 5> (&input[ 9 ], &input[ 25 ]); 
	x9x26 = COMP <Q, 5> (&input[ 9 ], &input[ 26 ]); 
	x9x27 = COMP <Q, 5> (&input[ 9 ], &input[ 27 ]); 
	x9x28 = COMP <Q, 5> (&input[ 9 ], &input[ 28 ]); 
	x9x29 = COMP <Q, 5> (&input[ 9 ], &input[ 29 ]); 
	x9x30 = COMP <Q, 5> (&input[ 9 ], &input[ 30 ]); 
	x9x31 = COMP <Q, 5> (&input[ 9 ], &input[ 31 ]); 
	x9x32 = COMP <Q, 5> (&input[ 9 ], &input[ 32 ]); 
	x9x33 = COMP <Q, 5> (&input[ 9 ], &input[ 33 ]); 
	x9x34 = COMP <Q, 5> (&input[ 9 ], &input[ 34 ]); 
	x9x35 = COMP <Q, 5> (&input[ 9 ], &input[ 35 ]); 
	x9x36 = COMP <Q, 5> (&input[ 9 ], &input[ 36 ]); 
	x9x37 = COMP <Q, 5> (&input[ 9 ], &input[ 37 ]); 
	x9x38 = COMP <Q, 5> (&input[ 9 ], &input[ 38 ]); 
	x9x39 = COMP <Q, 5> (&input[ 9 ], &input[ 39 ]); 
	x9x40 = COMP <Q, 5> (&input[ 9 ], &input[ 40 ]); 
	x9x41 = COMP <Q, 5> (&input[ 9 ], &input[ 41 ]); 
	x9x42 = COMP <Q, 5> (&input[ 9 ], &input[ 42 ]); 
	x9x43 = COMP <Q, 5> (&input[ 9 ], &input[ 43 ]); 
	x9x44 = COMP <Q, 5> (&input[ 9 ], &input[ 44 ]); 
	x9x45 = COMP <Q, 5> (&input[ 9 ], &input[ 45 ]); 
	x9x46 = COMP <Q, 5> (&input[ 9 ], &input[ 46 ]); 
	x9x47 = COMP <Q, 5> (&input[ 9 ], &input[ 47 ]); 
	x9x48 = COMP <Q, 5> (&input[ 9 ], &input[ 48 ]); 
	x9x49 = COMP <Q, 5> (&input[ 9 ], &input[ 49 ]); 
	x9x50 = COMP <Q, 5> (&input[ 9 ], &input[ 50 ]); 
	x9x51 = COMP <Q, 5> (&input[ 9 ], &input[ 51 ]); 
	x9x52 = COMP <Q, 5> (&input[ 9 ], &input[ 52 ]); 
	x9x53 = COMP <Q, 5> (&input[ 9 ], &input[ 53 ]); 
	x9x54 = COMP <Q, 5> (&input[ 9 ], &input[ 54 ]); 
	x9x55 = COMP <Q, 5> (&input[ 9 ], &input[ 55 ]); 
	x9x56 = COMP <Q, 5> (&input[ 9 ], &input[ 56 ]); 
	x9x57 = COMP <Q, 5> (&input[ 9 ], &input[ 57 ]); 
	x9x58 = COMP <Q, 5> (&input[ 9 ], &input[ 58 ]); 
	x9x59 = COMP <Q, 5> (&input[ 9 ], &input[ 59 ]); 
	x9x60 = COMP <Q, 5> (&input[ 9 ], &input[ 60 ]); 
	x9x61 = COMP <Q, 5> (&input[ 9 ], &input[ 61 ]); 
	x9x62 = COMP <Q, 5> (&input[ 9 ], &input[ 62 ]); 

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
	x10x31 = 0; 
	x10x32 = 0; 
	x10x33 = 0; 
	x10x34 = 0; 
	x10x35 = 0; 
	x10x36 = 0; 
	x10x37 = 0; 
	x10x38 = 0; 
	x10x39 = 0; 
	x10x40 = 0; 
	x10x41 = 0; 
	x10x42 = 0; 
	x10x43 = 0; 
	x10x44 = 0; 
	x10x45 = 0; 
	x10x46 = 0; 
	x10x47 = 0; 
	x10x48 = 0; 
	x10x49 = 0; 
	x10x50 = 0; 
	x10x51 = 0; 
	x10x52 = 0; 
	x10x53 = 0; 
	x10x54 = 0; 
	x10x55 = 0; 
	x10x56 = 0; 
	x10x57 = 0; 
	x10x58 = 0; 
	x10x59 = 0; 
	x10x60 = 0; 
	x10x61 = 0; 
	x10x62 = 0; 

	x11x12 = COMP <Q, 5> (&input[ 11 ], &input[ 12 ]); 
	x11x13 = COMP <Q, 5> (&input[ 11 ], &input[ 13 ]); 
	x11x14 = COMP <Q, 5> (&input[ 11 ], &input[ 14 ]); 
	x11x15 = COMP <Q, 5> (&input[ 11 ], &input[ 15 ]); 
	x11x16 = COMP <Q, 5> (&input[ 11 ], &input[ 16 ]); 
	x11x17 = COMP <Q, 5> (&input[ 11 ], &input[ 17 ]); 
	x11x18 = COMP <Q, 5> (&input[ 11 ], &input[ 18 ]); 
	x11x19 = COMP <Q, 5> (&input[ 11 ], &input[ 19 ]); 
	x11x20 = COMP <Q, 5> (&input[ 11 ], &input[ 20 ]); 
	x11x21 = COMP <Q, 5> (&input[ 11 ], &input[ 21 ]); 
	x11x22 = COMP <Q, 5> (&input[ 11 ], &input[ 22 ]); 
	x11x23 = COMP <Q, 5> (&input[ 11 ], &input[ 23 ]); 
	x11x24 = COMP <Q, 5> (&input[ 11 ], &input[ 24 ]); 
	x11x25 = COMP <Q, 5> (&input[ 11 ], &input[ 25 ]); 
	x11x26 = COMP <Q, 5> (&input[ 11 ], &input[ 26 ]); 
	x11x27 = COMP <Q, 5> (&input[ 11 ], &input[ 27 ]); 
	x11x28 = COMP <Q, 5> (&input[ 11 ], &input[ 28 ]); 
	x11x29 = COMP <Q, 5> (&input[ 11 ], &input[ 29 ]); 
	x11x30 = COMP <Q, 5> (&input[ 11 ], &input[ 30 ]); 
	x11x31 = COMP <Q, 5> (&input[ 11 ], &input[ 31 ]); 
	x11x32 = COMP <Q, 5> (&input[ 11 ], &input[ 32 ]); 
	x11x33 = COMP <Q, 5> (&input[ 11 ], &input[ 33 ]); 
	x11x34 = COMP <Q, 5> (&input[ 11 ], &input[ 34 ]); 
	x11x35 = COMP <Q, 5> (&input[ 11 ], &input[ 35 ]); 
	x11x36 = COMP <Q, 5> (&input[ 11 ], &input[ 36 ]); 
	x11x37 = COMP <Q, 5> (&input[ 11 ], &input[ 37 ]); 
	x11x38 = COMP <Q, 5> (&input[ 11 ], &input[ 38 ]); 
	x11x39 = COMP <Q, 5> (&input[ 11 ], &input[ 39 ]); 
	x11x40 = COMP <Q, 5> (&input[ 11 ], &input[ 40 ]); 
	x11x41 = COMP <Q, 5> (&input[ 11 ], &input[ 41 ]); 
	x11x42 = COMP <Q, 5> (&input[ 11 ], &input[ 42 ]); 
	x11x43 = COMP <Q, 5> (&input[ 11 ], &input[ 43 ]); 
	x11x44 = COMP <Q, 5> (&input[ 11 ], &input[ 44 ]); 
	x11x45 = COMP <Q, 5> (&input[ 11 ], &input[ 45 ]); 
	x11x46 = COMP <Q, 5> (&input[ 11 ], &input[ 46 ]); 
	x11x47 = COMP <Q, 5> (&input[ 11 ], &input[ 47 ]); 
	x11x48 = COMP <Q, 5> (&input[ 11 ], &input[ 48 ]); 
	x11x49 = COMP <Q, 5> (&input[ 11 ], &input[ 49 ]); 
	x11x50 = COMP <Q, 5> (&input[ 11 ], &input[ 50 ]); 
	x11x51 = COMP <Q, 5> (&input[ 11 ], &input[ 51 ]); 
	x11x52 = COMP <Q, 5> (&input[ 11 ], &input[ 52 ]); 
	x11x53 = COMP <Q, 5> (&input[ 11 ], &input[ 53 ]); 
	x11x54 = COMP <Q, 5> (&input[ 11 ], &input[ 54 ]); 
	x11x55 = COMP <Q, 5> (&input[ 11 ], &input[ 55 ]); 
	x11x56 = COMP <Q, 5> (&input[ 11 ], &input[ 56 ]); 
	x11x57 = COMP <Q, 5> (&input[ 11 ], &input[ 57 ]); 
	x11x58 = COMP <Q, 5> (&input[ 11 ], &input[ 58 ]); 
	x11x59 = COMP <Q, 5> (&input[ 11 ], &input[ 59 ]); 
	x11x60 = COMP <Q, 5> (&input[ 11 ], &input[ 60 ]); 
	x11x61 = COMP <Q, 5> (&input[ 11 ], &input[ 61 ]); 
	x11x62 = COMP <Q, 5> (&input[ 11 ], &input[ 62 ]); 

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
	x12x31 = 0; 
	x12x32 = 0; 
	x12x33 = 0; 
	x12x34 = 0; 
	x12x35 = 0; 
	x12x36 = 0; 
	x12x37 = 0; 
	x12x38 = 0; 
	x12x39 = 0; 
	x12x40 = 0; 
	x12x41 = 0; 
	x12x42 = 0; 
	x12x43 = 0; 
	x12x44 = 0; 
	x12x45 = 0; 
	x12x46 = 0; 
	x12x47 = 0; 
	x12x48 = 0; 
	x12x49 = 0; 
	x12x50 = 0; 
	x12x51 = 0; 
	x12x52 = 0; 
	x12x53 = 0; 
	x12x54 = 0; 
	x12x55 = 0; 
	x12x56 = 0; 
	x12x57 = 0; 
	x12x58 = 0; 
	x12x59 = 0; 
	x12x60 = 0; 
	x12x61 = 0; 
	x12x62 = 0; 

	x13x14 = COMP <Q, 5> (&input[ 13 ], &input[ 14 ]); 
	x13x15 = COMP <Q, 5> (&input[ 13 ], &input[ 15 ]); 
	x13x16 = COMP <Q, 5> (&input[ 13 ], &input[ 16 ]); 
	x13x17 = COMP <Q, 5> (&input[ 13 ], &input[ 17 ]); 
	x13x18 = COMP <Q, 5> (&input[ 13 ], &input[ 18 ]); 
	x13x19 = COMP <Q, 5> (&input[ 13 ], &input[ 19 ]); 
	x13x20 = COMP <Q, 5> (&input[ 13 ], &input[ 20 ]); 
	x13x21 = COMP <Q, 5> (&input[ 13 ], &input[ 21 ]); 
	x13x22 = COMP <Q, 5> (&input[ 13 ], &input[ 22 ]); 
	x13x23 = COMP <Q, 5> (&input[ 13 ], &input[ 23 ]); 
	x13x24 = COMP <Q, 5> (&input[ 13 ], &input[ 24 ]); 
	x13x25 = COMP <Q, 5> (&input[ 13 ], &input[ 25 ]); 
	x13x26 = COMP <Q, 5> (&input[ 13 ], &input[ 26 ]); 
	x13x27 = COMP <Q, 5> (&input[ 13 ], &input[ 27 ]); 
	x13x28 = COMP <Q, 5> (&input[ 13 ], &input[ 28 ]); 
	x13x29 = COMP <Q, 5> (&input[ 13 ], &input[ 29 ]); 
	x13x30 = COMP <Q, 5> (&input[ 13 ], &input[ 30 ]); 
	x13x31 = COMP <Q, 5> (&input[ 13 ], &input[ 31 ]); 
	x13x32 = COMP <Q, 5> (&input[ 13 ], &input[ 32 ]); 
	x13x33 = COMP <Q, 5> (&input[ 13 ], &input[ 33 ]); 
	x13x34 = COMP <Q, 5> (&input[ 13 ], &input[ 34 ]); 
	x13x35 = COMP <Q, 5> (&input[ 13 ], &input[ 35 ]); 
	x13x36 = COMP <Q, 5> (&input[ 13 ], &input[ 36 ]); 
	x13x37 = COMP <Q, 5> (&input[ 13 ], &input[ 37 ]); 
	x13x38 = COMP <Q, 5> (&input[ 13 ], &input[ 38 ]); 
	x13x39 = COMP <Q, 5> (&input[ 13 ], &input[ 39 ]); 
	x13x40 = COMP <Q, 5> (&input[ 13 ], &input[ 40 ]); 
	x13x41 = COMP <Q, 5> (&input[ 13 ], &input[ 41 ]); 
	x13x42 = COMP <Q, 5> (&input[ 13 ], &input[ 42 ]); 
	x13x43 = COMP <Q, 5> (&input[ 13 ], &input[ 43 ]); 
	x13x44 = COMP <Q, 5> (&input[ 13 ], &input[ 44 ]); 
	x13x45 = COMP <Q, 5> (&input[ 13 ], &input[ 45 ]); 
	x13x46 = COMP <Q, 5> (&input[ 13 ], &input[ 46 ]); 
	x13x47 = COMP <Q, 5> (&input[ 13 ], &input[ 47 ]); 
	x13x48 = COMP <Q, 5> (&input[ 13 ], &input[ 48 ]); 
	x13x49 = COMP <Q, 5> (&input[ 13 ], &input[ 49 ]); 
	x13x50 = COMP <Q, 5> (&input[ 13 ], &input[ 50 ]); 
	x13x51 = COMP <Q, 5> (&input[ 13 ], &input[ 51 ]); 
	x13x52 = COMP <Q, 5> (&input[ 13 ], &input[ 52 ]); 
	x13x53 = COMP <Q, 5> (&input[ 13 ], &input[ 53 ]); 
	x13x54 = COMP <Q, 5> (&input[ 13 ], &input[ 54 ]); 
	x13x55 = COMP <Q, 5> (&input[ 13 ], &input[ 55 ]); 
	x13x56 = COMP <Q, 5> (&input[ 13 ], &input[ 56 ]); 
	x13x57 = COMP <Q, 5> (&input[ 13 ], &input[ 57 ]); 
	x13x58 = COMP <Q, 5> (&input[ 13 ], &input[ 58 ]); 
	x13x59 = COMP <Q, 5> (&input[ 13 ], &input[ 59 ]); 
	x13x60 = COMP <Q, 5> (&input[ 13 ], &input[ 60 ]); 
	x13x61 = COMP <Q, 5> (&input[ 13 ], &input[ 61 ]); 
	x13x62 = COMP <Q, 5> (&input[ 13 ], &input[ 62 ]); 

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
	x14x31 = 0; 
	x14x32 = 0; 
	x14x33 = 0; 
	x14x34 = 0; 
	x14x35 = 0; 
	x14x36 = 0; 
	x14x37 = 0; 
	x14x38 = 0; 
	x14x39 = 0; 
	x14x40 = 0; 
	x14x41 = 0; 
	x14x42 = 0; 
	x14x43 = 0; 
	x14x44 = 0; 
	x14x45 = 0; 
	x14x46 = 0; 
	x14x47 = 0; 
	x14x48 = 0; 
	x14x49 = 0; 
	x14x50 = 0; 
	x14x51 = 0; 
	x14x52 = 0; 
	x14x53 = 0; 
	x14x54 = 0; 
	x14x55 = 0; 
	x14x56 = 0; 
	x14x57 = 0; 
	x14x58 = 0; 
	x14x59 = 0; 
	x14x60 = 0; 
	x14x61 = 0; 
	x14x62 = 0; 

	x15x16 = COMP <Q, 5> (&input[ 15 ], &input[ 16 ]); 
	x15x17 = COMP <Q, 5> (&input[ 15 ], &input[ 17 ]); 
	x15x18 = COMP <Q, 5> (&input[ 15 ], &input[ 18 ]); 
	x15x19 = COMP <Q, 5> (&input[ 15 ], &input[ 19 ]); 
	x15x20 = COMP <Q, 5> (&input[ 15 ], &input[ 20 ]); 
	x15x21 = COMP <Q, 5> (&input[ 15 ], &input[ 21 ]); 
	x15x22 = COMP <Q, 5> (&input[ 15 ], &input[ 22 ]); 
	x15x23 = COMP <Q, 5> (&input[ 15 ], &input[ 23 ]); 
	x15x24 = COMP <Q, 5> (&input[ 15 ], &input[ 24 ]); 
	x15x25 = COMP <Q, 5> (&input[ 15 ], &input[ 25 ]); 
	x15x26 = COMP <Q, 5> (&input[ 15 ], &input[ 26 ]); 
	x15x27 = COMP <Q, 5> (&input[ 15 ], &input[ 27 ]); 
	x15x28 = COMP <Q, 5> (&input[ 15 ], &input[ 28 ]); 
	x15x29 = COMP <Q, 5> (&input[ 15 ], &input[ 29 ]); 
	x15x30 = COMP <Q, 5> (&input[ 15 ], &input[ 30 ]); 
	x15x31 = COMP <Q, 5> (&input[ 15 ], &input[ 31 ]); 
	x15x32 = COMP <Q, 5> (&input[ 15 ], &input[ 32 ]); 
	x15x33 = COMP <Q, 5> (&input[ 15 ], &input[ 33 ]); 
	x15x34 = COMP <Q, 5> (&input[ 15 ], &input[ 34 ]); 
	x15x35 = COMP <Q, 5> (&input[ 15 ], &input[ 35 ]); 
	x15x36 = COMP <Q, 5> (&input[ 15 ], &input[ 36 ]); 
	x15x37 = COMP <Q, 5> (&input[ 15 ], &input[ 37 ]); 
	x15x38 = COMP <Q, 5> (&input[ 15 ], &input[ 38 ]); 
	x15x39 = COMP <Q, 5> (&input[ 15 ], &input[ 39 ]); 
	x15x40 = COMP <Q, 5> (&input[ 15 ], &input[ 40 ]); 
	x15x41 = COMP <Q, 5> (&input[ 15 ], &input[ 41 ]); 
	x15x42 = COMP <Q, 5> (&input[ 15 ], &input[ 42 ]); 
	x15x43 = COMP <Q, 5> (&input[ 15 ], &input[ 43 ]); 
	x15x44 = COMP <Q, 5> (&input[ 15 ], &input[ 44 ]); 
	x15x45 = COMP <Q, 5> (&input[ 15 ], &input[ 45 ]); 
	x15x46 = COMP <Q, 5> (&input[ 15 ], &input[ 46 ]); 
	x15x47 = COMP <Q, 5> (&input[ 15 ], &input[ 47 ]); 
	x15x48 = COMP <Q, 5> (&input[ 15 ], &input[ 48 ]); 
	x15x49 = COMP <Q, 5> (&input[ 15 ], &input[ 49 ]); 
	x15x50 = COMP <Q, 5> (&input[ 15 ], &input[ 50 ]); 
	x15x51 = COMP <Q, 5> (&input[ 15 ], &input[ 51 ]); 
	x15x52 = COMP <Q, 5> (&input[ 15 ], &input[ 52 ]); 
	x15x53 = COMP <Q, 5> (&input[ 15 ], &input[ 53 ]); 
	x15x54 = COMP <Q, 5> (&input[ 15 ], &input[ 54 ]); 
	x15x55 = COMP <Q, 5> (&input[ 15 ], &input[ 55 ]); 
	x15x56 = COMP <Q, 5> (&input[ 15 ], &input[ 56 ]); 
	x15x57 = COMP <Q, 5> (&input[ 15 ], &input[ 57 ]); 
	x15x58 = COMP <Q, 5> (&input[ 15 ], &input[ 58 ]); 
	x15x59 = COMP <Q, 5> (&input[ 15 ], &input[ 59 ]); 
	x15x60 = COMP <Q, 5> (&input[ 15 ], &input[ 60 ]); 
	x15x61 = COMP <Q, 5> (&input[ 15 ], &input[ 61 ]); 
	x15x62 = COMP <Q, 5> (&input[ 15 ], &input[ 62 ]); 

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
	x16x31 = 0; 
	x16x32 = 0; 
	x16x33 = 0; 
	x16x34 = 0; 
	x16x35 = 0; 
	x16x36 = 0; 
	x16x37 = 0; 
	x16x38 = 0; 
	x16x39 = 0; 
	x16x40 = 0; 
	x16x41 = 0; 
	x16x42 = 0; 
	x16x43 = 0; 
	x16x44 = 0; 
	x16x45 = 0; 
	x16x46 = 0; 
	x16x47 = 0; 
	x16x48 = 0; 
	x16x49 = 0; 
	x16x50 = 0; 
	x16x51 = 0; 
	x16x52 = 0; 
	x16x53 = 0; 
	x16x54 = 0; 
	x16x55 = 0; 
	x16x56 = 0; 
	x16x57 = 0; 
	x16x58 = 0; 
	x16x59 = 0; 
	x16x60 = 0; 
	x16x61 = 0; 
	x16x62 = 0; 

	x17x18 = COMP <Q, 5> (&input[ 17 ], &input[ 18 ]); 
	x17x19 = COMP <Q, 5> (&input[ 17 ], &input[ 19 ]); 
	x17x20 = COMP <Q, 5> (&input[ 17 ], &input[ 20 ]); 
	x17x21 = COMP <Q, 5> (&input[ 17 ], &input[ 21 ]); 
	x17x22 = COMP <Q, 5> (&input[ 17 ], &input[ 22 ]); 
	x17x23 = COMP <Q, 5> (&input[ 17 ], &input[ 23 ]); 
	x17x24 = COMP <Q, 5> (&input[ 17 ], &input[ 24 ]); 
	x17x25 = COMP <Q, 5> (&input[ 17 ], &input[ 25 ]); 
	x17x26 = COMP <Q, 5> (&input[ 17 ], &input[ 26 ]); 
	x17x27 = COMP <Q, 5> (&input[ 17 ], &input[ 27 ]); 
	x17x28 = COMP <Q, 5> (&input[ 17 ], &input[ 28 ]); 
	x17x29 = COMP <Q, 5> (&input[ 17 ], &input[ 29 ]); 
	x17x30 = COMP <Q, 5> (&input[ 17 ], &input[ 30 ]); 
	x17x31 = COMP <Q, 5> (&input[ 17 ], &input[ 31 ]); 
	x17x32 = COMP <Q, 5> (&input[ 17 ], &input[ 32 ]); 
	x17x33 = COMP <Q, 5> (&input[ 17 ], &input[ 33 ]); 
	x17x34 = COMP <Q, 5> (&input[ 17 ], &input[ 34 ]); 
	x17x35 = COMP <Q, 5> (&input[ 17 ], &input[ 35 ]); 
	x17x36 = COMP <Q, 5> (&input[ 17 ], &input[ 36 ]); 
	x17x37 = COMP <Q, 5> (&input[ 17 ], &input[ 37 ]); 
	x17x38 = COMP <Q, 5> (&input[ 17 ], &input[ 38 ]); 
	x17x39 = COMP <Q, 5> (&input[ 17 ], &input[ 39 ]); 
	x17x40 = COMP <Q, 5> (&input[ 17 ], &input[ 40 ]); 
	x17x41 = COMP <Q, 5> (&input[ 17 ], &input[ 41 ]); 
	x17x42 = COMP <Q, 5> (&input[ 17 ], &input[ 42 ]); 
	x17x43 = COMP <Q, 5> (&input[ 17 ], &input[ 43 ]); 
	x17x44 = COMP <Q, 5> (&input[ 17 ], &input[ 44 ]); 
	x17x45 = COMP <Q, 5> (&input[ 17 ], &input[ 45 ]); 
	x17x46 = COMP <Q, 5> (&input[ 17 ], &input[ 46 ]); 
	x17x47 = COMP <Q, 5> (&input[ 17 ], &input[ 47 ]); 
	x17x48 = COMP <Q, 5> (&input[ 17 ], &input[ 48 ]); 
	x17x49 = COMP <Q, 5> (&input[ 17 ], &input[ 49 ]); 
	x17x50 = COMP <Q, 5> (&input[ 17 ], &input[ 50 ]); 
	x17x51 = COMP <Q, 5> (&input[ 17 ], &input[ 51 ]); 
	x17x52 = COMP <Q, 5> (&input[ 17 ], &input[ 52 ]); 
	x17x53 = COMP <Q, 5> (&input[ 17 ], &input[ 53 ]); 
	x17x54 = COMP <Q, 5> (&input[ 17 ], &input[ 54 ]); 
	x17x55 = COMP <Q, 5> (&input[ 17 ], &input[ 55 ]); 
	x17x56 = COMP <Q, 5> (&input[ 17 ], &input[ 56 ]); 
	x17x57 = COMP <Q, 5> (&input[ 17 ], &input[ 57 ]); 
	x17x58 = COMP <Q, 5> (&input[ 17 ], &input[ 58 ]); 
	x17x59 = COMP <Q, 5> (&input[ 17 ], &input[ 59 ]); 
	x17x60 = COMP <Q, 5> (&input[ 17 ], &input[ 60 ]); 
	x17x61 = COMP <Q, 5> (&input[ 17 ], &input[ 61 ]); 
	x17x62 = COMP <Q, 5> (&input[ 17 ], &input[ 62 ]); 

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
	x18x31 = 0; 
	x18x32 = 0; 
	x18x33 = 0; 
	x18x34 = 0; 
	x18x35 = 0; 
	x18x36 = 0; 
	x18x37 = 0; 
	x18x38 = 0; 
	x18x39 = 0; 
	x18x40 = 0; 
	x18x41 = 0; 
	x18x42 = 0; 
	x18x43 = 0; 
	x18x44 = 0; 
	x18x45 = 0; 
	x18x46 = 0; 
	x18x47 = 0; 
	x18x48 = 0; 
	x18x49 = 0; 
	x18x50 = 0; 
	x18x51 = 0; 
	x18x52 = 0; 
	x18x53 = 0; 
	x18x54 = 0; 
	x18x55 = 0; 
	x18x56 = 0; 
	x18x57 = 0; 
	x18x58 = 0; 
	x18x59 = 0; 
	x18x60 = 0; 
	x18x61 = 0; 
	x18x62 = 0; 

	x19x20 = COMP <Q, 5> (&input[ 19 ], &input[ 20 ]); 
	x19x21 = COMP <Q, 5> (&input[ 19 ], &input[ 21 ]); 
	x19x22 = COMP <Q, 5> (&input[ 19 ], &input[ 22 ]); 
	x19x23 = COMP <Q, 5> (&input[ 19 ], &input[ 23 ]); 
	x19x24 = COMP <Q, 5> (&input[ 19 ], &input[ 24 ]); 
	x19x25 = COMP <Q, 5> (&input[ 19 ], &input[ 25 ]); 
	x19x26 = COMP <Q, 5> (&input[ 19 ], &input[ 26 ]); 
	x19x27 = COMP <Q, 5> (&input[ 19 ], &input[ 27 ]); 
	x19x28 = COMP <Q, 5> (&input[ 19 ], &input[ 28 ]); 
	x19x29 = COMP <Q, 5> (&input[ 19 ], &input[ 29 ]); 
	x19x30 = COMP <Q, 5> (&input[ 19 ], &input[ 30 ]); 
	x19x31 = COMP <Q, 5> (&input[ 19 ], &input[ 31 ]); 
	x19x32 = COMP <Q, 5> (&input[ 19 ], &input[ 32 ]); 
	x19x33 = COMP <Q, 5> (&input[ 19 ], &input[ 33 ]); 
	x19x34 = COMP <Q, 5> (&input[ 19 ], &input[ 34 ]); 
	x19x35 = COMP <Q, 5> (&input[ 19 ], &input[ 35 ]); 
	x19x36 = COMP <Q, 5> (&input[ 19 ], &input[ 36 ]); 
	x19x37 = COMP <Q, 5> (&input[ 19 ], &input[ 37 ]); 
	x19x38 = COMP <Q, 5> (&input[ 19 ], &input[ 38 ]); 
	x19x39 = COMP <Q, 5> (&input[ 19 ], &input[ 39 ]); 
	x19x40 = COMP <Q, 5> (&input[ 19 ], &input[ 40 ]); 
	x19x41 = COMP <Q, 5> (&input[ 19 ], &input[ 41 ]); 
	x19x42 = COMP <Q, 5> (&input[ 19 ], &input[ 42 ]); 
	x19x43 = COMP <Q, 5> (&input[ 19 ], &input[ 43 ]); 
	x19x44 = COMP <Q, 5> (&input[ 19 ], &input[ 44 ]); 
	x19x45 = COMP <Q, 5> (&input[ 19 ], &input[ 45 ]); 
	x19x46 = COMP <Q, 5> (&input[ 19 ], &input[ 46 ]); 
	x19x47 = COMP <Q, 5> (&input[ 19 ], &input[ 47 ]); 
	x19x48 = COMP <Q, 5> (&input[ 19 ], &input[ 48 ]); 
	x19x49 = COMP <Q, 5> (&input[ 19 ], &input[ 49 ]); 
	x19x50 = COMP <Q, 5> (&input[ 19 ], &input[ 50 ]); 
	x19x51 = COMP <Q, 5> (&input[ 19 ], &input[ 51 ]); 
	x19x52 = COMP <Q, 5> (&input[ 19 ], &input[ 52 ]); 
	x19x53 = COMP <Q, 5> (&input[ 19 ], &input[ 53 ]); 
	x19x54 = COMP <Q, 5> (&input[ 19 ], &input[ 54 ]); 
	x19x55 = COMP <Q, 5> (&input[ 19 ], &input[ 55 ]); 
	x19x56 = COMP <Q, 5> (&input[ 19 ], &input[ 56 ]); 
	x19x57 = COMP <Q, 5> (&input[ 19 ], &input[ 57 ]); 
	x19x58 = COMP <Q, 5> (&input[ 19 ], &input[ 58 ]); 
	x19x59 = COMP <Q, 5> (&input[ 19 ], &input[ 59 ]); 
	x19x60 = COMP <Q, 5> (&input[ 19 ], &input[ 60 ]); 
	x19x61 = COMP <Q, 5> (&input[ 19 ], &input[ 61 ]); 
	x19x62 = COMP <Q, 5> (&input[ 19 ], &input[ 62 ]); 

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
	x20x31 = 0; 
	x20x32 = 0; 
	x20x33 = 0; 
	x20x34 = 0; 
	x20x35 = 0; 
	x20x36 = 0; 
	x20x37 = 0; 
	x20x38 = 0; 
	x20x39 = 0; 
	x20x40 = 0; 
	x20x41 = 0; 
	x20x42 = 0; 
	x20x43 = 0; 
	x20x44 = 0; 
	x20x45 = 0; 
	x20x46 = 0; 
	x20x47 = 0; 
	x20x48 = 0; 
	x20x49 = 0; 
	x20x50 = 0; 
	x20x51 = 0; 
	x20x52 = 0; 
	x20x53 = 0; 
	x20x54 = 0; 
	x20x55 = 0; 
	x20x56 = 0; 
	x20x57 = 0; 
	x20x58 = 0; 
	x20x59 = 0; 
	x20x60 = 0; 
	x20x61 = 0; 
	x20x62 = 0; 

	x21x22 = COMP <Q, 5> (&input[ 21 ], &input[ 22 ]); 
	x21x23 = COMP <Q, 5> (&input[ 21 ], &input[ 23 ]); 
	x21x24 = COMP <Q, 5> (&input[ 21 ], &input[ 24 ]); 
	x21x25 = COMP <Q, 5> (&input[ 21 ], &input[ 25 ]); 
	x21x26 = COMP <Q, 5> (&input[ 21 ], &input[ 26 ]); 
	x21x27 = COMP <Q, 5> (&input[ 21 ], &input[ 27 ]); 
	x21x28 = COMP <Q, 5> (&input[ 21 ], &input[ 28 ]); 
	x21x29 = COMP <Q, 5> (&input[ 21 ], &input[ 29 ]); 
	x21x30 = COMP <Q, 5> (&input[ 21 ], &input[ 30 ]); 
	x21x31 = COMP <Q, 5> (&input[ 21 ], &input[ 31 ]); 
	x21x32 = COMP <Q, 5> (&input[ 21 ], &input[ 32 ]); 
	x21x33 = COMP <Q, 5> (&input[ 21 ], &input[ 33 ]); 
	x21x34 = COMP <Q, 5> (&input[ 21 ], &input[ 34 ]); 
	x21x35 = COMP <Q, 5> (&input[ 21 ], &input[ 35 ]); 
	x21x36 = COMP <Q, 5> (&input[ 21 ], &input[ 36 ]); 
	x21x37 = COMP <Q, 5> (&input[ 21 ], &input[ 37 ]); 
	x21x38 = COMP <Q, 5> (&input[ 21 ], &input[ 38 ]); 
	x21x39 = COMP <Q, 5> (&input[ 21 ], &input[ 39 ]); 
	x21x40 = COMP <Q, 5> (&input[ 21 ], &input[ 40 ]); 
	x21x41 = COMP <Q, 5> (&input[ 21 ], &input[ 41 ]); 
	x21x42 = COMP <Q, 5> (&input[ 21 ], &input[ 42 ]); 
	x21x43 = COMP <Q, 5> (&input[ 21 ], &input[ 43 ]); 
	x21x44 = COMP <Q, 5> (&input[ 21 ], &input[ 44 ]); 
	x21x45 = COMP <Q, 5> (&input[ 21 ], &input[ 45 ]); 
	x21x46 = COMP <Q, 5> (&input[ 21 ], &input[ 46 ]); 
	x21x47 = COMP <Q, 5> (&input[ 21 ], &input[ 47 ]); 
	x21x48 = COMP <Q, 5> (&input[ 21 ], &input[ 48 ]); 
	x21x49 = COMP <Q, 5> (&input[ 21 ], &input[ 49 ]); 
	x21x50 = COMP <Q, 5> (&input[ 21 ], &input[ 50 ]); 
	x21x51 = COMP <Q, 5> (&input[ 21 ], &input[ 51 ]); 
	x21x52 = COMP <Q, 5> (&input[ 21 ], &input[ 52 ]); 
	x21x53 = COMP <Q, 5> (&input[ 21 ], &input[ 53 ]); 
	x21x54 = COMP <Q, 5> (&input[ 21 ], &input[ 54 ]); 
	x21x55 = COMP <Q, 5> (&input[ 21 ], &input[ 55 ]); 
	x21x56 = COMP <Q, 5> (&input[ 21 ], &input[ 56 ]); 
	x21x57 = COMP <Q, 5> (&input[ 21 ], &input[ 57 ]); 
	x21x58 = COMP <Q, 5> (&input[ 21 ], &input[ 58 ]); 
	x21x59 = COMP <Q, 5> (&input[ 21 ], &input[ 59 ]); 
	x21x60 = COMP <Q, 5> (&input[ 21 ], &input[ 60 ]); 
	x21x61 = COMP <Q, 5> (&input[ 21 ], &input[ 61 ]); 
	x21x62 = COMP <Q, 5> (&input[ 21 ], &input[ 62 ]); 

	x22x23 = 0; 
	x22x24 = 0; 
	x22x25 = 0; 
	x22x26 = 0; 
	x22x27 = 0; 
	x22x28 = 0; 
	x22x29 = 0; 
	x22x30 = 0; 
	x22x31 = 0; 
	x22x32 = 0; 
	x22x33 = 0; 
	x22x34 = 0; 
	x22x35 = 0; 
	x22x36 = 0; 
	x22x37 = 0; 
	x22x38 = 0; 
	x22x39 = 0; 
	x22x40 = 0; 
	x22x41 = 0; 
	x22x42 = 0; 
	x22x43 = 0; 
	x22x44 = 0; 
	x22x45 = 0; 
	x22x46 = 0; 
	x22x47 = 0; 
	x22x48 = 0; 
	x22x49 = 0; 
	x22x50 = 0; 
	x22x51 = 0; 
	x22x52 = 0; 
	x22x53 = 0; 
	x22x54 = 0; 
	x22x55 = 0; 
	x22x56 = 0; 
	x22x57 = 0; 
	x22x58 = 0; 
	x22x59 = 0; 
	x22x60 = 0; 
	x22x61 = 0; 
	x22x62 = 0; 

	x23x24 = COMP <Q, 5> (&input[ 23 ], &input[ 24 ]); 
	x23x25 = COMP <Q, 5> (&input[ 23 ], &input[ 25 ]); 
	x23x26 = COMP <Q, 5> (&input[ 23 ], &input[ 26 ]); 
	x23x27 = COMP <Q, 5> (&input[ 23 ], &input[ 27 ]); 
	x23x28 = COMP <Q, 5> (&input[ 23 ], &input[ 28 ]); 
	x23x29 = COMP <Q, 5> (&input[ 23 ], &input[ 29 ]); 
	x23x30 = COMP <Q, 5> (&input[ 23 ], &input[ 30 ]); 
	x23x31 = COMP <Q, 5> (&input[ 23 ], &input[ 31 ]); 
	x23x32 = COMP <Q, 5> (&input[ 23 ], &input[ 32 ]); 
	x23x33 = COMP <Q, 5> (&input[ 23 ], &input[ 33 ]); 
	x23x34 = COMP <Q, 5> (&input[ 23 ], &input[ 34 ]); 
	x23x35 = COMP <Q, 5> (&input[ 23 ], &input[ 35 ]); 
	x23x36 = COMP <Q, 5> (&input[ 23 ], &input[ 36 ]); 
	x23x37 = COMP <Q, 5> (&input[ 23 ], &input[ 37 ]); 
	x23x38 = COMP <Q, 5> (&input[ 23 ], &input[ 38 ]); 
	x23x39 = COMP <Q, 5> (&input[ 23 ], &input[ 39 ]); 
	x23x40 = COMP <Q, 5> (&input[ 23 ], &input[ 40 ]); 
	x23x41 = COMP <Q, 5> (&input[ 23 ], &input[ 41 ]); 
	x23x42 = COMP <Q, 5> (&input[ 23 ], &input[ 42 ]); 
	x23x43 = COMP <Q, 5> (&input[ 23 ], &input[ 43 ]); 
	x23x44 = COMP <Q, 5> (&input[ 23 ], &input[ 44 ]); 
	x23x45 = COMP <Q, 5> (&input[ 23 ], &input[ 45 ]); 
	x23x46 = COMP <Q, 5> (&input[ 23 ], &input[ 46 ]); 
	x23x47 = COMP <Q, 5> (&input[ 23 ], &input[ 47 ]); 
	x23x48 = COMP <Q, 5> (&input[ 23 ], &input[ 48 ]); 
	x23x49 = COMP <Q, 5> (&input[ 23 ], &input[ 49 ]); 
	x23x50 = COMP <Q, 5> (&input[ 23 ], &input[ 50 ]); 
	x23x51 = COMP <Q, 5> (&input[ 23 ], &input[ 51 ]); 
	x23x52 = COMP <Q, 5> (&input[ 23 ], &input[ 52 ]); 
	x23x53 = COMP <Q, 5> (&input[ 23 ], &input[ 53 ]); 
	x23x54 = COMP <Q, 5> (&input[ 23 ], &input[ 54 ]); 
	x23x55 = COMP <Q, 5> (&input[ 23 ], &input[ 55 ]); 
	x23x56 = COMP <Q, 5> (&input[ 23 ], &input[ 56 ]); 
	x23x57 = COMP <Q, 5> (&input[ 23 ], &input[ 57 ]); 
	x23x58 = COMP <Q, 5> (&input[ 23 ], &input[ 58 ]); 
	x23x59 = COMP <Q, 5> (&input[ 23 ], &input[ 59 ]); 
	x23x60 = COMP <Q, 5> (&input[ 23 ], &input[ 60 ]); 
	x23x61 = COMP <Q, 5> (&input[ 23 ], &input[ 61 ]); 
	x23x62 = COMP <Q, 5> (&input[ 23 ], &input[ 62 ]); 

	x24x25 = 0; 
	x24x26 = 0; 
	x24x27 = 0; 
	x24x28 = 0; 
	x24x29 = 0; 
	x24x30 = 0; 
	x24x31 = 0; 
	x24x32 = 0; 
	x24x33 = 0; 
	x24x34 = 0; 
	x24x35 = 0; 
	x24x36 = 0; 
	x24x37 = 0; 
	x24x38 = 0; 
	x24x39 = 0; 
	x24x40 = 0; 
	x24x41 = 0; 
	x24x42 = 0; 
	x24x43 = 0; 
	x24x44 = 0; 
	x24x45 = 0; 
	x24x46 = 0; 
	x24x47 = 0; 
	x24x48 = 0; 
	x24x49 = 0; 
	x24x50 = 0; 
	x24x51 = 0; 
	x24x52 = 0; 
	x24x53 = 0; 
	x24x54 = 0; 
	x24x55 = 0; 
	x24x56 = 0; 
	x24x57 = 0; 
	x24x58 = 0; 
	x24x59 = 0; 
	x24x60 = 0; 
	x24x61 = 0; 
	x24x62 = 0; 

	x25x26 = COMP <Q, 5> (&input[ 25 ], &input[ 26 ]); 
	x25x27 = COMP <Q, 5> (&input[ 25 ], &input[ 27 ]); 
	x25x28 = COMP <Q, 5> (&input[ 25 ], &input[ 28 ]); 
	x25x29 = COMP <Q, 5> (&input[ 25 ], &input[ 29 ]); 
	x25x30 = COMP <Q, 5> (&input[ 25 ], &input[ 30 ]); 
	x25x31 = COMP <Q, 5> (&input[ 25 ], &input[ 31 ]); 
	x25x32 = COMP <Q, 5> (&input[ 25 ], &input[ 32 ]); 
	x25x33 = COMP <Q, 5> (&input[ 25 ], &input[ 33 ]); 
	x25x34 = COMP <Q, 5> (&input[ 25 ], &input[ 34 ]); 
	x25x35 = COMP <Q, 5> (&input[ 25 ], &input[ 35 ]); 
	x25x36 = COMP <Q, 5> (&input[ 25 ], &input[ 36 ]); 
	x25x37 = COMP <Q, 5> (&input[ 25 ], &input[ 37 ]); 
	x25x38 = COMP <Q, 5> (&input[ 25 ], &input[ 38 ]); 
	x25x39 = COMP <Q, 5> (&input[ 25 ], &input[ 39 ]); 
	x25x40 = COMP <Q, 5> (&input[ 25 ], &input[ 40 ]); 
	x25x41 = COMP <Q, 5> (&input[ 25 ], &input[ 41 ]); 
	x25x42 = COMP <Q, 5> (&input[ 25 ], &input[ 42 ]); 
	x25x43 = COMP <Q, 5> (&input[ 25 ], &input[ 43 ]); 
	x25x44 = COMP <Q, 5> (&input[ 25 ], &input[ 44 ]); 
	x25x45 = COMP <Q, 5> (&input[ 25 ], &input[ 45 ]); 
	x25x46 = COMP <Q, 5> (&input[ 25 ], &input[ 46 ]); 
	x25x47 = COMP <Q, 5> (&input[ 25 ], &input[ 47 ]); 
	x25x48 = COMP <Q, 5> (&input[ 25 ], &input[ 48 ]); 
	x25x49 = COMP <Q, 5> (&input[ 25 ], &input[ 49 ]); 
	x25x50 = COMP <Q, 5> (&input[ 25 ], &input[ 50 ]); 
	x25x51 = COMP <Q, 5> (&input[ 25 ], &input[ 51 ]); 
	x25x52 = COMP <Q, 5> (&input[ 25 ], &input[ 52 ]); 
	x25x53 = COMP <Q, 5> (&input[ 25 ], &input[ 53 ]); 
	x25x54 = COMP <Q, 5> (&input[ 25 ], &input[ 54 ]); 
	x25x55 = COMP <Q, 5> (&input[ 25 ], &input[ 55 ]); 
	x25x56 = COMP <Q, 5> (&input[ 25 ], &input[ 56 ]); 
	x25x57 = COMP <Q, 5> (&input[ 25 ], &input[ 57 ]); 
	x25x58 = COMP <Q, 5> (&input[ 25 ], &input[ 58 ]); 
	x25x59 = COMP <Q, 5> (&input[ 25 ], &input[ 59 ]); 
	x25x60 = COMP <Q, 5> (&input[ 25 ], &input[ 60 ]); 
	x25x61 = COMP <Q, 5> (&input[ 25 ], &input[ 61 ]); 
	x25x62 = COMP <Q, 5> (&input[ 25 ], &input[ 62 ]); 

	x26x27 = 0; 
	x26x28 = 0; 
	x26x29 = 0; 
	x26x30 = 0; 
	x26x31 = 0; 
	x26x32 = 0; 
	x26x33 = 0; 
	x26x34 = 0; 
	x26x35 = 0; 
	x26x36 = 0; 
	x26x37 = 0; 
	x26x38 = 0; 
	x26x39 = 0; 
	x26x40 = 0; 
	x26x41 = 0; 
	x26x42 = 0; 
	x26x43 = 0; 
	x26x44 = 0; 
	x26x45 = 0; 
	x26x46 = 0; 
	x26x47 = 0; 
	x26x48 = 0; 
	x26x49 = 0; 
	x26x50 = 0; 
	x26x51 = 0; 
	x26x52 = 0; 
	x26x53 = 0; 
	x26x54 = 0; 
	x26x55 = 0; 
	x26x56 = 0; 
	x26x57 = 0; 
	x26x58 = 0; 
	x26x59 = 0; 
	x26x60 = 0; 
	x26x61 = 0; 
	x26x62 = 0; 

	x27x28 = COMP <Q, 5> (&input[ 27 ], &input[ 28 ]); 
	x27x29 = COMP <Q, 5> (&input[ 27 ], &input[ 29 ]); 
	x27x30 = COMP <Q, 5> (&input[ 27 ], &input[ 30 ]); 
	x27x31 = COMP <Q, 5> (&input[ 27 ], &input[ 31 ]); 
	x27x32 = COMP <Q, 5> (&input[ 27 ], &input[ 32 ]); 
	x27x33 = COMP <Q, 5> (&input[ 27 ], &input[ 33 ]); 
	x27x34 = COMP <Q, 5> (&input[ 27 ], &input[ 34 ]); 
	x27x35 = COMP <Q, 5> (&input[ 27 ], &input[ 35 ]); 
	x27x36 = COMP <Q, 5> (&input[ 27 ], &input[ 36 ]); 
	x27x37 = COMP <Q, 5> (&input[ 27 ], &input[ 37 ]); 
	x27x38 = COMP <Q, 5> (&input[ 27 ], &input[ 38 ]); 
	x27x39 = COMP <Q, 5> (&input[ 27 ], &input[ 39 ]); 
	x27x40 = COMP <Q, 5> (&input[ 27 ], &input[ 40 ]); 
	x27x41 = COMP <Q, 5> (&input[ 27 ], &input[ 41 ]); 
	x27x42 = COMP <Q, 5> (&input[ 27 ], &input[ 42 ]); 
	x27x43 = COMP <Q, 5> (&input[ 27 ], &input[ 43 ]); 
	x27x44 = COMP <Q, 5> (&input[ 27 ], &input[ 44 ]); 
	x27x45 = COMP <Q, 5> (&input[ 27 ], &input[ 45 ]); 
	x27x46 = COMP <Q, 5> (&input[ 27 ], &input[ 46 ]); 
	x27x47 = COMP <Q, 5> (&input[ 27 ], &input[ 47 ]); 
	x27x48 = COMP <Q, 5> (&input[ 27 ], &input[ 48 ]); 
	x27x49 = COMP <Q, 5> (&input[ 27 ], &input[ 49 ]); 
	x27x50 = COMP <Q, 5> (&input[ 27 ], &input[ 50 ]); 
	x27x51 = COMP <Q, 5> (&input[ 27 ], &input[ 51 ]); 
	x27x52 = COMP <Q, 5> (&input[ 27 ], &input[ 52 ]); 
	x27x53 = COMP <Q, 5> (&input[ 27 ], &input[ 53 ]); 
	x27x54 = COMP <Q, 5> (&input[ 27 ], &input[ 54 ]); 
	x27x55 = COMP <Q, 5> (&input[ 27 ], &input[ 55 ]); 
	x27x56 = COMP <Q, 5> (&input[ 27 ], &input[ 56 ]); 
	x27x57 = COMP <Q, 5> (&input[ 27 ], &input[ 57 ]); 
	x27x58 = COMP <Q, 5> (&input[ 27 ], &input[ 58 ]); 
	x27x59 = COMP <Q, 5> (&input[ 27 ], &input[ 59 ]); 
	x27x60 = COMP <Q, 5> (&input[ 27 ], &input[ 60 ]); 
	x27x61 = COMP <Q, 5> (&input[ 27 ], &input[ 61 ]); 
	x27x62 = COMP <Q, 5> (&input[ 27 ], &input[ 62 ]); 

	x28x29 = 0; 
	x28x30 = 0; 
	x28x31 = 0; 
	x28x32 = 0; 
	x28x33 = 0; 
	x28x34 = 0; 
	x28x35 = 0; 
	x28x36 = 0; 
	x28x37 = 0; 
	x28x38 = 0; 
	x28x39 = 0; 
	x28x40 = 0; 
	x28x41 = 0; 
	x28x42 = 0; 
	x28x43 = 0; 
	x28x44 = 0; 
	x28x45 = 0; 
	x28x46 = 0; 
	x28x47 = 0; 
	x28x48 = 0; 
	x28x49 = 0; 
	x28x50 = 0; 
	x28x51 = 0; 
	x28x52 = 0; 
	x28x53 = 0; 
	x28x54 = 0; 
	x28x55 = 0; 
	x28x56 = 0; 
	x28x57 = 0; 
	x28x58 = 0; 
	x28x59 = 0; 
	x28x60 = 0; 
	x28x61 = 0; 
	x28x62 = 0; 

	x29x30 = COMP <Q, 5> (&input[ 29 ], &input[ 30 ]); 
	x29x31 = COMP <Q, 5> (&input[ 29 ], &input[ 31 ]); 
	x29x32 = COMP <Q, 5> (&input[ 29 ], &input[ 32 ]); 
	x29x33 = COMP <Q, 5> (&input[ 29 ], &input[ 33 ]); 
	x29x34 = COMP <Q, 5> (&input[ 29 ], &input[ 34 ]); 
	x29x35 = COMP <Q, 5> (&input[ 29 ], &input[ 35 ]); 
	x29x36 = COMP <Q, 5> (&input[ 29 ], &input[ 36 ]); 
	x29x37 = COMP <Q, 5> (&input[ 29 ], &input[ 37 ]); 
	x29x38 = COMP <Q, 5> (&input[ 29 ], &input[ 38 ]); 
	x29x39 = COMP <Q, 5> (&input[ 29 ], &input[ 39 ]); 
	x29x40 = COMP <Q, 5> (&input[ 29 ], &input[ 40 ]); 
	x29x41 = COMP <Q, 5> (&input[ 29 ], &input[ 41 ]); 
	x29x42 = COMP <Q, 5> (&input[ 29 ], &input[ 42 ]); 
	x29x43 = COMP <Q, 5> (&input[ 29 ], &input[ 43 ]); 
	x29x44 = COMP <Q, 5> (&input[ 29 ], &input[ 44 ]); 
	x29x45 = COMP <Q, 5> (&input[ 29 ], &input[ 45 ]); 
	x29x46 = COMP <Q, 5> (&input[ 29 ], &input[ 46 ]); 
	x29x47 = COMP <Q, 5> (&input[ 29 ], &input[ 47 ]); 
	x29x48 = COMP <Q, 5> (&input[ 29 ], &input[ 48 ]); 
	x29x49 = COMP <Q, 5> (&input[ 29 ], &input[ 49 ]); 
	x29x50 = COMP <Q, 5> (&input[ 29 ], &input[ 50 ]); 
	x29x51 = COMP <Q, 5> (&input[ 29 ], &input[ 51 ]); 
	x29x52 = COMP <Q, 5> (&input[ 29 ], &input[ 52 ]); 
	x29x53 = COMP <Q, 5> (&input[ 29 ], &input[ 53 ]); 
	x29x54 = COMP <Q, 5> (&input[ 29 ], &input[ 54 ]); 
	x29x55 = COMP <Q, 5> (&input[ 29 ], &input[ 55 ]); 
	x29x56 = COMP <Q, 5> (&input[ 29 ], &input[ 56 ]); 
	x29x57 = COMP <Q, 5> (&input[ 29 ], &input[ 57 ]); 
	x29x58 = COMP <Q, 5> (&input[ 29 ], &input[ 58 ]); 
	x29x59 = COMP <Q, 5> (&input[ 29 ], &input[ 59 ]); 
	x29x60 = COMP <Q, 5> (&input[ 29 ], &input[ 60 ]); 
	x29x61 = COMP <Q, 5> (&input[ 29 ], &input[ 61 ]); 
	x29x62 = COMP <Q, 5> (&input[ 29 ], &input[ 62 ]); 

	x30x31 = 0; 
	x30x32 = 0; 
	x30x33 = 0; 
	x30x34 = 0; 
	x30x35 = 0; 
	x30x36 = 0; 
	x30x37 = 0; 
	x30x38 = 0; 
	x30x39 = 0; 
	x30x40 = 0; 
	x30x41 = 0; 
	x30x42 = 0; 
	x30x43 = 0; 
	x30x44 = 0; 
	x30x45 = 0; 
	x30x46 = 0; 
	x30x47 = 0; 
	x30x48 = 0; 
	x30x49 = 0; 
	x30x50 = 0; 
	x30x51 = 0; 
	x30x52 = 0; 
	x30x53 = 0; 
	x30x54 = 0; 
	x30x55 = 0; 
	x30x56 = 0; 
	x30x57 = 0; 
	x30x58 = 0; 
	x30x59 = 0; 
	x30x60 = 0; 
	x30x61 = 0; 
	x30x62 = 0; 

	x31x32 = COMP <Q, 5> (&input[ 31 ], &input[ 32 ]); 
	x31x33 = COMP <Q, 5> (&input[ 31 ], &input[ 33 ]); 
	x31x34 = COMP <Q, 5> (&input[ 31 ], &input[ 34 ]); 
	x31x35 = COMP <Q, 5> (&input[ 31 ], &input[ 35 ]); 
	x31x36 = COMP <Q, 5> (&input[ 31 ], &input[ 36 ]); 
	x31x37 = COMP <Q, 5> (&input[ 31 ], &input[ 37 ]); 
	x31x38 = COMP <Q, 5> (&input[ 31 ], &input[ 38 ]); 
	x31x39 = COMP <Q, 5> (&input[ 31 ], &input[ 39 ]); 
	x31x40 = COMP <Q, 5> (&input[ 31 ], &input[ 40 ]); 
	x31x41 = COMP <Q, 5> (&input[ 31 ], &input[ 41 ]); 
	x31x42 = COMP <Q, 5> (&input[ 31 ], &input[ 42 ]); 
	x31x43 = COMP <Q, 5> (&input[ 31 ], &input[ 43 ]); 
	x31x44 = COMP <Q, 5> (&input[ 31 ], &input[ 44 ]); 
	x31x45 = COMP <Q, 5> (&input[ 31 ], &input[ 45 ]); 
	x31x46 = COMP <Q, 5> (&input[ 31 ], &input[ 46 ]); 
	x31x47 = COMP <Q, 5> (&input[ 31 ], &input[ 47 ]); 
	x31x48 = COMP <Q, 5> (&input[ 31 ], &input[ 48 ]); 
	x31x49 = COMP <Q, 5> (&input[ 31 ], &input[ 49 ]); 
	x31x50 = COMP <Q, 5> (&input[ 31 ], &input[ 50 ]); 
	x31x51 = COMP <Q, 5> (&input[ 31 ], &input[ 51 ]); 
	x31x52 = COMP <Q, 5> (&input[ 31 ], &input[ 52 ]); 
	x31x53 = COMP <Q, 5> (&input[ 31 ], &input[ 53 ]); 
	x31x54 = COMP <Q, 5> (&input[ 31 ], &input[ 54 ]); 
	x31x55 = COMP <Q, 5> (&input[ 31 ], &input[ 55 ]); 
	x31x56 = COMP <Q, 5> (&input[ 31 ], &input[ 56 ]); 
	x31x57 = COMP <Q, 5> (&input[ 31 ], &input[ 57 ]); 
	x31x58 = COMP <Q, 5> (&input[ 31 ], &input[ 58 ]); 
	x31x59 = COMP <Q, 5> (&input[ 31 ], &input[ 59 ]); 
	x31x60 = COMP <Q, 5> (&input[ 31 ], &input[ 60 ]); 
	x31x61 = COMP <Q, 5> (&input[ 31 ], &input[ 61 ]); 
	x31x62 = COMP <Q, 5> (&input[ 31 ], &input[ 62 ]); 

	x32x33 = 0; 
	x32x34 = 0; 
	x32x35 = 0; 
	x32x36 = 0; 
	x32x37 = 0; 
	x32x38 = 0; 
	x32x39 = 0; 
	x32x40 = 0; 
	x32x41 = 0; 
	x32x42 = 0; 
	x32x43 = 0; 
	x32x44 = 0; 
	x32x45 = 0; 
	x32x46 = 0; 
	x32x47 = 0; 
	x32x48 = 0; 
	x32x49 = 0; 
	x32x50 = 0; 
	x32x51 = 0; 
	x32x52 = 0; 
	x32x53 = 0; 
	x32x54 = 0; 
	x32x55 = 0; 
	x32x56 = 0; 
	x32x57 = 0; 
	x32x58 = 0; 
	x32x59 = 0; 
	x32x60 = 0; 
	x32x61 = 0; 
	x32x62 = 0; 

	x33x34 = COMP <Q, 5> (&input[ 33 ], &input[ 34 ]); 
	x33x35 = COMP <Q, 5> (&input[ 33 ], &input[ 35 ]); 
	x33x36 = COMP <Q, 5> (&input[ 33 ], &input[ 36 ]); 
	x33x37 = COMP <Q, 5> (&input[ 33 ], &input[ 37 ]); 
	x33x38 = COMP <Q, 5> (&input[ 33 ], &input[ 38 ]); 
	x33x39 = COMP <Q, 5> (&input[ 33 ], &input[ 39 ]); 
	x33x40 = COMP <Q, 5> (&input[ 33 ], &input[ 40 ]); 
	x33x41 = COMP <Q, 5> (&input[ 33 ], &input[ 41 ]); 
	x33x42 = COMP <Q, 5> (&input[ 33 ], &input[ 42 ]); 
	x33x43 = COMP <Q, 5> (&input[ 33 ], &input[ 43 ]); 
	x33x44 = COMP <Q, 5> (&input[ 33 ], &input[ 44 ]); 
	x33x45 = COMP <Q, 5> (&input[ 33 ], &input[ 45 ]); 
	x33x46 = COMP <Q, 5> (&input[ 33 ], &input[ 46 ]); 
	x33x47 = COMP <Q, 5> (&input[ 33 ], &input[ 47 ]); 
	x33x48 = COMP <Q, 5> (&input[ 33 ], &input[ 48 ]); 
	x33x49 = COMP <Q, 5> (&input[ 33 ], &input[ 49 ]); 
	x33x50 = COMP <Q, 5> (&input[ 33 ], &input[ 50 ]); 
	x33x51 = COMP <Q, 5> (&input[ 33 ], &input[ 51 ]); 
	x33x52 = COMP <Q, 5> (&input[ 33 ], &input[ 52 ]); 
	x33x53 = COMP <Q, 5> (&input[ 33 ], &input[ 53 ]); 
	x33x54 = COMP <Q, 5> (&input[ 33 ], &input[ 54 ]); 
	x33x55 = COMP <Q, 5> (&input[ 33 ], &input[ 55 ]); 
	x33x56 = COMP <Q, 5> (&input[ 33 ], &input[ 56 ]); 
	x33x57 = COMP <Q, 5> (&input[ 33 ], &input[ 57 ]); 
	x33x58 = COMP <Q, 5> (&input[ 33 ], &input[ 58 ]); 
	x33x59 = COMP <Q, 5> (&input[ 33 ], &input[ 59 ]); 
	x33x60 = COMP <Q, 5> (&input[ 33 ], &input[ 60 ]); 
	x33x61 = COMP <Q, 5> (&input[ 33 ], &input[ 61 ]); 
	x33x62 = COMP <Q, 5> (&input[ 33 ], &input[ 62 ]); 

	x34x35 = 0; 
	x34x36 = 0; 
	x34x37 = 0; 
	x34x38 = 0; 
	x34x39 = 0; 
	x34x40 = 0; 
	x34x41 = 0; 
	x34x42 = 0; 
	x34x43 = 0; 
	x34x44 = 0; 
	x34x45 = 0; 
	x34x46 = 0; 
	x34x47 = 0; 
	x34x48 = 0; 
	x34x49 = 0; 
	x34x50 = 0; 
	x34x51 = 0; 
	x34x52 = 0; 
	x34x53 = 0; 
	x34x54 = 0; 
	x34x55 = 0; 
	x34x56 = 0; 
	x34x57 = 0; 
	x34x58 = 0; 
	x34x59 = 0; 
	x34x60 = 0; 
	x34x61 = 0; 
	x34x62 = 0; 

	x35x36 = COMP <Q, 5> (&input[ 35 ], &input[ 36 ]); 
	x35x37 = COMP <Q, 5> (&input[ 35 ], &input[ 37 ]); 
	x35x38 = COMP <Q, 5> (&input[ 35 ], &input[ 38 ]); 
	x35x39 = COMP <Q, 5> (&input[ 35 ], &input[ 39 ]); 
	x35x40 = COMP <Q, 5> (&input[ 35 ], &input[ 40 ]); 
	x35x41 = COMP <Q, 5> (&input[ 35 ], &input[ 41 ]); 
	x35x42 = COMP <Q, 5> (&input[ 35 ], &input[ 42 ]); 
	x35x43 = COMP <Q, 5> (&input[ 35 ], &input[ 43 ]); 
	x35x44 = COMP <Q, 5> (&input[ 35 ], &input[ 44 ]); 
	x35x45 = COMP <Q, 5> (&input[ 35 ], &input[ 45 ]); 
	x35x46 = COMP <Q, 5> (&input[ 35 ], &input[ 46 ]); 
	x35x47 = COMP <Q, 5> (&input[ 35 ], &input[ 47 ]); 
	x35x48 = COMP <Q, 5> (&input[ 35 ], &input[ 48 ]); 
	x35x49 = COMP <Q, 5> (&input[ 35 ], &input[ 49 ]); 
	x35x50 = COMP <Q, 5> (&input[ 35 ], &input[ 50 ]); 
	x35x51 = COMP <Q, 5> (&input[ 35 ], &input[ 51 ]); 
	x35x52 = COMP <Q, 5> (&input[ 35 ], &input[ 52 ]); 
	x35x53 = COMP <Q, 5> (&input[ 35 ], &input[ 53 ]); 
	x35x54 = COMP <Q, 5> (&input[ 35 ], &input[ 54 ]); 
	x35x55 = COMP <Q, 5> (&input[ 35 ], &input[ 55 ]); 
	x35x56 = COMP <Q, 5> (&input[ 35 ], &input[ 56 ]); 
	x35x57 = COMP <Q, 5> (&input[ 35 ], &input[ 57 ]); 
	x35x58 = COMP <Q, 5> (&input[ 35 ], &input[ 58 ]); 
	x35x59 = COMP <Q, 5> (&input[ 35 ], &input[ 59 ]); 
	x35x60 = COMP <Q, 5> (&input[ 35 ], &input[ 60 ]); 
	x35x61 = COMP <Q, 5> (&input[ 35 ], &input[ 61 ]); 
	x35x62 = COMP <Q, 5> (&input[ 35 ], &input[ 62 ]); 

	x36x37 = 0; 
	x36x38 = 0; 
	x36x39 = 0; 
	x36x40 = 0; 
	x36x41 = 0; 
	x36x42 = 0; 
	x36x43 = 0; 
	x36x44 = 0; 
	x36x45 = 0; 
	x36x46 = 0; 
	x36x47 = 0; 
	x36x48 = 0; 
	x36x49 = 0; 
	x36x50 = 0; 
	x36x51 = 0; 
	x36x52 = 0; 
	x36x53 = 0; 
	x36x54 = 0; 
	x36x55 = 0; 
	x36x56 = 0; 
	x36x57 = 0; 
	x36x58 = 0; 
	x36x59 = 0; 
	x36x60 = 0; 
	x36x61 = 0; 
	x36x62 = 0; 

	x37x38 = COMP <Q, 5> (&input[ 37 ], &input[ 38 ]); 
	x37x39 = COMP <Q, 5> (&input[ 37 ], &input[ 39 ]); 
	x37x40 = COMP <Q, 5> (&input[ 37 ], &input[ 40 ]); 
	x37x41 = COMP <Q, 5> (&input[ 37 ], &input[ 41 ]); 
	x37x42 = COMP <Q, 5> (&input[ 37 ], &input[ 42 ]); 
	x37x43 = COMP <Q, 5> (&input[ 37 ], &input[ 43 ]); 
	x37x44 = COMP <Q, 5> (&input[ 37 ], &input[ 44 ]); 
	x37x45 = COMP <Q, 5> (&input[ 37 ], &input[ 45 ]); 
	x37x46 = COMP <Q, 5> (&input[ 37 ], &input[ 46 ]); 
	x37x47 = COMP <Q, 5> (&input[ 37 ], &input[ 47 ]); 
	x37x48 = COMP <Q, 5> (&input[ 37 ], &input[ 48 ]); 
	x37x49 = COMP <Q, 5> (&input[ 37 ], &input[ 49 ]); 
	x37x50 = COMP <Q, 5> (&input[ 37 ], &input[ 50 ]); 
	x37x51 = COMP <Q, 5> (&input[ 37 ], &input[ 51 ]); 
	x37x52 = COMP <Q, 5> (&input[ 37 ], &input[ 52 ]); 
	x37x53 = COMP <Q, 5> (&input[ 37 ], &input[ 53 ]); 
	x37x54 = COMP <Q, 5> (&input[ 37 ], &input[ 54 ]); 
	x37x55 = COMP <Q, 5> (&input[ 37 ], &input[ 55 ]); 
	x37x56 = COMP <Q, 5> (&input[ 37 ], &input[ 56 ]); 
	x37x57 = COMP <Q, 5> (&input[ 37 ], &input[ 57 ]); 
	x37x58 = COMP <Q, 5> (&input[ 37 ], &input[ 58 ]); 
	x37x59 = COMP <Q, 5> (&input[ 37 ], &input[ 59 ]); 
	x37x60 = COMP <Q, 5> (&input[ 37 ], &input[ 60 ]); 
	x37x61 = COMP <Q, 5> (&input[ 37 ], &input[ 61 ]); 
	x37x62 = COMP <Q, 5> (&input[ 37 ], &input[ 62 ]); 

	x38x39 = 0; 
	x38x40 = 0; 
	x38x41 = 0; 
	x38x42 = 0; 
	x38x43 = 0; 
	x38x44 = 0; 
	x38x45 = 0; 
	x38x46 = 0; 
	x38x47 = 0; 
	x38x48 = 0; 
	x38x49 = 0; 
	x38x50 = 0; 
	x38x51 = 0; 
	x38x52 = 0; 
	x38x53 = 0; 
	x38x54 = 0; 
	x38x55 = 0; 
	x38x56 = 0; 
	x38x57 = 0; 
	x38x58 = 0; 
	x38x59 = 0; 
	x38x60 = 0; 
	x38x61 = 0; 
	x38x62 = 0; 

	x39x40 = COMP <Q, 5> (&input[ 39 ], &input[ 40 ]); 
	x39x41 = COMP <Q, 5> (&input[ 39 ], &input[ 41 ]); 
	x39x42 = COMP <Q, 5> (&input[ 39 ], &input[ 42 ]); 
	x39x43 = COMP <Q, 5> (&input[ 39 ], &input[ 43 ]); 
	x39x44 = COMP <Q, 5> (&input[ 39 ], &input[ 44 ]); 
	x39x45 = COMP <Q, 5> (&input[ 39 ], &input[ 45 ]); 
	x39x46 = COMP <Q, 5> (&input[ 39 ], &input[ 46 ]); 
	x39x47 = COMP <Q, 5> (&input[ 39 ], &input[ 47 ]); 
	x39x48 = COMP <Q, 5> (&input[ 39 ], &input[ 48 ]); 
	x39x49 = COMP <Q, 5> (&input[ 39 ], &input[ 49 ]); 
	x39x50 = COMP <Q, 5> (&input[ 39 ], &input[ 50 ]); 
	x39x51 = COMP <Q, 5> (&input[ 39 ], &input[ 51 ]); 
	x39x52 = COMP <Q, 5> (&input[ 39 ], &input[ 52 ]); 
	x39x53 = COMP <Q, 5> (&input[ 39 ], &input[ 53 ]); 
	x39x54 = COMP <Q, 5> (&input[ 39 ], &input[ 54 ]); 
	x39x55 = COMP <Q, 5> (&input[ 39 ], &input[ 55 ]); 
	x39x56 = COMP <Q, 5> (&input[ 39 ], &input[ 56 ]); 
	x39x57 = COMP <Q, 5> (&input[ 39 ], &input[ 57 ]); 
	x39x58 = COMP <Q, 5> (&input[ 39 ], &input[ 58 ]); 
	x39x59 = COMP <Q, 5> (&input[ 39 ], &input[ 59 ]); 
	x39x60 = COMP <Q, 5> (&input[ 39 ], &input[ 60 ]); 
	x39x61 = COMP <Q, 5> (&input[ 39 ], &input[ 61 ]); 
	x39x62 = COMP <Q, 5> (&input[ 39 ], &input[ 62 ]); 

	x40x41 = 0; 
	x40x42 = 0; 
	x40x43 = 0; 
	x40x44 = 0; 
	x40x45 = 0; 
	x40x46 = 0; 
	x40x47 = 0; 
	x40x48 = 0; 
	x40x49 = 0; 
	x40x50 = 0; 
	x40x51 = 0; 
	x40x52 = 0; 
	x40x53 = 0; 
	x40x54 = 0; 
	x40x55 = 0; 
	x40x56 = 0; 
	x40x57 = 0; 
	x40x58 = 0; 
	x40x59 = 0; 
	x40x60 = 0; 
	x40x61 = 0; 
	x40x62 = 0; 

	x41x42 = COMP <Q, 5> (&input[ 41 ], &input[ 42 ]); 
	x41x43 = COMP <Q, 5> (&input[ 41 ], &input[ 43 ]); 
	x41x44 = COMP <Q, 5> (&input[ 41 ], &input[ 44 ]); 
	x41x45 = COMP <Q, 5> (&input[ 41 ], &input[ 45 ]); 
	x41x46 = COMP <Q, 5> (&input[ 41 ], &input[ 46 ]); 
	x41x47 = COMP <Q, 5> (&input[ 41 ], &input[ 47 ]); 
	x41x48 = COMP <Q, 5> (&input[ 41 ], &input[ 48 ]); 
	x41x49 = COMP <Q, 5> (&input[ 41 ], &input[ 49 ]); 
	x41x50 = COMP <Q, 5> (&input[ 41 ], &input[ 50 ]); 
	x41x51 = COMP <Q, 5> (&input[ 41 ], &input[ 51 ]); 
	x41x52 = COMP <Q, 5> (&input[ 41 ], &input[ 52 ]); 
	x41x53 = COMP <Q, 5> (&input[ 41 ], &input[ 53 ]); 
	x41x54 = COMP <Q, 5> (&input[ 41 ], &input[ 54 ]); 
	x41x55 = COMP <Q, 5> (&input[ 41 ], &input[ 55 ]); 
	x41x56 = COMP <Q, 5> (&input[ 41 ], &input[ 56 ]); 
	x41x57 = COMP <Q, 5> (&input[ 41 ], &input[ 57 ]); 
	x41x58 = COMP <Q, 5> (&input[ 41 ], &input[ 58 ]); 
	x41x59 = COMP <Q, 5> (&input[ 41 ], &input[ 59 ]); 
	x41x60 = COMP <Q, 5> (&input[ 41 ], &input[ 60 ]); 
	x41x61 = COMP <Q, 5> (&input[ 41 ], &input[ 61 ]); 
	x41x62 = COMP <Q, 5> (&input[ 41 ], &input[ 62 ]); 

	x42x43 = 0; 
	x42x44 = 0; 
	x42x45 = 0; 
	x42x46 = 0; 
	x42x47 = 0; 
	x42x48 = 0; 
	x42x49 = 0; 
	x42x50 = 0; 
	x42x51 = 0; 
	x42x52 = 0; 
	x42x53 = 0; 
	x42x54 = 0; 
	x42x55 = 0; 
	x42x56 = 0; 
	x42x57 = 0; 
	x42x58 = 0; 
	x42x59 = 0; 
	x42x60 = 0; 
	x42x61 = 0; 
	x42x62 = 0; 

	x43x44 = COMP <Q, 5> (&input[ 43 ], &input[ 44 ]); 
	x43x45 = COMP <Q, 5> (&input[ 43 ], &input[ 45 ]); 
	x43x46 = COMP <Q, 5> (&input[ 43 ], &input[ 46 ]); 
	x43x47 = COMP <Q, 5> (&input[ 43 ], &input[ 47 ]); 
	x43x48 = COMP <Q, 5> (&input[ 43 ], &input[ 48 ]); 
	x43x49 = COMP <Q, 5> (&input[ 43 ], &input[ 49 ]); 
	x43x50 = COMP <Q, 5> (&input[ 43 ], &input[ 50 ]); 
	x43x51 = COMP <Q, 5> (&input[ 43 ], &input[ 51 ]); 
	x43x52 = COMP <Q, 5> (&input[ 43 ], &input[ 52 ]); 
	x43x53 = COMP <Q, 5> (&input[ 43 ], &input[ 53 ]); 
	x43x54 = COMP <Q, 5> (&input[ 43 ], &input[ 54 ]); 
	x43x55 = COMP <Q, 5> (&input[ 43 ], &input[ 55 ]); 
	x43x56 = COMP <Q, 5> (&input[ 43 ], &input[ 56 ]); 
	x43x57 = COMP <Q, 5> (&input[ 43 ], &input[ 57 ]); 
	x43x58 = COMP <Q, 5> (&input[ 43 ], &input[ 58 ]); 
	x43x59 = COMP <Q, 5> (&input[ 43 ], &input[ 59 ]); 
	x43x60 = COMP <Q, 5> (&input[ 43 ], &input[ 60 ]); 
	x43x61 = COMP <Q, 5> (&input[ 43 ], &input[ 61 ]); 
	x43x62 = COMP <Q, 5> (&input[ 43 ], &input[ 62 ]); 

	x44x45 = 0; 
	x44x46 = 0; 
	x44x47 = 0; 
	x44x48 = 0; 
	x44x49 = 0; 
	x44x50 = 0; 
	x44x51 = 0; 
	x44x52 = 0; 
	x44x53 = 0; 
	x44x54 = 0; 
	x44x55 = 0; 
	x44x56 = 0; 
	x44x57 = 0; 
	x44x58 = 0; 
	x44x59 = 0; 
	x44x60 = 0; 
	x44x61 = 0; 
	x44x62 = 0; 

	x45x46 = COMP <Q, 5> (&input[ 45 ], &input[ 46 ]); 
	x45x47 = COMP <Q, 5> (&input[ 45 ], &input[ 47 ]); 
	x45x48 = COMP <Q, 5> (&input[ 45 ], &input[ 48 ]); 
	x45x49 = COMP <Q, 5> (&input[ 45 ], &input[ 49 ]); 
	x45x50 = COMP <Q, 5> (&input[ 45 ], &input[ 50 ]); 
	x45x51 = COMP <Q, 5> (&input[ 45 ], &input[ 51 ]); 
	x45x52 = COMP <Q, 5> (&input[ 45 ], &input[ 52 ]); 
	x45x53 = COMP <Q, 5> (&input[ 45 ], &input[ 53 ]); 
	x45x54 = COMP <Q, 5> (&input[ 45 ], &input[ 54 ]); 
	x45x55 = COMP <Q, 5> (&input[ 45 ], &input[ 55 ]); 
	x45x56 = COMP <Q, 5> (&input[ 45 ], &input[ 56 ]); 
	x45x57 = COMP <Q, 5> (&input[ 45 ], &input[ 57 ]); 
	x45x58 = COMP <Q, 5> (&input[ 45 ], &input[ 58 ]); 
	x45x59 = COMP <Q, 5> (&input[ 45 ], &input[ 59 ]); 
	x45x60 = COMP <Q, 5> (&input[ 45 ], &input[ 60 ]); 
	x45x61 = COMP <Q, 5> (&input[ 45 ], &input[ 61 ]); 
	x45x62 = COMP <Q, 5> (&input[ 45 ], &input[ 62 ]); 

	x46x47 = 0; 
	x46x48 = 0; 
	x46x49 = 0; 
	x46x50 = 0; 
	x46x51 = 0; 
	x46x52 = 0; 
	x46x53 = 0; 
	x46x54 = 0; 
	x46x55 = 0; 
	x46x56 = 0; 
	x46x57 = 0; 
	x46x58 = 0; 
	x46x59 = 0; 
	x46x60 = 0; 
	x46x61 = 0; 
	x46x62 = 0; 

	x47x48 = COMP <Q, 5> (&input[ 47 ], &input[ 48 ]); 
	x47x49 = COMP <Q, 5> (&input[ 47 ], &input[ 49 ]); 
	x47x50 = COMP <Q, 5> (&input[ 47 ], &input[ 50 ]); 
	x47x51 = COMP <Q, 5> (&input[ 47 ], &input[ 51 ]); 
	x47x52 = COMP <Q, 5> (&input[ 47 ], &input[ 52 ]); 
	x47x53 = COMP <Q, 5> (&input[ 47 ], &input[ 53 ]); 
	x47x54 = COMP <Q, 5> (&input[ 47 ], &input[ 54 ]); 
	x47x55 = COMP <Q, 5> (&input[ 47 ], &input[ 55 ]); 
	x47x56 = COMP <Q, 5> (&input[ 47 ], &input[ 56 ]); 
	x47x57 = COMP <Q, 5> (&input[ 47 ], &input[ 57 ]); 
	x47x58 = COMP <Q, 5> (&input[ 47 ], &input[ 58 ]); 
	x47x59 = COMP <Q, 5> (&input[ 47 ], &input[ 59 ]); 
	x47x60 = COMP <Q, 5> (&input[ 47 ], &input[ 60 ]); 
	x47x61 = COMP <Q, 5> (&input[ 47 ], &input[ 61 ]); 
	x47x62 = COMP <Q, 5> (&input[ 47 ], &input[ 62 ]); 

	x48x49 = 0; 
	x48x50 = 0; 
	x48x51 = 0; 
	x48x52 = 0; 
	x48x53 = 0; 
	x48x54 = 0; 
	x48x55 = 0; 
	x48x56 = 0; 
	x48x57 = 0; 
	x48x58 = 0; 
	x48x59 = 0; 
	x48x60 = 0; 
	x48x61 = 0; 
	x48x62 = 0; 

	x49x50 = COMP <Q, 5> (&input[ 49 ], &input[ 50 ]); 
	x49x51 = COMP <Q, 5> (&input[ 49 ], &input[ 51 ]); 
	x49x52 = COMP <Q, 5> (&input[ 49 ], &input[ 52 ]); 
	x49x53 = COMP <Q, 5> (&input[ 49 ], &input[ 53 ]); 
	x49x54 = COMP <Q, 5> (&input[ 49 ], &input[ 54 ]); 
	x49x55 = COMP <Q, 5> (&input[ 49 ], &input[ 55 ]); 
	x49x56 = COMP <Q, 5> (&input[ 49 ], &input[ 56 ]); 
	x49x57 = COMP <Q, 5> (&input[ 49 ], &input[ 57 ]); 
	x49x58 = COMP <Q, 5> (&input[ 49 ], &input[ 58 ]); 
	x49x59 = COMP <Q, 5> (&input[ 49 ], &input[ 59 ]); 
	x49x60 = COMP <Q, 5> (&input[ 49 ], &input[ 60 ]); 
	x49x61 = COMP <Q, 5> (&input[ 49 ], &input[ 61 ]); 
	x49x62 = COMP <Q, 5> (&input[ 49 ], &input[ 62 ]); 

	x50x51 = 0; 
	x50x52 = 0; 
	x50x53 = 0; 
	x50x54 = 0; 
	x50x55 = 0; 
	x50x56 = 0; 
	x50x57 = 0; 
	x50x58 = 0; 
	x50x59 = 0; 
	x50x60 = 0; 
	x50x61 = 0; 
	x50x62 = 0; 

	x51x52 = COMP <Q, 5> (&input[ 51 ], &input[ 52 ]); 
	x51x53 = COMP <Q, 5> (&input[ 51 ], &input[ 53 ]); 
	x51x54 = COMP <Q, 5> (&input[ 51 ], &input[ 54 ]); 
	x51x55 = COMP <Q, 5> (&input[ 51 ], &input[ 55 ]); 
	x51x56 = COMP <Q, 5> (&input[ 51 ], &input[ 56 ]); 
	x51x57 = COMP <Q, 5> (&input[ 51 ], &input[ 57 ]); 
	x51x58 = COMP <Q, 5> (&input[ 51 ], &input[ 58 ]); 
	x51x59 = COMP <Q, 5> (&input[ 51 ], &input[ 59 ]); 
	x51x60 = COMP <Q, 5> (&input[ 51 ], &input[ 60 ]); 
	x51x61 = COMP <Q, 5> (&input[ 51 ], &input[ 61 ]); 
	x51x62 = COMP <Q, 5> (&input[ 51 ], &input[ 62 ]); 

	x52x53 = 0; 
	x52x54 = 0; 
	x52x55 = 0; 
	x52x56 = 0; 
	x52x57 = 0; 
	x52x58 = 0; 
	x52x59 = 0; 
	x52x60 = 0; 
	x52x61 = 0; 
	x52x62 = 0; 

	x53x54 = COMP <Q, 5> (&input[ 53 ], &input[ 54 ]); 
	x53x55 = COMP <Q, 5> (&input[ 53 ], &input[ 55 ]); 
	x53x56 = COMP <Q, 5> (&input[ 53 ], &input[ 56 ]); 
	x53x57 = COMP <Q, 5> (&input[ 53 ], &input[ 57 ]); 
	x53x58 = COMP <Q, 5> (&input[ 53 ], &input[ 58 ]); 
	x53x59 = COMP <Q, 5> (&input[ 53 ], &input[ 59 ]); 
	x53x60 = COMP <Q, 5> (&input[ 53 ], &input[ 60 ]); 
	x53x61 = COMP <Q, 5> (&input[ 53 ], &input[ 61 ]); 
	x53x62 = COMP <Q, 5> (&input[ 53 ], &input[ 62 ]); 

	x54x55 = 0; 
	x54x56 = 0; 
	x54x57 = 0; 
	x54x58 = 0; 
	x54x59 = 0; 
	x54x60 = 0; 
	x54x61 = 0; 
	x54x62 = 0; 

	x55x56 = COMP <Q, 5> (&input[ 55 ], &input[ 56 ]); 
	x55x57 = COMP <Q, 5> (&input[ 55 ], &input[ 57 ]); 
	x55x58 = COMP <Q, 5> (&input[ 55 ], &input[ 58 ]); 
	x55x59 = COMP <Q, 5> (&input[ 55 ], &input[ 59 ]); 
	x55x60 = COMP <Q, 5> (&input[ 55 ], &input[ 60 ]); 
	x55x61 = COMP <Q, 5> (&input[ 55 ], &input[ 61 ]); 
	x55x62 = COMP <Q, 5> (&input[ 55 ], &input[ 62 ]); 

	x56x57 = 0; 
	x56x58 = 0; 
	x56x59 = 0; 
	x56x60 = 0; 
	x56x61 = 0; 
	x56x62 = 0; 

	x57x58 = COMP <Q, 5> (&input[ 57 ], &input[ 58 ]); 
	x57x59 = COMP <Q, 5> (&input[ 57 ], &input[ 59 ]); 
	x57x60 = COMP <Q, 5> (&input[ 57 ], &input[ 60 ]); 
	x57x61 = COMP <Q, 5> (&input[ 57 ], &input[ 61 ]); 
	x57x62 = COMP <Q, 5> (&input[ 57 ], &input[ 62 ]); 

	x58x59 = 0; 
	x58x60 = 0; 
	x58x61 = 0; 
	x58x62 = 0; 

	x59x60 = COMP <Q, 5> (&input[ 59 ], &input[ 60 ]); 
	x59x61 = COMP <Q, 5> (&input[ 59 ], &input[ 61 ]); 
	x59x62 = COMP <Q, 5> (&input[ 59 ], &input[ 62 ]); 

	x60x61 = 0; 
	x60x62 = 0; 

	x61x62 = COMP <Q, 5> (&input[ 61 ], &input[ 62 ]); 


// ON CALCULE LES POSITIONS DES DONNEES EN SORTIE

	P0 = (sc_uint<6>) x0x1 + (sc_uint<6>) x0x2 + (sc_uint<6>) x0x3 + (sc_uint<6>) x0x4 + (sc_uint<6>) x0x5 + (sc_uint<6>) x0x6 + (sc_uint<6>) x0x7 + (sc_uint<6>) x0x8 + (sc_uint<6>) x0x9 + (sc_uint<6>) x0x10 + (sc_uint<6>) x0x11 + (sc_uint<6>) x0x12 + (sc_uint<6>) x0x13 + (sc_uint<6>) x0x14 + (sc_uint<6>) x0x15 + (sc_uint<6>) x0x16 + (sc_uint<6>) x0x17 + (sc_uint<6>) x0x18 + (sc_uint<6>) x0x19 + (sc_uint<6>) x0x20 + (sc_uint<6>) x0x21 + (sc_uint<6>) x0x22 + (sc_uint<6>) x0x23 + (sc_uint<6>) x0x24 + (sc_uint<6>) x0x25 + (sc_uint<6>) x0x26 + (sc_uint<6>) x0x27 + (sc_uint<6>) x0x28 + (sc_uint<6>) x0x29 + (sc_uint<6>) x0x30 + (sc_uint<6>) x0x31 + (sc_uint<6>) x0x32 + (sc_uint<6>) x0x33 + (sc_uint<6>) x0x34 + (sc_uint<6>) x0x35 + (sc_uint<6>) x0x36 + (sc_uint<6>) x0x37 + (sc_uint<6>) x0x38 + (sc_uint<6>) x0x39 + (sc_uint<6>) x0x40 + (sc_uint<6>) x0x41 + (sc_uint<6>) x0x42 + (sc_uint<6>) x0x43 + (sc_uint<6>) x0x44 + (sc_uint<6>) x0x45 + (sc_uint<6>) x0x46 + (sc_uint<6>) x0x47 + (sc_uint<6>) x0x48 + (sc_uint<6>) x0x49 + (sc_uint<6>) x0x50 + (sc_uint<6>) x0x51 + (sc_uint<6>) x0x52 + (sc_uint<6>) x0x53 + (sc_uint<6>) x0x54 + (sc_uint<6>) x0x55 + (sc_uint<6>) x0x56 + (sc_uint<6>) x0x57 + (sc_uint<6>) x0x58 + (sc_uint<6>) x0x59 + (sc_uint<6>) x0x60 + (sc_uint<6>) x0x61 + (sc_uint<6>) x0x62;
	P1 = (sc_uint<6>) ~x0x1 + (sc_uint<6>) x1x2 + (sc_uint<6>) x1x3 + (sc_uint<6>) x1x4 + (sc_uint<6>) x1x5 + (sc_uint<6>) x1x6 + (sc_uint<6>) x1x7 + (sc_uint<6>) x1x8 + (sc_uint<6>) x1x9 + (sc_uint<6>) x1x10 + (sc_uint<6>) x1x11 + (sc_uint<6>) x1x12 + (sc_uint<6>) x1x13 + (sc_uint<6>) x1x14 + (sc_uint<6>) x1x15 + (sc_uint<6>) x1x16 + (sc_uint<6>) x1x17 + (sc_uint<6>) x1x18 + (sc_uint<6>) x1x19 + (sc_uint<6>) x1x20 + (sc_uint<6>) x1x21 + (sc_uint<6>) x1x22 + (sc_uint<6>) x1x23 + (sc_uint<6>) x1x24 + (sc_uint<6>) x1x25 + (sc_uint<6>) x1x26 + (sc_uint<6>) x1x27 + (sc_uint<6>) x1x28 + (sc_uint<6>) x1x29 + (sc_uint<6>) x1x30 + (sc_uint<6>) x1x31 + (sc_uint<6>) x1x32 + (sc_uint<6>) x1x33 + (sc_uint<6>) x1x34 + (sc_uint<6>) x1x35 + (sc_uint<6>) x1x36 + (sc_uint<6>) x1x37 + (sc_uint<6>) x1x38 + (sc_uint<6>) x1x39 + (sc_uint<6>) x1x40 + (sc_uint<6>) x1x41 + (sc_uint<6>) x1x42 + (sc_uint<6>) x1x43 + (sc_uint<6>) x1x44 + (sc_uint<6>) x1x45 + (sc_uint<6>) x1x46 + (sc_uint<6>) x1x47 + (sc_uint<6>) x1x48 + (sc_uint<6>) x1x49 + (sc_uint<6>) x1x50 + (sc_uint<6>) x1x51 + (sc_uint<6>) x1x52 + (sc_uint<6>) x1x53 + (sc_uint<6>) x1x54 + (sc_uint<6>) x1x55 + (sc_uint<6>) x1x56 + (sc_uint<6>) x1x57 + (sc_uint<6>) x1x58 + (sc_uint<6>) x1x59 + (sc_uint<6>) x1x60 + (sc_uint<6>) x1x61 + (sc_uint<6>) x1x62;
	P2 = (sc_uint<6>) ~x0x2 + (sc_uint<6>) ~x1x2 + (sc_uint<6>) x2x3 + (sc_uint<6>) x2x4 + (sc_uint<6>) x2x5 + (sc_uint<6>) x2x6 + (sc_uint<6>) x2x7 + (sc_uint<6>) x2x8 + (sc_uint<6>) x2x9 + (sc_uint<6>) x2x10 + (sc_uint<6>) x2x11 + (sc_uint<6>) x2x12 + (sc_uint<6>) x2x13 + (sc_uint<6>) x2x14 + (sc_uint<6>) x2x15 + (sc_uint<6>) x2x16 + (sc_uint<6>) x2x17 + (sc_uint<6>) x2x18 + (sc_uint<6>) x2x19 + (sc_uint<6>) x2x20 + (sc_uint<6>) x2x21 + (sc_uint<6>) x2x22 + (sc_uint<6>) x2x23 + (sc_uint<6>) x2x24 + (sc_uint<6>) x2x25 + (sc_uint<6>) x2x26 + (sc_uint<6>) x2x27 + (sc_uint<6>) x2x28 + (sc_uint<6>) x2x29 + (sc_uint<6>) x2x30 + (sc_uint<6>) x2x31 + (sc_uint<6>) x2x32 + (sc_uint<6>) x2x33 + (sc_uint<6>) x2x34 + (sc_uint<6>) x2x35 + (sc_uint<6>) x2x36 + (sc_uint<6>) x2x37 + (sc_uint<6>) x2x38 + (sc_uint<6>) x2x39 + (sc_uint<6>) x2x40 + (sc_uint<6>) x2x41 + (sc_uint<6>) x2x42 + (sc_uint<6>) x2x43 + (sc_uint<6>) x2x44 + (sc_uint<6>) x2x45 + (sc_uint<6>) x2x46 + (sc_uint<6>) x2x47 + (sc_uint<6>) x2x48 + (sc_uint<6>) x2x49 + (sc_uint<6>) x2x50 + (sc_uint<6>) x2x51 + (sc_uint<6>) x2x52 + (sc_uint<6>) x2x53 + (sc_uint<6>) x2x54 + (sc_uint<6>) x2x55 + (sc_uint<6>) x2x56 + (sc_uint<6>) x2x57 + (sc_uint<6>) x2x58 + (sc_uint<6>) x2x59 + (sc_uint<6>) x2x60 + (sc_uint<6>) x2x61 + (sc_uint<6>) x2x62;
	P3 = (sc_uint<6>) ~x0x3 + (sc_uint<6>) ~x1x3 + (sc_uint<6>) ~x2x3 + (sc_uint<6>) x3x4 + (sc_uint<6>) x3x5 + (sc_uint<6>) x3x6 + (sc_uint<6>) x3x7 + (sc_uint<6>) x3x8 + (sc_uint<6>) x3x9 + (sc_uint<6>) x3x10 + (sc_uint<6>) x3x11 + (sc_uint<6>) x3x12 + (sc_uint<6>) x3x13 + (sc_uint<6>) x3x14 + (sc_uint<6>) x3x15 + (sc_uint<6>) x3x16 + (sc_uint<6>) x3x17 + (sc_uint<6>) x3x18 + (sc_uint<6>) x3x19 + (sc_uint<6>) x3x20 + (sc_uint<6>) x3x21 + (sc_uint<6>) x3x22 + (sc_uint<6>) x3x23 + (sc_uint<6>) x3x24 + (sc_uint<6>) x3x25 + (sc_uint<6>) x3x26 + (sc_uint<6>) x3x27 + (sc_uint<6>) x3x28 + (sc_uint<6>) x3x29 + (sc_uint<6>) x3x30 + (sc_uint<6>) x3x31 + (sc_uint<6>) x3x32 + (sc_uint<6>) x3x33 + (sc_uint<6>) x3x34 + (sc_uint<6>) x3x35 + (sc_uint<6>) x3x36 + (sc_uint<6>) x3x37 + (sc_uint<6>) x3x38 + (sc_uint<6>) x3x39 + (sc_uint<6>) x3x40 + (sc_uint<6>) x3x41 + (sc_uint<6>) x3x42 + (sc_uint<6>) x3x43 + (sc_uint<6>) x3x44 + (sc_uint<6>) x3x45 + (sc_uint<6>) x3x46 + (sc_uint<6>) x3x47 + (sc_uint<6>) x3x48 + (sc_uint<6>) x3x49 + (sc_uint<6>) x3x50 + (sc_uint<6>) x3x51 + (sc_uint<6>) x3x52 + (sc_uint<6>) x3x53 + (sc_uint<6>) x3x54 + (sc_uint<6>) x3x55 + (sc_uint<6>) x3x56 + (sc_uint<6>) x3x57 + (sc_uint<6>) x3x58 + (sc_uint<6>) x3x59 + (sc_uint<6>) x3x60 + (sc_uint<6>) x3x61 + (sc_uint<6>) x3x62;
	P4 = (sc_uint<6>) ~x0x4 + (sc_uint<6>) ~x1x4 + (sc_uint<6>) ~x2x4 + (sc_uint<6>) ~x3x4 + (sc_uint<6>) x4x5 + (sc_uint<6>) x4x6 + (sc_uint<6>) x4x7 + (sc_uint<6>) x4x8 + (sc_uint<6>) x4x9 + (sc_uint<6>) x4x10 + (sc_uint<6>) x4x11 + (sc_uint<6>) x4x12 + (sc_uint<6>) x4x13 + (sc_uint<6>) x4x14 + (sc_uint<6>) x4x15 + (sc_uint<6>) x4x16 + (sc_uint<6>) x4x17 + (sc_uint<6>) x4x18 + (sc_uint<6>) x4x19 + (sc_uint<6>) x4x20 + (sc_uint<6>) x4x21 + (sc_uint<6>) x4x22 + (sc_uint<6>) x4x23 + (sc_uint<6>) x4x24 + (sc_uint<6>) x4x25 + (sc_uint<6>) x4x26 + (sc_uint<6>) x4x27 + (sc_uint<6>) x4x28 + (sc_uint<6>) x4x29 + (sc_uint<6>) x4x30 + (sc_uint<6>) x4x31 + (sc_uint<6>) x4x32 + (sc_uint<6>) x4x33 + (sc_uint<6>) x4x34 + (sc_uint<6>) x4x35 + (sc_uint<6>) x4x36 + (sc_uint<6>) x4x37 + (sc_uint<6>) x4x38 + (sc_uint<6>) x4x39 + (sc_uint<6>) x4x40 + (sc_uint<6>) x4x41 + (sc_uint<6>) x4x42 + (sc_uint<6>) x4x43 + (sc_uint<6>) x4x44 + (sc_uint<6>) x4x45 + (sc_uint<6>) x4x46 + (sc_uint<6>) x4x47 + (sc_uint<6>) x4x48 + (sc_uint<6>) x4x49 + (sc_uint<6>) x4x50 + (sc_uint<6>) x4x51 + (sc_uint<6>) x4x52 + (sc_uint<6>) x4x53 + (sc_uint<6>) x4x54 + (sc_uint<6>) x4x55 + (sc_uint<6>) x4x56 + (sc_uint<6>) x4x57 + (sc_uint<6>) x4x58 + (sc_uint<6>) x4x59 + (sc_uint<6>) x4x60 + (sc_uint<6>) x4x61 + (sc_uint<6>) x4x62;
	P5 = (sc_uint<6>) ~x0x5 + (sc_uint<6>) ~x1x5 + (sc_uint<6>) ~x2x5 + (sc_uint<6>) ~x3x5 + (sc_uint<6>) ~x4x5 + (sc_uint<6>) x5x6 + (sc_uint<6>) x5x7 + (sc_uint<6>) x5x8 + (sc_uint<6>) x5x9 + (sc_uint<6>) x5x10 + (sc_uint<6>) x5x11 + (sc_uint<6>) x5x12 + (sc_uint<6>) x5x13 + (sc_uint<6>) x5x14 + (sc_uint<6>) x5x15 + (sc_uint<6>) x5x16 + (sc_uint<6>) x5x17 + (sc_uint<6>) x5x18 + (sc_uint<6>) x5x19 + (sc_uint<6>) x5x20 + (sc_uint<6>) x5x21 + (sc_uint<6>) x5x22 + (sc_uint<6>) x5x23 + (sc_uint<6>) x5x24 + (sc_uint<6>) x5x25 + (sc_uint<6>) x5x26 + (sc_uint<6>) x5x27 + (sc_uint<6>) x5x28 + (sc_uint<6>) x5x29 + (sc_uint<6>) x5x30 + (sc_uint<6>) x5x31 + (sc_uint<6>) x5x32 + (sc_uint<6>) x5x33 + (sc_uint<6>) x5x34 + (sc_uint<6>) x5x35 + (sc_uint<6>) x5x36 + (sc_uint<6>) x5x37 + (sc_uint<6>) x5x38 + (sc_uint<6>) x5x39 + (sc_uint<6>) x5x40 + (sc_uint<6>) x5x41 + (sc_uint<6>) x5x42 + (sc_uint<6>) x5x43 + (sc_uint<6>) x5x44 + (sc_uint<6>) x5x45 + (sc_uint<6>) x5x46 + (sc_uint<6>) x5x47 + (sc_uint<6>) x5x48 + (sc_uint<6>) x5x49 + (sc_uint<6>) x5x50 + (sc_uint<6>) x5x51 + (sc_uint<6>) x5x52 + (sc_uint<6>) x5x53 + (sc_uint<6>) x5x54 + (sc_uint<6>) x5x55 + (sc_uint<6>) x5x56 + (sc_uint<6>) x5x57 + (sc_uint<6>) x5x58 + (sc_uint<6>) x5x59 + (sc_uint<6>) x5x60 + (sc_uint<6>) x5x61 + (sc_uint<6>) x5x62;
	P6 = (sc_uint<6>) ~x0x6 + (sc_uint<6>) ~x1x6 + (sc_uint<6>) ~x2x6 + (sc_uint<6>) ~x3x6 + (sc_uint<6>) ~x4x6 + (sc_uint<6>) ~x5x6 + (sc_uint<6>) x6x7 + (sc_uint<6>) x6x8 + (sc_uint<6>) x6x9 + (sc_uint<6>) x6x10 + (sc_uint<6>) x6x11 + (sc_uint<6>) x6x12 + (sc_uint<6>) x6x13 + (sc_uint<6>) x6x14 + (sc_uint<6>) x6x15 + (sc_uint<6>) x6x16 + (sc_uint<6>) x6x17 + (sc_uint<6>) x6x18 + (sc_uint<6>) x6x19 + (sc_uint<6>) x6x20 + (sc_uint<6>) x6x21 + (sc_uint<6>) x6x22 + (sc_uint<6>) x6x23 + (sc_uint<6>) x6x24 + (sc_uint<6>) x6x25 + (sc_uint<6>) x6x26 + (sc_uint<6>) x6x27 + (sc_uint<6>) x6x28 + (sc_uint<6>) x6x29 + (sc_uint<6>) x6x30 + (sc_uint<6>) x6x31 + (sc_uint<6>) x6x32 + (sc_uint<6>) x6x33 + (sc_uint<6>) x6x34 + (sc_uint<6>) x6x35 + (sc_uint<6>) x6x36 + (sc_uint<6>) x6x37 + (sc_uint<6>) x6x38 + (sc_uint<6>) x6x39 + (sc_uint<6>) x6x40 + (sc_uint<6>) x6x41 + (sc_uint<6>) x6x42 + (sc_uint<6>) x6x43 + (sc_uint<6>) x6x44 + (sc_uint<6>) x6x45 + (sc_uint<6>) x6x46 + (sc_uint<6>) x6x47 + (sc_uint<6>) x6x48 + (sc_uint<6>) x6x49 + (sc_uint<6>) x6x50 + (sc_uint<6>) x6x51 + (sc_uint<6>) x6x52 + (sc_uint<6>) x6x53 + (sc_uint<6>) x6x54 + (sc_uint<6>) x6x55 + (sc_uint<6>) x6x56 + (sc_uint<6>) x6x57 + (sc_uint<6>) x6x58 + (sc_uint<6>) x6x59 + (sc_uint<6>) x6x60 + (sc_uint<6>) x6x61 + (sc_uint<6>) x6x62;
	P7 = (sc_uint<6>) ~x0x7 + (sc_uint<6>) ~x1x7 + (sc_uint<6>) ~x2x7 + (sc_uint<6>) ~x3x7 + (sc_uint<6>) ~x4x7 + (sc_uint<6>) ~x5x7 + (sc_uint<6>) ~x6x7 + (sc_uint<6>) x7x8 + (sc_uint<6>) x7x9 + (sc_uint<6>) x7x10 + (sc_uint<6>) x7x11 + (sc_uint<6>) x7x12 + (sc_uint<6>) x7x13 + (sc_uint<6>) x7x14 + (sc_uint<6>) x7x15 + (sc_uint<6>) x7x16 + (sc_uint<6>) x7x17 + (sc_uint<6>) x7x18 + (sc_uint<6>) x7x19 + (sc_uint<6>) x7x20 + (sc_uint<6>) x7x21 + (sc_uint<6>) x7x22 + (sc_uint<6>) x7x23 + (sc_uint<6>) x7x24 + (sc_uint<6>) x7x25 + (sc_uint<6>) x7x26 + (sc_uint<6>) x7x27 + (sc_uint<6>) x7x28 + (sc_uint<6>) x7x29 + (sc_uint<6>) x7x30 + (sc_uint<6>) x7x31 + (sc_uint<6>) x7x32 + (sc_uint<6>) x7x33 + (sc_uint<6>) x7x34 + (sc_uint<6>) x7x35 + (sc_uint<6>) x7x36 + (sc_uint<6>) x7x37 + (sc_uint<6>) x7x38 + (sc_uint<6>) x7x39 + (sc_uint<6>) x7x40 + (sc_uint<6>) x7x41 + (sc_uint<6>) x7x42 + (sc_uint<6>) x7x43 + (sc_uint<6>) x7x44 + (sc_uint<6>) x7x45 + (sc_uint<6>) x7x46 + (sc_uint<6>) x7x47 + (sc_uint<6>) x7x48 + (sc_uint<6>) x7x49 + (sc_uint<6>) x7x50 + (sc_uint<6>) x7x51 + (sc_uint<6>) x7x52 + (sc_uint<6>) x7x53 + (sc_uint<6>) x7x54 + (sc_uint<6>) x7x55 + (sc_uint<6>) x7x56 + (sc_uint<6>) x7x57 + (sc_uint<6>) x7x58 + (sc_uint<6>) x7x59 + (sc_uint<6>) x7x60 + (sc_uint<6>) x7x61 + (sc_uint<6>) x7x62;
	P8 = (sc_uint<6>) ~x0x8 + (sc_uint<6>) ~x1x8 + (sc_uint<6>) ~x2x8 + (sc_uint<6>) ~x3x8 + (sc_uint<6>) ~x4x8 + (sc_uint<6>) ~x5x8 + (sc_uint<6>) ~x6x8 + (sc_uint<6>) ~x7x8 + (sc_uint<6>) x8x9 + (sc_uint<6>) x8x10 + (sc_uint<6>) x8x11 + (sc_uint<6>) x8x12 + (sc_uint<6>) x8x13 + (sc_uint<6>) x8x14 + (sc_uint<6>) x8x15 + (sc_uint<6>) x8x16 + (sc_uint<6>) x8x17 + (sc_uint<6>) x8x18 + (sc_uint<6>) x8x19 + (sc_uint<6>) x8x20 + (sc_uint<6>) x8x21 + (sc_uint<6>) x8x22 + (sc_uint<6>) x8x23 + (sc_uint<6>) x8x24 + (sc_uint<6>) x8x25 + (sc_uint<6>) x8x26 + (sc_uint<6>) x8x27 + (sc_uint<6>) x8x28 + (sc_uint<6>) x8x29 + (sc_uint<6>) x8x30 + (sc_uint<6>) x8x31 + (sc_uint<6>) x8x32 + (sc_uint<6>) x8x33 + (sc_uint<6>) x8x34 + (sc_uint<6>) x8x35 + (sc_uint<6>) x8x36 + (sc_uint<6>) x8x37 + (sc_uint<6>) x8x38 + (sc_uint<6>) x8x39 + (sc_uint<6>) x8x40 + (sc_uint<6>) x8x41 + (sc_uint<6>) x8x42 + (sc_uint<6>) x8x43 + (sc_uint<6>) x8x44 + (sc_uint<6>) x8x45 + (sc_uint<6>) x8x46 + (sc_uint<6>) x8x47 + (sc_uint<6>) x8x48 + (sc_uint<6>) x8x49 + (sc_uint<6>) x8x50 + (sc_uint<6>) x8x51 + (sc_uint<6>) x8x52 + (sc_uint<6>) x8x53 + (sc_uint<6>) x8x54 + (sc_uint<6>) x8x55 + (sc_uint<6>) x8x56 + (sc_uint<6>) x8x57 + (sc_uint<6>) x8x58 + (sc_uint<6>) x8x59 + (sc_uint<6>) x8x60 + (sc_uint<6>) x8x61 + (sc_uint<6>) x8x62;
	P9 = (sc_uint<6>) ~x0x9 + (sc_uint<6>) ~x1x9 + (sc_uint<6>) ~x2x9 + (sc_uint<6>) ~x3x9 + (sc_uint<6>) ~x4x9 + (sc_uint<6>) ~x5x9 + (sc_uint<6>) ~x6x9 + (sc_uint<6>) ~x7x9 + (sc_uint<6>) ~x8x9 + (sc_uint<6>) x9x10 + (sc_uint<6>) x9x11 + (sc_uint<6>) x9x12 + (sc_uint<6>) x9x13 + (sc_uint<6>) x9x14 + (sc_uint<6>) x9x15 + (sc_uint<6>) x9x16 + (sc_uint<6>) x9x17 + (sc_uint<6>) x9x18 + (sc_uint<6>) x9x19 + (sc_uint<6>) x9x20 + (sc_uint<6>) x9x21 + (sc_uint<6>) x9x22 + (sc_uint<6>) x9x23 + (sc_uint<6>) x9x24 + (sc_uint<6>) x9x25 + (sc_uint<6>) x9x26 + (sc_uint<6>) x9x27 + (sc_uint<6>) x9x28 + (sc_uint<6>) x9x29 + (sc_uint<6>) x9x30 + (sc_uint<6>) x9x31 + (sc_uint<6>) x9x32 + (sc_uint<6>) x9x33 + (sc_uint<6>) x9x34 + (sc_uint<6>) x9x35 + (sc_uint<6>) x9x36 + (sc_uint<6>) x9x37 + (sc_uint<6>) x9x38 + (sc_uint<6>) x9x39 + (sc_uint<6>) x9x40 + (sc_uint<6>) x9x41 + (sc_uint<6>) x9x42 + (sc_uint<6>) x9x43 + (sc_uint<6>) x9x44 + (sc_uint<6>) x9x45 + (sc_uint<6>) x9x46 + (sc_uint<6>) x9x47 + (sc_uint<6>) x9x48 + (sc_uint<6>) x9x49 + (sc_uint<6>) x9x50 + (sc_uint<6>) x9x51 + (sc_uint<6>) x9x52 + (sc_uint<6>) x9x53 + (sc_uint<6>) x9x54 + (sc_uint<6>) x9x55 + (sc_uint<6>) x9x56 + (sc_uint<6>) x9x57 + (sc_uint<6>) x9x58 + (sc_uint<6>) x9x59 + (sc_uint<6>) x9x60 + (sc_uint<6>) x9x61 + (sc_uint<6>) x9x62;
	P10 = (sc_uint<6>) ~x0x10 + (sc_uint<6>) ~x1x10 + (sc_uint<6>) ~x2x10 + (sc_uint<6>) ~x3x10 + (sc_uint<6>) ~x4x10 + (sc_uint<6>) ~x5x10 + (sc_uint<6>) ~x6x10 + (sc_uint<6>) ~x7x10 + (sc_uint<6>) ~x8x10 + (sc_uint<6>) ~x9x10 + (sc_uint<6>) x10x11 + (sc_uint<6>) x10x12 + (sc_uint<6>) x10x13 + (sc_uint<6>) x10x14 + (sc_uint<6>) x10x15 + (sc_uint<6>) x10x16 + (sc_uint<6>) x10x17 + (sc_uint<6>) x10x18 + (sc_uint<6>) x10x19 + (sc_uint<6>) x10x20 + (sc_uint<6>) x10x21 + (sc_uint<6>) x10x22 + (sc_uint<6>) x10x23 + (sc_uint<6>) x10x24 + (sc_uint<6>) x10x25 + (sc_uint<6>) x10x26 + (sc_uint<6>) x10x27 + (sc_uint<6>) x10x28 + (sc_uint<6>) x10x29 + (sc_uint<6>) x10x30 + (sc_uint<6>) x10x31 + (sc_uint<6>) x10x32 + (sc_uint<6>) x10x33 + (sc_uint<6>) x10x34 + (sc_uint<6>) x10x35 + (sc_uint<6>) x10x36 + (sc_uint<6>) x10x37 + (sc_uint<6>) x10x38 + (sc_uint<6>) x10x39 + (sc_uint<6>) x10x40 + (sc_uint<6>) x10x41 + (sc_uint<6>) x10x42 + (sc_uint<6>) x10x43 + (sc_uint<6>) x10x44 + (sc_uint<6>) x10x45 + (sc_uint<6>) x10x46 + (sc_uint<6>) x10x47 + (sc_uint<6>) x10x48 + (sc_uint<6>) x10x49 + (sc_uint<6>) x10x50 + (sc_uint<6>) x10x51 + (sc_uint<6>) x10x52 + (sc_uint<6>) x10x53 + (sc_uint<6>) x10x54 + (sc_uint<6>) x10x55 + (sc_uint<6>) x10x56 + (sc_uint<6>) x10x57 + (sc_uint<6>) x10x58 + (sc_uint<6>) x10x59 + (sc_uint<6>) x10x60 + (sc_uint<6>) x10x61 + (sc_uint<6>) x10x62;
	P11 = (sc_uint<6>) ~x0x11 + (sc_uint<6>) ~x1x11 + (sc_uint<6>) ~x2x11 + (sc_uint<6>) ~x3x11 + (sc_uint<6>) ~x4x11 + (sc_uint<6>) ~x5x11 + (sc_uint<6>) ~x6x11 + (sc_uint<6>) ~x7x11 + (sc_uint<6>) ~x8x11 + (sc_uint<6>) ~x9x11 + (sc_uint<6>) ~x10x11 + (sc_uint<6>) x11x12 + (sc_uint<6>) x11x13 + (sc_uint<6>) x11x14 + (sc_uint<6>) x11x15 + (sc_uint<6>) x11x16 + (sc_uint<6>) x11x17 + (sc_uint<6>) x11x18 + (sc_uint<6>) x11x19 + (sc_uint<6>) x11x20 + (sc_uint<6>) x11x21 + (sc_uint<6>) x11x22 + (sc_uint<6>) x11x23 + (sc_uint<6>) x11x24 + (sc_uint<6>) x11x25 + (sc_uint<6>) x11x26 + (sc_uint<6>) x11x27 + (sc_uint<6>) x11x28 + (sc_uint<6>) x11x29 + (sc_uint<6>) x11x30 + (sc_uint<6>) x11x31 + (sc_uint<6>) x11x32 + (sc_uint<6>) x11x33 + (sc_uint<6>) x11x34 + (sc_uint<6>) x11x35 + (sc_uint<6>) x11x36 + (sc_uint<6>) x11x37 + (sc_uint<6>) x11x38 + (sc_uint<6>) x11x39 + (sc_uint<6>) x11x40 + (sc_uint<6>) x11x41 + (sc_uint<6>) x11x42 + (sc_uint<6>) x11x43 + (sc_uint<6>) x11x44 + (sc_uint<6>) x11x45 + (sc_uint<6>) x11x46 + (sc_uint<6>) x11x47 + (sc_uint<6>) x11x48 + (sc_uint<6>) x11x49 + (sc_uint<6>) x11x50 + (sc_uint<6>) x11x51 + (sc_uint<6>) x11x52 + (sc_uint<6>) x11x53 + (sc_uint<6>) x11x54 + (sc_uint<6>) x11x55 + (sc_uint<6>) x11x56 + (sc_uint<6>) x11x57 + (sc_uint<6>) x11x58 + (sc_uint<6>) x11x59 + (sc_uint<6>) x11x60 + (sc_uint<6>) x11x61 + (sc_uint<6>) x11x62;
	P12 = (sc_uint<6>) ~x0x12 + (sc_uint<6>) ~x1x12 + (sc_uint<6>) ~x2x12 + (sc_uint<6>) ~x3x12 + (sc_uint<6>) ~x4x12 + (sc_uint<6>) ~x5x12 + (sc_uint<6>) ~x6x12 + (sc_uint<6>) ~x7x12 + (sc_uint<6>) ~x8x12 + (sc_uint<6>) ~x9x12 + (sc_uint<6>) ~x10x12 + (sc_uint<6>) ~x11x12 + (sc_uint<6>) x12x13 + (sc_uint<6>) x12x14 + (sc_uint<6>) x12x15 + (sc_uint<6>) x12x16 + (sc_uint<6>) x12x17 + (sc_uint<6>) x12x18 + (sc_uint<6>) x12x19 + (sc_uint<6>) x12x20 + (sc_uint<6>) x12x21 + (sc_uint<6>) x12x22 + (sc_uint<6>) x12x23 + (sc_uint<6>) x12x24 + (sc_uint<6>) x12x25 + (sc_uint<6>) x12x26 + (sc_uint<6>) x12x27 + (sc_uint<6>) x12x28 + (sc_uint<6>) x12x29 + (sc_uint<6>) x12x30 + (sc_uint<6>) x12x31 + (sc_uint<6>) x12x32 + (sc_uint<6>) x12x33 + (sc_uint<6>) x12x34 + (sc_uint<6>) x12x35 + (sc_uint<6>) x12x36 + (sc_uint<6>) x12x37 + (sc_uint<6>) x12x38 + (sc_uint<6>) x12x39 + (sc_uint<6>) x12x40 + (sc_uint<6>) x12x41 + (sc_uint<6>) x12x42 + (sc_uint<6>) x12x43 + (sc_uint<6>) x12x44 + (sc_uint<6>) x12x45 + (sc_uint<6>) x12x46 + (sc_uint<6>) x12x47 + (sc_uint<6>) x12x48 + (sc_uint<6>) x12x49 + (sc_uint<6>) x12x50 + (sc_uint<6>) x12x51 + (sc_uint<6>) x12x52 + (sc_uint<6>) x12x53 + (sc_uint<6>) x12x54 + (sc_uint<6>) x12x55 + (sc_uint<6>) x12x56 + (sc_uint<6>) x12x57 + (sc_uint<6>) x12x58 + (sc_uint<6>) x12x59 + (sc_uint<6>) x12x60 + (sc_uint<6>) x12x61 + (sc_uint<6>) x12x62;
	P13 = (sc_uint<6>) ~x0x13 + (sc_uint<6>) ~x1x13 + (sc_uint<6>) ~x2x13 + (sc_uint<6>) ~x3x13 + (sc_uint<6>) ~x4x13 + (sc_uint<6>) ~x5x13 + (sc_uint<6>) ~x6x13 + (sc_uint<6>) ~x7x13 + (sc_uint<6>) ~x8x13 + (sc_uint<6>) ~x9x13 + (sc_uint<6>) ~x10x13 + (sc_uint<6>) ~x11x13 + (sc_uint<6>) ~x12x13 + (sc_uint<6>) x13x14 + (sc_uint<6>) x13x15 + (sc_uint<6>) x13x16 + (sc_uint<6>) x13x17 + (sc_uint<6>) x13x18 + (sc_uint<6>) x13x19 + (sc_uint<6>) x13x20 + (sc_uint<6>) x13x21 + (sc_uint<6>) x13x22 + (sc_uint<6>) x13x23 + (sc_uint<6>) x13x24 + (sc_uint<6>) x13x25 + (sc_uint<6>) x13x26 + (sc_uint<6>) x13x27 + (sc_uint<6>) x13x28 + (sc_uint<6>) x13x29 + (sc_uint<6>) x13x30 + (sc_uint<6>) x13x31 + (sc_uint<6>) x13x32 + (sc_uint<6>) x13x33 + (sc_uint<6>) x13x34 + (sc_uint<6>) x13x35 + (sc_uint<6>) x13x36 + (sc_uint<6>) x13x37 + (sc_uint<6>) x13x38 + (sc_uint<6>) x13x39 + (sc_uint<6>) x13x40 + (sc_uint<6>) x13x41 + (sc_uint<6>) x13x42 + (sc_uint<6>) x13x43 + (sc_uint<6>) x13x44 + (sc_uint<6>) x13x45 + (sc_uint<6>) x13x46 + (sc_uint<6>) x13x47 + (sc_uint<6>) x13x48 + (sc_uint<6>) x13x49 + (sc_uint<6>) x13x50 + (sc_uint<6>) x13x51 + (sc_uint<6>) x13x52 + (sc_uint<6>) x13x53 + (sc_uint<6>) x13x54 + (sc_uint<6>) x13x55 + (sc_uint<6>) x13x56 + (sc_uint<6>) x13x57 + (sc_uint<6>) x13x58 + (sc_uint<6>) x13x59 + (sc_uint<6>) x13x60 + (sc_uint<6>) x13x61 + (sc_uint<6>) x13x62;
	P14 = (sc_uint<6>) ~x0x14 + (sc_uint<6>) ~x1x14 + (sc_uint<6>) ~x2x14 + (sc_uint<6>) ~x3x14 + (sc_uint<6>) ~x4x14 + (sc_uint<6>) ~x5x14 + (sc_uint<6>) ~x6x14 + (sc_uint<6>) ~x7x14 + (sc_uint<6>) ~x8x14 + (sc_uint<6>) ~x9x14 + (sc_uint<6>) ~x10x14 + (sc_uint<6>) ~x11x14 + (sc_uint<6>) ~x12x14 + (sc_uint<6>) ~x13x14 + (sc_uint<6>) x14x15 + (sc_uint<6>) x14x16 + (sc_uint<6>) x14x17 + (sc_uint<6>) x14x18 + (sc_uint<6>) x14x19 + (sc_uint<6>) x14x20 + (sc_uint<6>) x14x21 + (sc_uint<6>) x14x22 + (sc_uint<6>) x14x23 + (sc_uint<6>) x14x24 + (sc_uint<6>) x14x25 + (sc_uint<6>) x14x26 + (sc_uint<6>) x14x27 + (sc_uint<6>) x14x28 + (sc_uint<6>) x14x29 + (sc_uint<6>) x14x30 + (sc_uint<6>) x14x31 + (sc_uint<6>) x14x32 + (sc_uint<6>) x14x33 + (sc_uint<6>) x14x34 + (sc_uint<6>) x14x35 + (sc_uint<6>) x14x36 + (sc_uint<6>) x14x37 + (sc_uint<6>) x14x38 + (sc_uint<6>) x14x39 + (sc_uint<6>) x14x40 + (sc_uint<6>) x14x41 + (sc_uint<6>) x14x42 + (sc_uint<6>) x14x43 + (sc_uint<6>) x14x44 + (sc_uint<6>) x14x45 + (sc_uint<6>) x14x46 + (sc_uint<6>) x14x47 + (sc_uint<6>) x14x48 + (sc_uint<6>) x14x49 + (sc_uint<6>) x14x50 + (sc_uint<6>) x14x51 + (sc_uint<6>) x14x52 + (sc_uint<6>) x14x53 + (sc_uint<6>) x14x54 + (sc_uint<6>) x14x55 + (sc_uint<6>) x14x56 + (sc_uint<6>) x14x57 + (sc_uint<6>) x14x58 + (sc_uint<6>) x14x59 + (sc_uint<6>) x14x60 + (sc_uint<6>) x14x61 + (sc_uint<6>) x14x62;
	P15 = (sc_uint<6>) ~x0x15 + (sc_uint<6>) ~x1x15 + (sc_uint<6>) ~x2x15 + (sc_uint<6>) ~x3x15 + (sc_uint<6>) ~x4x15 + (sc_uint<6>) ~x5x15 + (sc_uint<6>) ~x6x15 + (sc_uint<6>) ~x7x15 + (sc_uint<6>) ~x8x15 + (sc_uint<6>) ~x9x15 + (sc_uint<6>) ~x10x15 + (sc_uint<6>) ~x11x15 + (sc_uint<6>) ~x12x15 + (sc_uint<6>) ~x13x15 + (sc_uint<6>) ~x14x15 + (sc_uint<6>) x15x16 + (sc_uint<6>) x15x17 + (sc_uint<6>) x15x18 + (sc_uint<6>) x15x19 + (sc_uint<6>) x15x20 + (sc_uint<6>) x15x21 + (sc_uint<6>) x15x22 + (sc_uint<6>) x15x23 + (sc_uint<6>) x15x24 + (sc_uint<6>) x15x25 + (sc_uint<6>) x15x26 + (sc_uint<6>) x15x27 + (sc_uint<6>) x15x28 + (sc_uint<6>) x15x29 + (sc_uint<6>) x15x30 + (sc_uint<6>) x15x31 + (sc_uint<6>) x15x32 + (sc_uint<6>) x15x33 + (sc_uint<6>) x15x34 + (sc_uint<6>) x15x35 + (sc_uint<6>) x15x36 + (sc_uint<6>) x15x37 + (sc_uint<6>) x15x38 + (sc_uint<6>) x15x39 + (sc_uint<6>) x15x40 + (sc_uint<6>) x15x41 + (sc_uint<6>) x15x42 + (sc_uint<6>) x15x43 + (sc_uint<6>) x15x44 + (sc_uint<6>) x15x45 + (sc_uint<6>) x15x46 + (sc_uint<6>) x15x47 + (sc_uint<6>) x15x48 + (sc_uint<6>) x15x49 + (sc_uint<6>) x15x50 + (sc_uint<6>) x15x51 + (sc_uint<6>) x15x52 + (sc_uint<6>) x15x53 + (sc_uint<6>) x15x54 + (sc_uint<6>) x15x55 + (sc_uint<6>) x15x56 + (sc_uint<6>) x15x57 + (sc_uint<6>) x15x58 + (sc_uint<6>) x15x59 + (sc_uint<6>) x15x60 + (sc_uint<6>) x15x61 + (sc_uint<6>) x15x62;
	P16 = (sc_uint<6>) ~x0x16 + (sc_uint<6>) ~x1x16 + (sc_uint<6>) ~x2x16 + (sc_uint<6>) ~x3x16 + (sc_uint<6>) ~x4x16 + (sc_uint<6>) ~x5x16 + (sc_uint<6>) ~x6x16 + (sc_uint<6>) ~x7x16 + (sc_uint<6>) ~x8x16 + (sc_uint<6>) ~x9x16 + (sc_uint<6>) ~x10x16 + (sc_uint<6>) ~x11x16 + (sc_uint<6>) ~x12x16 + (sc_uint<6>) ~x13x16 + (sc_uint<6>) ~x14x16 + (sc_uint<6>) ~x15x16 + (sc_uint<6>) x16x17 + (sc_uint<6>) x16x18 + (sc_uint<6>) x16x19 + (sc_uint<6>) x16x20 + (sc_uint<6>) x16x21 + (sc_uint<6>) x16x22 + (sc_uint<6>) x16x23 + (sc_uint<6>) x16x24 + (sc_uint<6>) x16x25 + (sc_uint<6>) x16x26 + (sc_uint<6>) x16x27 + (sc_uint<6>) x16x28 + (sc_uint<6>) x16x29 + (sc_uint<6>) x16x30 + (sc_uint<6>) x16x31 + (sc_uint<6>) x16x32 + (sc_uint<6>) x16x33 + (sc_uint<6>) x16x34 + (sc_uint<6>) x16x35 + (sc_uint<6>) x16x36 + (sc_uint<6>) x16x37 + (sc_uint<6>) x16x38 + (sc_uint<6>) x16x39 + (sc_uint<6>) x16x40 + (sc_uint<6>) x16x41 + (sc_uint<6>) x16x42 + (sc_uint<6>) x16x43 + (sc_uint<6>) x16x44 + (sc_uint<6>) x16x45 + (sc_uint<6>) x16x46 + (sc_uint<6>) x16x47 + (sc_uint<6>) x16x48 + (sc_uint<6>) x16x49 + (sc_uint<6>) x16x50 + (sc_uint<6>) x16x51 + (sc_uint<6>) x16x52 + (sc_uint<6>) x16x53 + (sc_uint<6>) x16x54 + (sc_uint<6>) x16x55 + (sc_uint<6>) x16x56 + (sc_uint<6>) x16x57 + (sc_uint<6>) x16x58 + (sc_uint<6>) x16x59 + (sc_uint<6>) x16x60 + (sc_uint<6>) x16x61 + (sc_uint<6>) x16x62;
	P17 = (sc_uint<6>) ~x0x17 + (sc_uint<6>) ~x1x17 + (sc_uint<6>) ~x2x17 + (sc_uint<6>) ~x3x17 + (sc_uint<6>) ~x4x17 + (sc_uint<6>) ~x5x17 + (sc_uint<6>) ~x6x17 + (sc_uint<6>) ~x7x17 + (sc_uint<6>) ~x8x17 + (sc_uint<6>) ~x9x17 + (sc_uint<6>) ~x10x17 + (sc_uint<6>) ~x11x17 + (sc_uint<6>) ~x12x17 + (sc_uint<6>) ~x13x17 + (sc_uint<6>) ~x14x17 + (sc_uint<6>) ~x15x17 + (sc_uint<6>) ~x16x17 + (sc_uint<6>) x17x18 + (sc_uint<6>) x17x19 + (sc_uint<6>) x17x20 + (sc_uint<6>) x17x21 + (sc_uint<6>) x17x22 + (sc_uint<6>) x17x23 + (sc_uint<6>) x17x24 + (sc_uint<6>) x17x25 + (sc_uint<6>) x17x26 + (sc_uint<6>) x17x27 + (sc_uint<6>) x17x28 + (sc_uint<6>) x17x29 + (sc_uint<6>) x17x30 + (sc_uint<6>) x17x31 + (sc_uint<6>) x17x32 + (sc_uint<6>) x17x33 + (sc_uint<6>) x17x34 + (sc_uint<6>) x17x35 + (sc_uint<6>) x17x36 + (sc_uint<6>) x17x37 + (sc_uint<6>) x17x38 + (sc_uint<6>) x17x39 + (sc_uint<6>) x17x40 + (sc_uint<6>) x17x41 + (sc_uint<6>) x17x42 + (sc_uint<6>) x17x43 + (sc_uint<6>) x17x44 + (sc_uint<6>) x17x45 + (sc_uint<6>) x17x46 + (sc_uint<6>) x17x47 + (sc_uint<6>) x17x48 + (sc_uint<6>) x17x49 + (sc_uint<6>) x17x50 + (sc_uint<6>) x17x51 + (sc_uint<6>) x17x52 + (sc_uint<6>) x17x53 + (sc_uint<6>) x17x54 + (sc_uint<6>) x17x55 + (sc_uint<6>) x17x56 + (sc_uint<6>) x17x57 + (sc_uint<6>) x17x58 + (sc_uint<6>) x17x59 + (sc_uint<6>) x17x60 + (sc_uint<6>) x17x61 + (sc_uint<6>) x17x62;
	P18 = (sc_uint<6>) ~x0x18 + (sc_uint<6>) ~x1x18 + (sc_uint<6>) ~x2x18 + (sc_uint<6>) ~x3x18 + (sc_uint<6>) ~x4x18 + (sc_uint<6>) ~x5x18 + (sc_uint<6>) ~x6x18 + (sc_uint<6>) ~x7x18 + (sc_uint<6>) ~x8x18 + (sc_uint<6>) ~x9x18 + (sc_uint<6>) ~x10x18 + (sc_uint<6>) ~x11x18 + (sc_uint<6>) ~x12x18 + (sc_uint<6>) ~x13x18 + (sc_uint<6>) ~x14x18 + (sc_uint<6>) ~x15x18 + (sc_uint<6>) ~x16x18 + (sc_uint<6>) ~x17x18 + (sc_uint<6>) x18x19 + (sc_uint<6>) x18x20 + (sc_uint<6>) x18x21 + (sc_uint<6>) x18x22 + (sc_uint<6>) x18x23 + (sc_uint<6>) x18x24 + (sc_uint<6>) x18x25 + (sc_uint<6>) x18x26 + (sc_uint<6>) x18x27 + (sc_uint<6>) x18x28 + (sc_uint<6>) x18x29 + (sc_uint<6>) x18x30 + (sc_uint<6>) x18x31 + (sc_uint<6>) x18x32 + (sc_uint<6>) x18x33 + (sc_uint<6>) x18x34 + (sc_uint<6>) x18x35 + (sc_uint<6>) x18x36 + (sc_uint<6>) x18x37 + (sc_uint<6>) x18x38 + (sc_uint<6>) x18x39 + (sc_uint<6>) x18x40 + (sc_uint<6>) x18x41 + (sc_uint<6>) x18x42 + (sc_uint<6>) x18x43 + (sc_uint<6>) x18x44 + (sc_uint<6>) x18x45 + (sc_uint<6>) x18x46 + (sc_uint<6>) x18x47 + (sc_uint<6>) x18x48 + (sc_uint<6>) x18x49 + (sc_uint<6>) x18x50 + (sc_uint<6>) x18x51 + (sc_uint<6>) x18x52 + (sc_uint<6>) x18x53 + (sc_uint<6>) x18x54 + (sc_uint<6>) x18x55 + (sc_uint<6>) x18x56 + (sc_uint<6>) x18x57 + (sc_uint<6>) x18x58 + (sc_uint<6>) x18x59 + (sc_uint<6>) x18x60 + (sc_uint<6>) x18x61 + (sc_uint<6>) x18x62;
	P19 = (sc_uint<6>) ~x0x19 + (sc_uint<6>) ~x1x19 + (sc_uint<6>) ~x2x19 + (sc_uint<6>) ~x3x19 + (sc_uint<6>) ~x4x19 + (sc_uint<6>) ~x5x19 + (sc_uint<6>) ~x6x19 + (sc_uint<6>) ~x7x19 + (sc_uint<6>) ~x8x19 + (sc_uint<6>) ~x9x19 + (sc_uint<6>) ~x10x19 + (sc_uint<6>) ~x11x19 + (sc_uint<6>) ~x12x19 + (sc_uint<6>) ~x13x19 + (sc_uint<6>) ~x14x19 + (sc_uint<6>) ~x15x19 + (sc_uint<6>) ~x16x19 + (sc_uint<6>) ~x17x19 + (sc_uint<6>) ~x18x19 + (sc_uint<6>) x19x20 + (sc_uint<6>) x19x21 + (sc_uint<6>) x19x22 + (sc_uint<6>) x19x23 + (sc_uint<6>) x19x24 + (sc_uint<6>) x19x25 + (sc_uint<6>) x19x26 + (sc_uint<6>) x19x27 + (sc_uint<6>) x19x28 + (sc_uint<6>) x19x29 + (sc_uint<6>) x19x30 + (sc_uint<6>) x19x31 + (sc_uint<6>) x19x32 + (sc_uint<6>) x19x33 + (sc_uint<6>) x19x34 + (sc_uint<6>) x19x35 + (sc_uint<6>) x19x36 + (sc_uint<6>) x19x37 + (sc_uint<6>) x19x38 + (sc_uint<6>) x19x39 + (sc_uint<6>) x19x40 + (sc_uint<6>) x19x41 + (sc_uint<6>) x19x42 + (sc_uint<6>) x19x43 + (sc_uint<6>) x19x44 + (sc_uint<6>) x19x45 + (sc_uint<6>) x19x46 + (sc_uint<6>) x19x47 + (sc_uint<6>) x19x48 + (sc_uint<6>) x19x49 + (sc_uint<6>) x19x50 + (sc_uint<6>) x19x51 + (sc_uint<6>) x19x52 + (sc_uint<6>) x19x53 + (sc_uint<6>) x19x54 + (sc_uint<6>) x19x55 + (sc_uint<6>) x19x56 + (sc_uint<6>) x19x57 + (sc_uint<6>) x19x58 + (sc_uint<6>) x19x59 + (sc_uint<6>) x19x60 + (sc_uint<6>) x19x61 + (sc_uint<6>) x19x62;
	P20 = (sc_uint<6>) ~x0x20 + (sc_uint<6>) ~x1x20 + (sc_uint<6>) ~x2x20 + (sc_uint<6>) ~x3x20 + (sc_uint<6>) ~x4x20 + (sc_uint<6>) ~x5x20 + (sc_uint<6>) ~x6x20 + (sc_uint<6>) ~x7x20 + (sc_uint<6>) ~x8x20 + (sc_uint<6>) ~x9x20 + (sc_uint<6>) ~x10x20 + (sc_uint<6>) ~x11x20 + (sc_uint<6>) ~x12x20 + (sc_uint<6>) ~x13x20 + (sc_uint<6>) ~x14x20 + (sc_uint<6>) ~x15x20 + (sc_uint<6>) ~x16x20 + (sc_uint<6>) ~x17x20 + (sc_uint<6>) ~x18x20 + (sc_uint<6>) ~x19x20 + (sc_uint<6>) x20x21 + (sc_uint<6>) x20x22 + (sc_uint<6>) x20x23 + (sc_uint<6>) x20x24 + (sc_uint<6>) x20x25 + (sc_uint<6>) x20x26 + (sc_uint<6>) x20x27 + (sc_uint<6>) x20x28 + (sc_uint<6>) x20x29 + (sc_uint<6>) x20x30 + (sc_uint<6>) x20x31 + (sc_uint<6>) x20x32 + (sc_uint<6>) x20x33 + (sc_uint<6>) x20x34 + (sc_uint<6>) x20x35 + (sc_uint<6>) x20x36 + (sc_uint<6>) x20x37 + (sc_uint<6>) x20x38 + (sc_uint<6>) x20x39 + (sc_uint<6>) x20x40 + (sc_uint<6>) x20x41 + (sc_uint<6>) x20x42 + (sc_uint<6>) x20x43 + (sc_uint<6>) x20x44 + (sc_uint<6>) x20x45 + (sc_uint<6>) x20x46 + (sc_uint<6>) x20x47 + (sc_uint<6>) x20x48 + (sc_uint<6>) x20x49 + (sc_uint<6>) x20x50 + (sc_uint<6>) x20x51 + (sc_uint<6>) x20x52 + (sc_uint<6>) x20x53 + (sc_uint<6>) x20x54 + (sc_uint<6>) x20x55 + (sc_uint<6>) x20x56 + (sc_uint<6>) x20x57 + (sc_uint<6>) x20x58 + (sc_uint<6>) x20x59 + (sc_uint<6>) x20x60 + (sc_uint<6>) x20x61 + (sc_uint<6>) x20x62;
	P21 = (sc_uint<6>) ~x0x21 + (sc_uint<6>) ~x1x21 + (sc_uint<6>) ~x2x21 + (sc_uint<6>) ~x3x21 + (sc_uint<6>) ~x4x21 + (sc_uint<6>) ~x5x21 + (sc_uint<6>) ~x6x21 + (sc_uint<6>) ~x7x21 + (sc_uint<6>) ~x8x21 + (sc_uint<6>) ~x9x21 + (sc_uint<6>) ~x10x21 + (sc_uint<6>) ~x11x21 + (sc_uint<6>) ~x12x21 + (sc_uint<6>) ~x13x21 + (sc_uint<6>) ~x14x21 + (sc_uint<6>) ~x15x21 + (sc_uint<6>) ~x16x21 + (sc_uint<6>) ~x17x21 + (sc_uint<6>) ~x18x21 + (sc_uint<6>) ~x19x21 + (sc_uint<6>) ~x20x21 + (sc_uint<6>) x21x22 + (sc_uint<6>) x21x23 + (sc_uint<6>) x21x24 + (sc_uint<6>) x21x25 + (sc_uint<6>) x21x26 + (sc_uint<6>) x21x27 + (sc_uint<6>) x21x28 + (sc_uint<6>) x21x29 + (sc_uint<6>) x21x30 + (sc_uint<6>) x21x31 + (sc_uint<6>) x21x32 + (sc_uint<6>) x21x33 + (sc_uint<6>) x21x34 + (sc_uint<6>) x21x35 + (sc_uint<6>) x21x36 + (sc_uint<6>) x21x37 + (sc_uint<6>) x21x38 + (sc_uint<6>) x21x39 + (sc_uint<6>) x21x40 + (sc_uint<6>) x21x41 + (sc_uint<6>) x21x42 + (sc_uint<6>) x21x43 + (sc_uint<6>) x21x44 + (sc_uint<6>) x21x45 + (sc_uint<6>) x21x46 + (sc_uint<6>) x21x47 + (sc_uint<6>) x21x48 + (sc_uint<6>) x21x49 + (sc_uint<6>) x21x50 + (sc_uint<6>) x21x51 + (sc_uint<6>) x21x52 + (sc_uint<6>) x21x53 + (sc_uint<6>) x21x54 + (sc_uint<6>) x21x55 + (sc_uint<6>) x21x56 + (sc_uint<6>) x21x57 + (sc_uint<6>) x21x58 + (sc_uint<6>) x21x59 + (sc_uint<6>) x21x60 + (sc_uint<6>) x21x61 + (sc_uint<6>) x21x62;
	P22 = (sc_uint<6>) ~x0x22 + (sc_uint<6>) ~x1x22 + (sc_uint<6>) ~x2x22 + (sc_uint<6>) ~x3x22 + (sc_uint<6>) ~x4x22 + (sc_uint<6>) ~x5x22 + (sc_uint<6>) ~x6x22 + (sc_uint<6>) ~x7x22 + (sc_uint<6>) ~x8x22 + (sc_uint<6>) ~x9x22 + (sc_uint<6>) ~x10x22 + (sc_uint<6>) ~x11x22 + (sc_uint<6>) ~x12x22 + (sc_uint<6>) ~x13x22 + (sc_uint<6>) ~x14x22 + (sc_uint<6>) ~x15x22 + (sc_uint<6>) ~x16x22 + (sc_uint<6>) ~x17x22 + (sc_uint<6>) ~x18x22 + (sc_uint<6>) ~x19x22 + (sc_uint<6>) ~x20x22 + (sc_uint<6>) ~x21x22 + (sc_uint<6>) x22x23 + (sc_uint<6>) x22x24 + (sc_uint<6>) x22x25 + (sc_uint<6>) x22x26 + (sc_uint<6>) x22x27 + (sc_uint<6>) x22x28 + (sc_uint<6>) x22x29 + (sc_uint<6>) x22x30 + (sc_uint<6>) x22x31 + (sc_uint<6>) x22x32 + (sc_uint<6>) x22x33 + (sc_uint<6>) x22x34 + (sc_uint<6>) x22x35 + (sc_uint<6>) x22x36 + (sc_uint<6>) x22x37 + (sc_uint<6>) x22x38 + (sc_uint<6>) x22x39 + (sc_uint<6>) x22x40 + (sc_uint<6>) x22x41 + (sc_uint<6>) x22x42 + (sc_uint<6>) x22x43 + (sc_uint<6>) x22x44 + (sc_uint<6>) x22x45 + (sc_uint<6>) x22x46 + (sc_uint<6>) x22x47 + (sc_uint<6>) x22x48 + (sc_uint<6>) x22x49 + (sc_uint<6>) x22x50 + (sc_uint<6>) x22x51 + (sc_uint<6>) x22x52 + (sc_uint<6>) x22x53 + (sc_uint<6>) x22x54 + (sc_uint<6>) x22x55 + (sc_uint<6>) x22x56 + (sc_uint<6>) x22x57 + (sc_uint<6>) x22x58 + (sc_uint<6>) x22x59 + (sc_uint<6>) x22x60 + (sc_uint<6>) x22x61 + (sc_uint<6>) x22x62;
	P23 = (sc_uint<6>) ~x0x23 + (sc_uint<6>) ~x1x23 + (sc_uint<6>) ~x2x23 + (sc_uint<6>) ~x3x23 + (sc_uint<6>) ~x4x23 + (sc_uint<6>) ~x5x23 + (sc_uint<6>) ~x6x23 + (sc_uint<6>) ~x7x23 + (sc_uint<6>) ~x8x23 + (sc_uint<6>) ~x9x23 + (sc_uint<6>) ~x10x23 + (sc_uint<6>) ~x11x23 + (sc_uint<6>) ~x12x23 + (sc_uint<6>) ~x13x23 + (sc_uint<6>) ~x14x23 + (sc_uint<6>) ~x15x23 + (sc_uint<6>) ~x16x23 + (sc_uint<6>) ~x17x23 + (sc_uint<6>) ~x18x23 + (sc_uint<6>) ~x19x23 + (sc_uint<6>) ~x20x23 + (sc_uint<6>) ~x21x23 + (sc_uint<6>) ~x22x23 + (sc_uint<6>) x23x24 + (sc_uint<6>) x23x25 + (sc_uint<6>) x23x26 + (sc_uint<6>) x23x27 + (sc_uint<6>) x23x28 + (sc_uint<6>) x23x29 + (sc_uint<6>) x23x30 + (sc_uint<6>) x23x31 + (sc_uint<6>) x23x32 + (sc_uint<6>) x23x33 + (sc_uint<6>) x23x34 + (sc_uint<6>) x23x35 + (sc_uint<6>) x23x36 + (sc_uint<6>) x23x37 + (sc_uint<6>) x23x38 + (sc_uint<6>) x23x39 + (sc_uint<6>) x23x40 + (sc_uint<6>) x23x41 + (sc_uint<6>) x23x42 + (sc_uint<6>) x23x43 + (sc_uint<6>) x23x44 + (sc_uint<6>) x23x45 + (sc_uint<6>) x23x46 + (sc_uint<6>) x23x47 + (sc_uint<6>) x23x48 + (sc_uint<6>) x23x49 + (sc_uint<6>) x23x50 + (sc_uint<6>) x23x51 + (sc_uint<6>) x23x52 + (sc_uint<6>) x23x53 + (sc_uint<6>) x23x54 + (sc_uint<6>) x23x55 + (sc_uint<6>) x23x56 + (sc_uint<6>) x23x57 + (sc_uint<6>) x23x58 + (sc_uint<6>) x23x59 + (sc_uint<6>) x23x60 + (sc_uint<6>) x23x61 + (sc_uint<6>) x23x62;
	P24 = (sc_uint<6>) ~x0x24 + (sc_uint<6>) ~x1x24 + (sc_uint<6>) ~x2x24 + (sc_uint<6>) ~x3x24 + (sc_uint<6>) ~x4x24 + (sc_uint<6>) ~x5x24 + (sc_uint<6>) ~x6x24 + (sc_uint<6>) ~x7x24 + (sc_uint<6>) ~x8x24 + (sc_uint<6>) ~x9x24 + (sc_uint<6>) ~x10x24 + (sc_uint<6>) ~x11x24 + (sc_uint<6>) ~x12x24 + (sc_uint<6>) ~x13x24 + (sc_uint<6>) ~x14x24 + (sc_uint<6>) ~x15x24 + (sc_uint<6>) ~x16x24 + (sc_uint<6>) ~x17x24 + (sc_uint<6>) ~x18x24 + (sc_uint<6>) ~x19x24 + (sc_uint<6>) ~x20x24 + (sc_uint<6>) ~x21x24 + (sc_uint<6>) ~x22x24 + (sc_uint<6>) ~x23x24 + (sc_uint<6>) x24x25 + (sc_uint<6>) x24x26 + (sc_uint<6>) x24x27 + (sc_uint<6>) x24x28 + (sc_uint<6>) x24x29 + (sc_uint<6>) x24x30 + (sc_uint<6>) x24x31 + (sc_uint<6>) x24x32 + (sc_uint<6>) x24x33 + (sc_uint<6>) x24x34 + (sc_uint<6>) x24x35 + (sc_uint<6>) x24x36 + (sc_uint<6>) x24x37 + (sc_uint<6>) x24x38 + (sc_uint<6>) x24x39 + (sc_uint<6>) x24x40 + (sc_uint<6>) x24x41 + (sc_uint<6>) x24x42 + (sc_uint<6>) x24x43 + (sc_uint<6>) x24x44 + (sc_uint<6>) x24x45 + (sc_uint<6>) x24x46 + (sc_uint<6>) x24x47 + (sc_uint<6>) x24x48 + (sc_uint<6>) x24x49 + (sc_uint<6>) x24x50 + (sc_uint<6>) x24x51 + (sc_uint<6>) x24x52 + (sc_uint<6>) x24x53 + (sc_uint<6>) x24x54 + (sc_uint<6>) x24x55 + (sc_uint<6>) x24x56 + (sc_uint<6>) x24x57 + (sc_uint<6>) x24x58 + (sc_uint<6>) x24x59 + (sc_uint<6>) x24x60 + (sc_uint<6>) x24x61 + (sc_uint<6>) x24x62;
	P25 = (sc_uint<6>) ~x0x25 + (sc_uint<6>) ~x1x25 + (sc_uint<6>) ~x2x25 + (sc_uint<6>) ~x3x25 + (sc_uint<6>) ~x4x25 + (sc_uint<6>) ~x5x25 + (sc_uint<6>) ~x6x25 + (sc_uint<6>) ~x7x25 + (sc_uint<6>) ~x8x25 + (sc_uint<6>) ~x9x25 + (sc_uint<6>) ~x10x25 + (sc_uint<6>) ~x11x25 + (sc_uint<6>) ~x12x25 + (sc_uint<6>) ~x13x25 + (sc_uint<6>) ~x14x25 + (sc_uint<6>) ~x15x25 + (sc_uint<6>) ~x16x25 + (sc_uint<6>) ~x17x25 + (sc_uint<6>) ~x18x25 + (sc_uint<6>) ~x19x25 + (sc_uint<6>) ~x20x25 + (sc_uint<6>) ~x21x25 + (sc_uint<6>) ~x22x25 + (sc_uint<6>) ~x23x25 + (sc_uint<6>) ~x24x25 + (sc_uint<6>) x25x26 + (sc_uint<6>) x25x27 + (sc_uint<6>) x25x28 + (sc_uint<6>) x25x29 + (sc_uint<6>) x25x30 + (sc_uint<6>) x25x31 + (sc_uint<6>) x25x32 + (sc_uint<6>) x25x33 + (sc_uint<6>) x25x34 + (sc_uint<6>) x25x35 + (sc_uint<6>) x25x36 + (sc_uint<6>) x25x37 + (sc_uint<6>) x25x38 + (sc_uint<6>) x25x39 + (sc_uint<6>) x25x40 + (sc_uint<6>) x25x41 + (sc_uint<6>) x25x42 + (sc_uint<6>) x25x43 + (sc_uint<6>) x25x44 + (sc_uint<6>) x25x45 + (sc_uint<6>) x25x46 + (sc_uint<6>) x25x47 + (sc_uint<6>) x25x48 + (sc_uint<6>) x25x49 + (sc_uint<6>) x25x50 + (sc_uint<6>) x25x51 + (sc_uint<6>) x25x52 + (sc_uint<6>) x25x53 + (sc_uint<6>) x25x54 + (sc_uint<6>) x25x55 + (sc_uint<6>) x25x56 + (sc_uint<6>) x25x57 + (sc_uint<6>) x25x58 + (sc_uint<6>) x25x59 + (sc_uint<6>) x25x60 + (sc_uint<6>) x25x61 + (sc_uint<6>) x25x62;
	P26 = (sc_uint<6>) ~x0x26 + (sc_uint<6>) ~x1x26 + (sc_uint<6>) ~x2x26 + (sc_uint<6>) ~x3x26 + (sc_uint<6>) ~x4x26 + (sc_uint<6>) ~x5x26 + (sc_uint<6>) ~x6x26 + (sc_uint<6>) ~x7x26 + (sc_uint<6>) ~x8x26 + (sc_uint<6>) ~x9x26 + (sc_uint<6>) ~x10x26 + (sc_uint<6>) ~x11x26 + (sc_uint<6>) ~x12x26 + (sc_uint<6>) ~x13x26 + (sc_uint<6>) ~x14x26 + (sc_uint<6>) ~x15x26 + (sc_uint<6>) ~x16x26 + (sc_uint<6>) ~x17x26 + (sc_uint<6>) ~x18x26 + (sc_uint<6>) ~x19x26 + (sc_uint<6>) ~x20x26 + (sc_uint<6>) ~x21x26 + (sc_uint<6>) ~x22x26 + (sc_uint<6>) ~x23x26 + (sc_uint<6>) ~x24x26 + (sc_uint<6>) ~x25x26 + (sc_uint<6>) x26x27 + (sc_uint<6>) x26x28 + (sc_uint<6>) x26x29 + (sc_uint<6>) x26x30 + (sc_uint<6>) x26x31 + (sc_uint<6>) x26x32 + (sc_uint<6>) x26x33 + (sc_uint<6>) x26x34 + (sc_uint<6>) x26x35 + (sc_uint<6>) x26x36 + (sc_uint<6>) x26x37 + (sc_uint<6>) x26x38 + (sc_uint<6>) x26x39 + (sc_uint<6>) x26x40 + (sc_uint<6>) x26x41 + (sc_uint<6>) x26x42 + (sc_uint<6>) x26x43 + (sc_uint<6>) x26x44 + (sc_uint<6>) x26x45 + (sc_uint<6>) x26x46 + (sc_uint<6>) x26x47 + (sc_uint<6>) x26x48 + (sc_uint<6>) x26x49 + (sc_uint<6>) x26x50 + (sc_uint<6>) x26x51 + (sc_uint<6>) x26x52 + (sc_uint<6>) x26x53 + (sc_uint<6>) x26x54 + (sc_uint<6>) x26x55 + (sc_uint<6>) x26x56 + (sc_uint<6>) x26x57 + (sc_uint<6>) x26x58 + (sc_uint<6>) x26x59 + (sc_uint<6>) x26x60 + (sc_uint<6>) x26x61 + (sc_uint<6>) x26x62;
	P27 = (sc_uint<6>) ~x0x27 + (sc_uint<6>) ~x1x27 + (sc_uint<6>) ~x2x27 + (sc_uint<6>) ~x3x27 + (sc_uint<6>) ~x4x27 + (sc_uint<6>) ~x5x27 + (sc_uint<6>) ~x6x27 + (sc_uint<6>) ~x7x27 + (sc_uint<6>) ~x8x27 + (sc_uint<6>) ~x9x27 + (sc_uint<6>) ~x10x27 + (sc_uint<6>) ~x11x27 + (sc_uint<6>) ~x12x27 + (sc_uint<6>) ~x13x27 + (sc_uint<6>) ~x14x27 + (sc_uint<6>) ~x15x27 + (sc_uint<6>) ~x16x27 + (sc_uint<6>) ~x17x27 + (sc_uint<6>) ~x18x27 + (sc_uint<6>) ~x19x27 + (sc_uint<6>) ~x20x27 + (sc_uint<6>) ~x21x27 + (sc_uint<6>) ~x22x27 + (sc_uint<6>) ~x23x27 + (sc_uint<6>) ~x24x27 + (sc_uint<6>) ~x25x27 + (sc_uint<6>) ~x26x27 + (sc_uint<6>) x27x28 + (sc_uint<6>) x27x29 + (sc_uint<6>) x27x30 + (sc_uint<6>) x27x31 + (sc_uint<6>) x27x32 + (sc_uint<6>) x27x33 + (sc_uint<6>) x27x34 + (sc_uint<6>) x27x35 + (sc_uint<6>) x27x36 + (sc_uint<6>) x27x37 + (sc_uint<6>) x27x38 + (sc_uint<6>) x27x39 + (sc_uint<6>) x27x40 + (sc_uint<6>) x27x41 + (sc_uint<6>) x27x42 + (sc_uint<6>) x27x43 + (sc_uint<6>) x27x44 + (sc_uint<6>) x27x45 + (sc_uint<6>) x27x46 + (sc_uint<6>) x27x47 + (sc_uint<6>) x27x48 + (sc_uint<6>) x27x49 + (sc_uint<6>) x27x50 + (sc_uint<6>) x27x51 + (sc_uint<6>) x27x52 + (sc_uint<6>) x27x53 + (sc_uint<6>) x27x54 + (sc_uint<6>) x27x55 + (sc_uint<6>) x27x56 + (sc_uint<6>) x27x57 + (sc_uint<6>) x27x58 + (sc_uint<6>) x27x59 + (sc_uint<6>) x27x60 + (sc_uint<6>) x27x61 + (sc_uint<6>) x27x62;
	P28 = (sc_uint<6>) ~x0x28 + (sc_uint<6>) ~x1x28 + (sc_uint<6>) ~x2x28 + (sc_uint<6>) ~x3x28 + (sc_uint<6>) ~x4x28 + (sc_uint<6>) ~x5x28 + (sc_uint<6>) ~x6x28 + (sc_uint<6>) ~x7x28 + (sc_uint<6>) ~x8x28 + (sc_uint<6>) ~x9x28 + (sc_uint<6>) ~x10x28 + (sc_uint<6>) ~x11x28 + (sc_uint<6>) ~x12x28 + (sc_uint<6>) ~x13x28 + (sc_uint<6>) ~x14x28 + (sc_uint<6>) ~x15x28 + (sc_uint<6>) ~x16x28 + (sc_uint<6>) ~x17x28 + (sc_uint<6>) ~x18x28 + (sc_uint<6>) ~x19x28 + (sc_uint<6>) ~x20x28 + (sc_uint<6>) ~x21x28 + (sc_uint<6>) ~x22x28 + (sc_uint<6>) ~x23x28 + (sc_uint<6>) ~x24x28 + (sc_uint<6>) ~x25x28 + (sc_uint<6>) ~x26x28 + (sc_uint<6>) ~x27x28 + (sc_uint<6>) x28x29 + (sc_uint<6>) x28x30 + (sc_uint<6>) x28x31 + (sc_uint<6>) x28x32 + (sc_uint<6>) x28x33 + (sc_uint<6>) x28x34 + (sc_uint<6>) x28x35 + (sc_uint<6>) x28x36 + (sc_uint<6>) x28x37 + (sc_uint<6>) x28x38 + (sc_uint<6>) x28x39 + (sc_uint<6>) x28x40 + (sc_uint<6>) x28x41 + (sc_uint<6>) x28x42 + (sc_uint<6>) x28x43 + (sc_uint<6>) x28x44 + (sc_uint<6>) x28x45 + (sc_uint<6>) x28x46 + (sc_uint<6>) x28x47 + (sc_uint<6>) x28x48 + (sc_uint<6>) x28x49 + (sc_uint<6>) x28x50 + (sc_uint<6>) x28x51 + (sc_uint<6>) x28x52 + (sc_uint<6>) x28x53 + (sc_uint<6>) x28x54 + (sc_uint<6>) x28x55 + (sc_uint<6>) x28x56 + (sc_uint<6>) x28x57 + (sc_uint<6>) x28x58 + (sc_uint<6>) x28x59 + (sc_uint<6>) x28x60 + (sc_uint<6>) x28x61 + (sc_uint<6>) x28x62;
	P29 = (sc_uint<6>) ~x0x29 + (sc_uint<6>) ~x1x29 + (sc_uint<6>) ~x2x29 + (sc_uint<6>) ~x3x29 + (sc_uint<6>) ~x4x29 + (sc_uint<6>) ~x5x29 + (sc_uint<6>) ~x6x29 + (sc_uint<6>) ~x7x29 + (sc_uint<6>) ~x8x29 + (sc_uint<6>) ~x9x29 + (sc_uint<6>) ~x10x29 + (sc_uint<6>) ~x11x29 + (sc_uint<6>) ~x12x29 + (sc_uint<6>) ~x13x29 + (sc_uint<6>) ~x14x29 + (sc_uint<6>) ~x15x29 + (sc_uint<6>) ~x16x29 + (sc_uint<6>) ~x17x29 + (sc_uint<6>) ~x18x29 + (sc_uint<6>) ~x19x29 + (sc_uint<6>) ~x20x29 + (sc_uint<6>) ~x21x29 + (sc_uint<6>) ~x22x29 + (sc_uint<6>) ~x23x29 + (sc_uint<6>) ~x24x29 + (sc_uint<6>) ~x25x29 + (sc_uint<6>) ~x26x29 + (sc_uint<6>) ~x27x29 + (sc_uint<6>) ~x28x29 + (sc_uint<6>) x29x30 + (sc_uint<6>) x29x31 + (sc_uint<6>) x29x32 + (sc_uint<6>) x29x33 + (sc_uint<6>) x29x34 + (sc_uint<6>) x29x35 + (sc_uint<6>) x29x36 + (sc_uint<6>) x29x37 + (sc_uint<6>) x29x38 + (sc_uint<6>) x29x39 + (sc_uint<6>) x29x40 + (sc_uint<6>) x29x41 + (sc_uint<6>) x29x42 + (sc_uint<6>) x29x43 + (sc_uint<6>) x29x44 + (sc_uint<6>) x29x45 + (sc_uint<6>) x29x46 + (sc_uint<6>) x29x47 + (sc_uint<6>) x29x48 + (sc_uint<6>) x29x49 + (sc_uint<6>) x29x50 + (sc_uint<6>) x29x51 + (sc_uint<6>) x29x52 + (sc_uint<6>) x29x53 + (sc_uint<6>) x29x54 + (sc_uint<6>) x29x55 + (sc_uint<6>) x29x56 + (sc_uint<6>) x29x57 + (sc_uint<6>) x29x58 + (sc_uint<6>) x29x59 + (sc_uint<6>) x29x60 + (sc_uint<6>) x29x61 + (sc_uint<6>) x29x62;
	P30 = (sc_uint<6>) ~x0x30 + (sc_uint<6>) ~x1x30 + (sc_uint<6>) ~x2x30 + (sc_uint<6>) ~x3x30 + (sc_uint<6>) ~x4x30 + (sc_uint<6>) ~x5x30 + (sc_uint<6>) ~x6x30 + (sc_uint<6>) ~x7x30 + (sc_uint<6>) ~x8x30 + (sc_uint<6>) ~x9x30 + (sc_uint<6>) ~x10x30 + (sc_uint<6>) ~x11x30 + (sc_uint<6>) ~x12x30 + (sc_uint<6>) ~x13x30 + (sc_uint<6>) ~x14x30 + (sc_uint<6>) ~x15x30 + (sc_uint<6>) ~x16x30 + (sc_uint<6>) ~x17x30 + (sc_uint<6>) ~x18x30 + (sc_uint<6>) ~x19x30 + (sc_uint<6>) ~x20x30 + (sc_uint<6>) ~x21x30 + (sc_uint<6>) ~x22x30 + (sc_uint<6>) ~x23x30 + (sc_uint<6>) ~x24x30 + (sc_uint<6>) ~x25x30 + (sc_uint<6>) ~x26x30 + (sc_uint<6>) ~x27x30 + (sc_uint<6>) ~x28x30 + (sc_uint<6>) ~x29x30 + (sc_uint<6>) x30x31 + (sc_uint<6>) x30x32 + (sc_uint<6>) x30x33 + (sc_uint<6>) x30x34 + (sc_uint<6>) x30x35 + (sc_uint<6>) x30x36 + (sc_uint<6>) x30x37 + (sc_uint<6>) x30x38 + (sc_uint<6>) x30x39 + (sc_uint<6>) x30x40 + (sc_uint<6>) x30x41 + (sc_uint<6>) x30x42 + (sc_uint<6>) x30x43 + (sc_uint<6>) x30x44 + (sc_uint<6>) x30x45 + (sc_uint<6>) x30x46 + (sc_uint<6>) x30x47 + (sc_uint<6>) x30x48 + (sc_uint<6>) x30x49 + (sc_uint<6>) x30x50 + (sc_uint<6>) x30x51 + (sc_uint<6>) x30x52 + (sc_uint<6>) x30x53 + (sc_uint<6>) x30x54 + (sc_uint<6>) x30x55 + (sc_uint<6>) x30x56 + (sc_uint<6>) x30x57 + (sc_uint<6>) x30x58 + (sc_uint<6>) x30x59 + (sc_uint<6>) x30x60 + (sc_uint<6>) x30x61 + (sc_uint<6>) x30x62;
	P31 = (sc_uint<6>) ~x0x31 + (sc_uint<6>) ~x1x31 + (sc_uint<6>) ~x2x31 + (sc_uint<6>) ~x3x31 + (sc_uint<6>) ~x4x31 + (sc_uint<6>) ~x5x31 + (sc_uint<6>) ~x6x31 + (sc_uint<6>) ~x7x31 + (sc_uint<6>) ~x8x31 + (sc_uint<6>) ~x9x31 + (sc_uint<6>) ~x10x31 + (sc_uint<6>) ~x11x31 + (sc_uint<6>) ~x12x31 + (sc_uint<6>) ~x13x31 + (sc_uint<6>) ~x14x31 + (sc_uint<6>) ~x15x31 + (sc_uint<6>) ~x16x31 + (sc_uint<6>) ~x17x31 + (sc_uint<6>) ~x18x31 + (sc_uint<6>) ~x19x31 + (sc_uint<6>) ~x20x31 + (sc_uint<6>) ~x21x31 + (sc_uint<6>) ~x22x31 + (sc_uint<6>) ~x23x31 + (sc_uint<6>) ~x24x31 + (sc_uint<6>) ~x25x31 + (sc_uint<6>) ~x26x31 + (sc_uint<6>) ~x27x31 + (sc_uint<6>) ~x28x31 + (sc_uint<6>) ~x29x31 + (sc_uint<6>) ~x30x31 + (sc_uint<6>) x31x32 + (sc_uint<6>) x31x33 + (sc_uint<6>) x31x34 + (sc_uint<6>) x31x35 + (sc_uint<6>) x31x36 + (sc_uint<6>) x31x37 + (sc_uint<6>) x31x38 + (sc_uint<6>) x31x39 + (sc_uint<6>) x31x40 + (sc_uint<6>) x31x41 + (sc_uint<6>) x31x42 + (sc_uint<6>) x31x43 + (sc_uint<6>) x31x44 + (sc_uint<6>) x31x45 + (sc_uint<6>) x31x46 + (sc_uint<6>) x31x47 + (sc_uint<6>) x31x48 + (sc_uint<6>) x31x49 + (sc_uint<6>) x31x50 + (sc_uint<6>) x31x51 + (sc_uint<6>) x31x52 + (sc_uint<6>) x31x53 + (sc_uint<6>) x31x54 + (sc_uint<6>) x31x55 + (sc_uint<6>) x31x56 + (sc_uint<6>) x31x57 + (sc_uint<6>) x31x58 + (sc_uint<6>) x31x59 + (sc_uint<6>) x31x60 + (sc_uint<6>) x31x61 + (sc_uint<6>) x31x62;
	P32 = (sc_uint<6>) ~x0x32 + (sc_uint<6>) ~x1x32 + (sc_uint<6>) ~x2x32 + (sc_uint<6>) ~x3x32 + (sc_uint<6>) ~x4x32 + (sc_uint<6>) ~x5x32 + (sc_uint<6>) ~x6x32 + (sc_uint<6>) ~x7x32 + (sc_uint<6>) ~x8x32 + (sc_uint<6>) ~x9x32 + (sc_uint<6>) ~x10x32 + (sc_uint<6>) ~x11x32 + (sc_uint<6>) ~x12x32 + (sc_uint<6>) ~x13x32 + (sc_uint<6>) ~x14x32 + (sc_uint<6>) ~x15x32 + (sc_uint<6>) ~x16x32 + (sc_uint<6>) ~x17x32 + (sc_uint<6>) ~x18x32 + (sc_uint<6>) ~x19x32 + (sc_uint<6>) ~x20x32 + (sc_uint<6>) ~x21x32 + (sc_uint<6>) ~x22x32 + (sc_uint<6>) ~x23x32 + (sc_uint<6>) ~x24x32 + (sc_uint<6>) ~x25x32 + (sc_uint<6>) ~x26x32 + (sc_uint<6>) ~x27x32 + (sc_uint<6>) ~x28x32 + (sc_uint<6>) ~x29x32 + (sc_uint<6>) ~x30x32 + (sc_uint<6>) ~x31x32 + (sc_uint<6>) x32x33 + (sc_uint<6>) x32x34 + (sc_uint<6>) x32x35 + (sc_uint<6>) x32x36 + (sc_uint<6>) x32x37 + (sc_uint<6>) x32x38 + (sc_uint<6>) x32x39 + (sc_uint<6>) x32x40 + (sc_uint<6>) x32x41 + (sc_uint<6>) x32x42 + (sc_uint<6>) x32x43 + (sc_uint<6>) x32x44 + (sc_uint<6>) x32x45 + (sc_uint<6>) x32x46 + (sc_uint<6>) x32x47 + (sc_uint<6>) x32x48 + (sc_uint<6>) x32x49 + (sc_uint<6>) x32x50 + (sc_uint<6>) x32x51 + (sc_uint<6>) x32x52 + (sc_uint<6>) x32x53 + (sc_uint<6>) x32x54 + (sc_uint<6>) x32x55 + (sc_uint<6>) x32x56 + (sc_uint<6>) x32x57 + (sc_uint<6>) x32x58 + (sc_uint<6>) x32x59 + (sc_uint<6>) x32x60 + (sc_uint<6>) x32x61 + (sc_uint<6>) x32x62;
	P33 = (sc_uint<6>) ~x0x33 + (sc_uint<6>) ~x1x33 + (sc_uint<6>) ~x2x33 + (sc_uint<6>) ~x3x33 + (sc_uint<6>) ~x4x33 + (sc_uint<6>) ~x5x33 + (sc_uint<6>) ~x6x33 + (sc_uint<6>) ~x7x33 + (sc_uint<6>) ~x8x33 + (sc_uint<6>) ~x9x33 + (sc_uint<6>) ~x10x33 + (sc_uint<6>) ~x11x33 + (sc_uint<6>) ~x12x33 + (sc_uint<6>) ~x13x33 + (sc_uint<6>) ~x14x33 + (sc_uint<6>) ~x15x33 + (sc_uint<6>) ~x16x33 + (sc_uint<6>) ~x17x33 + (sc_uint<6>) ~x18x33 + (sc_uint<6>) ~x19x33 + (sc_uint<6>) ~x20x33 + (sc_uint<6>) ~x21x33 + (sc_uint<6>) ~x22x33 + (sc_uint<6>) ~x23x33 + (sc_uint<6>) ~x24x33 + (sc_uint<6>) ~x25x33 + (sc_uint<6>) ~x26x33 + (sc_uint<6>) ~x27x33 + (sc_uint<6>) ~x28x33 + (sc_uint<6>) ~x29x33 + (sc_uint<6>) ~x30x33 + (sc_uint<6>) ~x31x33 + (sc_uint<6>) ~x32x33 + (sc_uint<6>) x33x34 + (sc_uint<6>) x33x35 + (sc_uint<6>) x33x36 + (sc_uint<6>) x33x37 + (sc_uint<6>) x33x38 + (sc_uint<6>) x33x39 + (sc_uint<6>) x33x40 + (sc_uint<6>) x33x41 + (sc_uint<6>) x33x42 + (sc_uint<6>) x33x43 + (sc_uint<6>) x33x44 + (sc_uint<6>) x33x45 + (sc_uint<6>) x33x46 + (sc_uint<6>) x33x47 + (sc_uint<6>) x33x48 + (sc_uint<6>) x33x49 + (sc_uint<6>) x33x50 + (sc_uint<6>) x33x51 + (sc_uint<6>) x33x52 + (sc_uint<6>) x33x53 + (sc_uint<6>) x33x54 + (sc_uint<6>) x33x55 + (sc_uint<6>) x33x56 + (sc_uint<6>) x33x57 + (sc_uint<6>) x33x58 + (sc_uint<6>) x33x59 + (sc_uint<6>) x33x60 + (sc_uint<6>) x33x61 + (sc_uint<6>) x33x62;
	P34 = (sc_uint<6>) ~x0x34 + (sc_uint<6>) ~x1x34 + (sc_uint<6>) ~x2x34 + (sc_uint<6>) ~x3x34 + (sc_uint<6>) ~x4x34 + (sc_uint<6>) ~x5x34 + (sc_uint<6>) ~x6x34 + (sc_uint<6>) ~x7x34 + (sc_uint<6>) ~x8x34 + (sc_uint<6>) ~x9x34 + (sc_uint<6>) ~x10x34 + (sc_uint<6>) ~x11x34 + (sc_uint<6>) ~x12x34 + (sc_uint<6>) ~x13x34 + (sc_uint<6>) ~x14x34 + (sc_uint<6>) ~x15x34 + (sc_uint<6>) ~x16x34 + (sc_uint<6>) ~x17x34 + (sc_uint<6>) ~x18x34 + (sc_uint<6>) ~x19x34 + (sc_uint<6>) ~x20x34 + (sc_uint<6>) ~x21x34 + (sc_uint<6>) ~x22x34 + (sc_uint<6>) ~x23x34 + (sc_uint<6>) ~x24x34 + (sc_uint<6>) ~x25x34 + (sc_uint<6>) ~x26x34 + (sc_uint<6>) ~x27x34 + (sc_uint<6>) ~x28x34 + (sc_uint<6>) ~x29x34 + (sc_uint<6>) ~x30x34 + (sc_uint<6>) ~x31x34 + (sc_uint<6>) ~x32x34 + (sc_uint<6>) ~x33x34 + (sc_uint<6>) x34x35 + (sc_uint<6>) x34x36 + (sc_uint<6>) x34x37 + (sc_uint<6>) x34x38 + (sc_uint<6>) x34x39 + (sc_uint<6>) x34x40 + (sc_uint<6>) x34x41 + (sc_uint<6>) x34x42 + (sc_uint<6>) x34x43 + (sc_uint<6>) x34x44 + (sc_uint<6>) x34x45 + (sc_uint<6>) x34x46 + (sc_uint<6>) x34x47 + (sc_uint<6>) x34x48 + (sc_uint<6>) x34x49 + (sc_uint<6>) x34x50 + (sc_uint<6>) x34x51 + (sc_uint<6>) x34x52 + (sc_uint<6>) x34x53 + (sc_uint<6>) x34x54 + (sc_uint<6>) x34x55 + (sc_uint<6>) x34x56 + (sc_uint<6>) x34x57 + (sc_uint<6>) x34x58 + (sc_uint<6>) x34x59 + (sc_uint<6>) x34x60 + (sc_uint<6>) x34x61 + (sc_uint<6>) x34x62;
	P35 = (sc_uint<6>) ~x0x35 + (sc_uint<6>) ~x1x35 + (sc_uint<6>) ~x2x35 + (sc_uint<6>) ~x3x35 + (sc_uint<6>) ~x4x35 + (sc_uint<6>) ~x5x35 + (sc_uint<6>) ~x6x35 + (sc_uint<6>) ~x7x35 + (sc_uint<6>) ~x8x35 + (sc_uint<6>) ~x9x35 + (sc_uint<6>) ~x10x35 + (sc_uint<6>) ~x11x35 + (sc_uint<6>) ~x12x35 + (sc_uint<6>) ~x13x35 + (sc_uint<6>) ~x14x35 + (sc_uint<6>) ~x15x35 + (sc_uint<6>) ~x16x35 + (sc_uint<6>) ~x17x35 + (sc_uint<6>) ~x18x35 + (sc_uint<6>) ~x19x35 + (sc_uint<6>) ~x20x35 + (sc_uint<6>) ~x21x35 + (sc_uint<6>) ~x22x35 + (sc_uint<6>) ~x23x35 + (sc_uint<6>) ~x24x35 + (sc_uint<6>) ~x25x35 + (sc_uint<6>) ~x26x35 + (sc_uint<6>) ~x27x35 + (sc_uint<6>) ~x28x35 + (sc_uint<6>) ~x29x35 + (sc_uint<6>) ~x30x35 + (sc_uint<6>) ~x31x35 + (sc_uint<6>) ~x32x35 + (sc_uint<6>) ~x33x35 + (sc_uint<6>) ~x34x35 + (sc_uint<6>) x35x36 + (sc_uint<6>) x35x37 + (sc_uint<6>) x35x38 + (sc_uint<6>) x35x39 + (sc_uint<6>) x35x40 + (sc_uint<6>) x35x41 + (sc_uint<6>) x35x42 + (sc_uint<6>) x35x43 + (sc_uint<6>) x35x44 + (sc_uint<6>) x35x45 + (sc_uint<6>) x35x46 + (sc_uint<6>) x35x47 + (sc_uint<6>) x35x48 + (sc_uint<6>) x35x49 + (sc_uint<6>) x35x50 + (sc_uint<6>) x35x51 + (sc_uint<6>) x35x52 + (sc_uint<6>) x35x53 + (sc_uint<6>) x35x54 + (sc_uint<6>) x35x55 + (sc_uint<6>) x35x56 + (sc_uint<6>) x35x57 + (sc_uint<6>) x35x58 + (sc_uint<6>) x35x59 + (sc_uint<6>) x35x60 + (sc_uint<6>) x35x61 + (sc_uint<6>) x35x62;
	P36 = (sc_uint<6>) ~x0x36 + (sc_uint<6>) ~x1x36 + (sc_uint<6>) ~x2x36 + (sc_uint<6>) ~x3x36 + (sc_uint<6>) ~x4x36 + (sc_uint<6>) ~x5x36 + (sc_uint<6>) ~x6x36 + (sc_uint<6>) ~x7x36 + (sc_uint<6>) ~x8x36 + (sc_uint<6>) ~x9x36 + (sc_uint<6>) ~x10x36 + (sc_uint<6>) ~x11x36 + (sc_uint<6>) ~x12x36 + (sc_uint<6>) ~x13x36 + (sc_uint<6>) ~x14x36 + (sc_uint<6>) ~x15x36 + (sc_uint<6>) ~x16x36 + (sc_uint<6>) ~x17x36 + (sc_uint<6>) ~x18x36 + (sc_uint<6>) ~x19x36 + (sc_uint<6>) ~x20x36 + (sc_uint<6>) ~x21x36 + (sc_uint<6>) ~x22x36 + (sc_uint<6>) ~x23x36 + (sc_uint<6>) ~x24x36 + (sc_uint<6>) ~x25x36 + (sc_uint<6>) ~x26x36 + (sc_uint<6>) ~x27x36 + (sc_uint<6>) ~x28x36 + (sc_uint<6>) ~x29x36 + (sc_uint<6>) ~x30x36 + (sc_uint<6>) ~x31x36 + (sc_uint<6>) ~x32x36 + (sc_uint<6>) ~x33x36 + (sc_uint<6>) ~x34x36 + (sc_uint<6>) ~x35x36 + (sc_uint<6>) x36x37 + (sc_uint<6>) x36x38 + (sc_uint<6>) x36x39 + (sc_uint<6>) x36x40 + (sc_uint<6>) x36x41 + (sc_uint<6>) x36x42 + (sc_uint<6>) x36x43 + (sc_uint<6>) x36x44 + (sc_uint<6>) x36x45 + (sc_uint<6>) x36x46 + (sc_uint<6>) x36x47 + (sc_uint<6>) x36x48 + (sc_uint<6>) x36x49 + (sc_uint<6>) x36x50 + (sc_uint<6>) x36x51 + (sc_uint<6>) x36x52 + (sc_uint<6>) x36x53 + (sc_uint<6>) x36x54 + (sc_uint<6>) x36x55 + (sc_uint<6>) x36x56 + (sc_uint<6>) x36x57 + (sc_uint<6>) x36x58 + (sc_uint<6>) x36x59 + (sc_uint<6>) x36x60 + (sc_uint<6>) x36x61 + (sc_uint<6>) x36x62;
	P37 = (sc_uint<6>) ~x0x37 + (sc_uint<6>) ~x1x37 + (sc_uint<6>) ~x2x37 + (sc_uint<6>) ~x3x37 + (sc_uint<6>) ~x4x37 + (sc_uint<6>) ~x5x37 + (sc_uint<6>) ~x6x37 + (sc_uint<6>) ~x7x37 + (sc_uint<6>) ~x8x37 + (sc_uint<6>) ~x9x37 + (sc_uint<6>) ~x10x37 + (sc_uint<6>) ~x11x37 + (sc_uint<6>) ~x12x37 + (sc_uint<6>) ~x13x37 + (sc_uint<6>) ~x14x37 + (sc_uint<6>) ~x15x37 + (sc_uint<6>) ~x16x37 + (sc_uint<6>) ~x17x37 + (sc_uint<6>) ~x18x37 + (sc_uint<6>) ~x19x37 + (sc_uint<6>) ~x20x37 + (sc_uint<6>) ~x21x37 + (sc_uint<6>) ~x22x37 + (sc_uint<6>) ~x23x37 + (sc_uint<6>) ~x24x37 + (sc_uint<6>) ~x25x37 + (sc_uint<6>) ~x26x37 + (sc_uint<6>) ~x27x37 + (sc_uint<6>) ~x28x37 + (sc_uint<6>) ~x29x37 + (sc_uint<6>) ~x30x37 + (sc_uint<6>) ~x31x37 + (sc_uint<6>) ~x32x37 + (sc_uint<6>) ~x33x37 + (sc_uint<6>) ~x34x37 + (sc_uint<6>) ~x35x37 + (sc_uint<6>) ~x36x37 + (sc_uint<6>) x37x38 + (sc_uint<6>) x37x39 + (sc_uint<6>) x37x40 + (sc_uint<6>) x37x41 + (sc_uint<6>) x37x42 + (sc_uint<6>) x37x43 + (sc_uint<6>) x37x44 + (sc_uint<6>) x37x45 + (sc_uint<6>) x37x46 + (sc_uint<6>) x37x47 + (sc_uint<6>) x37x48 + (sc_uint<6>) x37x49 + (sc_uint<6>) x37x50 + (sc_uint<6>) x37x51 + (sc_uint<6>) x37x52 + (sc_uint<6>) x37x53 + (sc_uint<6>) x37x54 + (sc_uint<6>) x37x55 + (sc_uint<6>) x37x56 + (sc_uint<6>) x37x57 + (sc_uint<6>) x37x58 + (sc_uint<6>) x37x59 + (sc_uint<6>) x37x60 + (sc_uint<6>) x37x61 + (sc_uint<6>) x37x62;
	P38 = (sc_uint<6>) ~x0x38 + (sc_uint<6>) ~x1x38 + (sc_uint<6>) ~x2x38 + (sc_uint<6>) ~x3x38 + (sc_uint<6>) ~x4x38 + (sc_uint<6>) ~x5x38 + (sc_uint<6>) ~x6x38 + (sc_uint<6>) ~x7x38 + (sc_uint<6>) ~x8x38 + (sc_uint<6>) ~x9x38 + (sc_uint<6>) ~x10x38 + (sc_uint<6>) ~x11x38 + (sc_uint<6>) ~x12x38 + (sc_uint<6>) ~x13x38 + (sc_uint<6>) ~x14x38 + (sc_uint<6>) ~x15x38 + (sc_uint<6>) ~x16x38 + (sc_uint<6>) ~x17x38 + (sc_uint<6>) ~x18x38 + (sc_uint<6>) ~x19x38 + (sc_uint<6>) ~x20x38 + (sc_uint<6>) ~x21x38 + (sc_uint<6>) ~x22x38 + (sc_uint<6>) ~x23x38 + (sc_uint<6>) ~x24x38 + (sc_uint<6>) ~x25x38 + (sc_uint<6>) ~x26x38 + (sc_uint<6>) ~x27x38 + (sc_uint<6>) ~x28x38 + (sc_uint<6>) ~x29x38 + (sc_uint<6>) ~x30x38 + (sc_uint<6>) ~x31x38 + (sc_uint<6>) ~x32x38 + (sc_uint<6>) ~x33x38 + (sc_uint<6>) ~x34x38 + (sc_uint<6>) ~x35x38 + (sc_uint<6>) ~x36x38 + (sc_uint<6>) ~x37x38 + (sc_uint<6>) x38x39 + (sc_uint<6>) x38x40 + (sc_uint<6>) x38x41 + (sc_uint<6>) x38x42 + (sc_uint<6>) x38x43 + (sc_uint<6>) x38x44 + (sc_uint<6>) x38x45 + (sc_uint<6>) x38x46 + (sc_uint<6>) x38x47 + (sc_uint<6>) x38x48 + (sc_uint<6>) x38x49 + (sc_uint<6>) x38x50 + (sc_uint<6>) x38x51 + (sc_uint<6>) x38x52 + (sc_uint<6>) x38x53 + (sc_uint<6>) x38x54 + (sc_uint<6>) x38x55 + (sc_uint<6>) x38x56 + (sc_uint<6>) x38x57 + (sc_uint<6>) x38x58 + (sc_uint<6>) x38x59 + (sc_uint<6>) x38x60 + (sc_uint<6>) x38x61 + (sc_uint<6>) x38x62;
	P39 = (sc_uint<6>) ~x0x39 + (sc_uint<6>) ~x1x39 + (sc_uint<6>) ~x2x39 + (sc_uint<6>) ~x3x39 + (sc_uint<6>) ~x4x39 + (sc_uint<6>) ~x5x39 + (sc_uint<6>) ~x6x39 + (sc_uint<6>) ~x7x39 + (sc_uint<6>) ~x8x39 + (sc_uint<6>) ~x9x39 + (sc_uint<6>) ~x10x39 + (sc_uint<6>) ~x11x39 + (sc_uint<6>) ~x12x39 + (sc_uint<6>) ~x13x39 + (sc_uint<6>) ~x14x39 + (sc_uint<6>) ~x15x39 + (sc_uint<6>) ~x16x39 + (sc_uint<6>) ~x17x39 + (sc_uint<6>) ~x18x39 + (sc_uint<6>) ~x19x39 + (sc_uint<6>) ~x20x39 + (sc_uint<6>) ~x21x39 + (sc_uint<6>) ~x22x39 + (sc_uint<6>) ~x23x39 + (sc_uint<6>) ~x24x39 + (sc_uint<6>) ~x25x39 + (sc_uint<6>) ~x26x39 + (sc_uint<6>) ~x27x39 + (sc_uint<6>) ~x28x39 + (sc_uint<6>) ~x29x39 + (sc_uint<6>) ~x30x39 + (sc_uint<6>) ~x31x39 + (sc_uint<6>) ~x32x39 + (sc_uint<6>) ~x33x39 + (sc_uint<6>) ~x34x39 + (sc_uint<6>) ~x35x39 + (sc_uint<6>) ~x36x39 + (sc_uint<6>) ~x37x39 + (sc_uint<6>) ~x38x39 + (sc_uint<6>) x39x40 + (sc_uint<6>) x39x41 + (sc_uint<6>) x39x42 + (sc_uint<6>) x39x43 + (sc_uint<6>) x39x44 + (sc_uint<6>) x39x45 + (sc_uint<6>) x39x46 + (sc_uint<6>) x39x47 + (sc_uint<6>) x39x48 + (sc_uint<6>) x39x49 + (sc_uint<6>) x39x50 + (sc_uint<6>) x39x51 + (sc_uint<6>) x39x52 + (sc_uint<6>) x39x53 + (sc_uint<6>) x39x54 + (sc_uint<6>) x39x55 + (sc_uint<6>) x39x56 + (sc_uint<6>) x39x57 + (sc_uint<6>) x39x58 + (sc_uint<6>) x39x59 + (sc_uint<6>) x39x60 + (sc_uint<6>) x39x61 + (sc_uint<6>) x39x62;
	P40 = (sc_uint<6>) ~x0x40 + (sc_uint<6>) ~x1x40 + (sc_uint<6>) ~x2x40 + (sc_uint<6>) ~x3x40 + (sc_uint<6>) ~x4x40 + (sc_uint<6>) ~x5x40 + (sc_uint<6>) ~x6x40 + (sc_uint<6>) ~x7x40 + (sc_uint<6>) ~x8x40 + (sc_uint<6>) ~x9x40 + (sc_uint<6>) ~x10x40 + (sc_uint<6>) ~x11x40 + (sc_uint<6>) ~x12x40 + (sc_uint<6>) ~x13x40 + (sc_uint<6>) ~x14x40 + (sc_uint<6>) ~x15x40 + (sc_uint<6>) ~x16x40 + (sc_uint<6>) ~x17x40 + (sc_uint<6>) ~x18x40 + (sc_uint<6>) ~x19x40 + (sc_uint<6>) ~x20x40 + (sc_uint<6>) ~x21x40 + (sc_uint<6>) ~x22x40 + (sc_uint<6>) ~x23x40 + (sc_uint<6>) ~x24x40 + (sc_uint<6>) ~x25x40 + (sc_uint<6>) ~x26x40 + (sc_uint<6>) ~x27x40 + (sc_uint<6>) ~x28x40 + (sc_uint<6>) ~x29x40 + (sc_uint<6>) ~x30x40 + (sc_uint<6>) ~x31x40 + (sc_uint<6>) ~x32x40 + (sc_uint<6>) ~x33x40 + (sc_uint<6>) ~x34x40 + (sc_uint<6>) ~x35x40 + (sc_uint<6>) ~x36x40 + (sc_uint<6>) ~x37x40 + (sc_uint<6>) ~x38x40 + (sc_uint<6>) ~x39x40 + (sc_uint<6>) x40x41 + (sc_uint<6>) x40x42 + (sc_uint<6>) x40x43 + (sc_uint<6>) x40x44 + (sc_uint<6>) x40x45 + (sc_uint<6>) x40x46 + (sc_uint<6>) x40x47 + (sc_uint<6>) x40x48 + (sc_uint<6>) x40x49 + (sc_uint<6>) x40x50 + (sc_uint<6>) x40x51 + (sc_uint<6>) x40x52 + (sc_uint<6>) x40x53 + (sc_uint<6>) x40x54 + (sc_uint<6>) x40x55 + (sc_uint<6>) x40x56 + (sc_uint<6>) x40x57 + (sc_uint<6>) x40x58 + (sc_uint<6>) x40x59 + (sc_uint<6>) x40x60 + (sc_uint<6>) x40x61 + (sc_uint<6>) x40x62;
	P41 = (sc_uint<6>) ~x0x41 + (sc_uint<6>) ~x1x41 + (sc_uint<6>) ~x2x41 + (sc_uint<6>) ~x3x41 + (sc_uint<6>) ~x4x41 + (sc_uint<6>) ~x5x41 + (sc_uint<6>) ~x6x41 + (sc_uint<6>) ~x7x41 + (sc_uint<6>) ~x8x41 + (sc_uint<6>) ~x9x41 + (sc_uint<6>) ~x10x41 + (sc_uint<6>) ~x11x41 + (sc_uint<6>) ~x12x41 + (sc_uint<6>) ~x13x41 + (sc_uint<6>) ~x14x41 + (sc_uint<6>) ~x15x41 + (sc_uint<6>) ~x16x41 + (sc_uint<6>) ~x17x41 + (sc_uint<6>) ~x18x41 + (sc_uint<6>) ~x19x41 + (sc_uint<6>) ~x20x41 + (sc_uint<6>) ~x21x41 + (sc_uint<6>) ~x22x41 + (sc_uint<6>) ~x23x41 + (sc_uint<6>) ~x24x41 + (sc_uint<6>) ~x25x41 + (sc_uint<6>) ~x26x41 + (sc_uint<6>) ~x27x41 + (sc_uint<6>) ~x28x41 + (sc_uint<6>) ~x29x41 + (sc_uint<6>) ~x30x41 + (sc_uint<6>) ~x31x41 + (sc_uint<6>) ~x32x41 + (sc_uint<6>) ~x33x41 + (sc_uint<6>) ~x34x41 + (sc_uint<6>) ~x35x41 + (sc_uint<6>) ~x36x41 + (sc_uint<6>) ~x37x41 + (sc_uint<6>) ~x38x41 + (sc_uint<6>) ~x39x41 + (sc_uint<6>) ~x40x41 + (sc_uint<6>) x41x42 + (sc_uint<6>) x41x43 + (sc_uint<6>) x41x44 + (sc_uint<6>) x41x45 + (sc_uint<6>) x41x46 + (sc_uint<6>) x41x47 + (sc_uint<6>) x41x48 + (sc_uint<6>) x41x49 + (sc_uint<6>) x41x50 + (sc_uint<6>) x41x51 + (sc_uint<6>) x41x52 + (sc_uint<6>) x41x53 + (sc_uint<6>) x41x54 + (sc_uint<6>) x41x55 + (sc_uint<6>) x41x56 + (sc_uint<6>) x41x57 + (sc_uint<6>) x41x58 + (sc_uint<6>) x41x59 + (sc_uint<6>) x41x60 + (sc_uint<6>) x41x61 + (sc_uint<6>) x41x62;
	P42 = (sc_uint<6>) ~x0x42 + (sc_uint<6>) ~x1x42 + (sc_uint<6>) ~x2x42 + (sc_uint<6>) ~x3x42 + (sc_uint<6>) ~x4x42 + (sc_uint<6>) ~x5x42 + (sc_uint<6>) ~x6x42 + (sc_uint<6>) ~x7x42 + (sc_uint<6>) ~x8x42 + (sc_uint<6>) ~x9x42 + (sc_uint<6>) ~x10x42 + (sc_uint<6>) ~x11x42 + (sc_uint<6>) ~x12x42 + (sc_uint<6>) ~x13x42 + (sc_uint<6>) ~x14x42 + (sc_uint<6>) ~x15x42 + (sc_uint<6>) ~x16x42 + (sc_uint<6>) ~x17x42 + (sc_uint<6>) ~x18x42 + (sc_uint<6>) ~x19x42 + (sc_uint<6>) ~x20x42 + (sc_uint<6>) ~x21x42 + (sc_uint<6>) ~x22x42 + (sc_uint<6>) ~x23x42 + (sc_uint<6>) ~x24x42 + (sc_uint<6>) ~x25x42 + (sc_uint<6>) ~x26x42 + (sc_uint<6>) ~x27x42 + (sc_uint<6>) ~x28x42 + (sc_uint<6>) ~x29x42 + (sc_uint<6>) ~x30x42 + (sc_uint<6>) ~x31x42 + (sc_uint<6>) ~x32x42 + (sc_uint<6>) ~x33x42 + (sc_uint<6>) ~x34x42 + (sc_uint<6>) ~x35x42 + (sc_uint<6>) ~x36x42 + (sc_uint<6>) ~x37x42 + (sc_uint<6>) ~x38x42 + (sc_uint<6>) ~x39x42 + (sc_uint<6>) ~x40x42 + (sc_uint<6>) ~x41x42 + (sc_uint<6>) x42x43 + (sc_uint<6>) x42x44 + (sc_uint<6>) x42x45 + (sc_uint<6>) x42x46 + (sc_uint<6>) x42x47 + (sc_uint<6>) x42x48 + (sc_uint<6>) x42x49 + (sc_uint<6>) x42x50 + (sc_uint<6>) x42x51 + (sc_uint<6>) x42x52 + (sc_uint<6>) x42x53 + (sc_uint<6>) x42x54 + (sc_uint<6>) x42x55 + (sc_uint<6>) x42x56 + (sc_uint<6>) x42x57 + (sc_uint<6>) x42x58 + (sc_uint<6>) x42x59 + (sc_uint<6>) x42x60 + (sc_uint<6>) x42x61 + (sc_uint<6>) x42x62;
	P43 = (sc_uint<6>) ~x0x43 + (sc_uint<6>) ~x1x43 + (sc_uint<6>) ~x2x43 + (sc_uint<6>) ~x3x43 + (sc_uint<6>) ~x4x43 + (sc_uint<6>) ~x5x43 + (sc_uint<6>) ~x6x43 + (sc_uint<6>) ~x7x43 + (sc_uint<6>) ~x8x43 + (sc_uint<6>) ~x9x43 + (sc_uint<6>) ~x10x43 + (sc_uint<6>) ~x11x43 + (sc_uint<6>) ~x12x43 + (sc_uint<6>) ~x13x43 + (sc_uint<6>) ~x14x43 + (sc_uint<6>) ~x15x43 + (sc_uint<6>) ~x16x43 + (sc_uint<6>) ~x17x43 + (sc_uint<6>) ~x18x43 + (sc_uint<6>) ~x19x43 + (sc_uint<6>) ~x20x43 + (sc_uint<6>) ~x21x43 + (sc_uint<6>) ~x22x43 + (sc_uint<6>) ~x23x43 + (sc_uint<6>) ~x24x43 + (sc_uint<6>) ~x25x43 + (sc_uint<6>) ~x26x43 + (sc_uint<6>) ~x27x43 + (sc_uint<6>) ~x28x43 + (sc_uint<6>) ~x29x43 + (sc_uint<6>) ~x30x43 + (sc_uint<6>) ~x31x43 + (sc_uint<6>) ~x32x43 + (sc_uint<6>) ~x33x43 + (sc_uint<6>) ~x34x43 + (sc_uint<6>) ~x35x43 + (sc_uint<6>) ~x36x43 + (sc_uint<6>) ~x37x43 + (sc_uint<6>) ~x38x43 + (sc_uint<6>) ~x39x43 + (sc_uint<6>) ~x40x43 + (sc_uint<6>) ~x41x43 + (sc_uint<6>) ~x42x43 + (sc_uint<6>) x43x44 + (sc_uint<6>) x43x45 + (sc_uint<6>) x43x46 + (sc_uint<6>) x43x47 + (sc_uint<6>) x43x48 + (sc_uint<6>) x43x49 + (sc_uint<6>) x43x50 + (sc_uint<6>) x43x51 + (sc_uint<6>) x43x52 + (sc_uint<6>) x43x53 + (sc_uint<6>) x43x54 + (sc_uint<6>) x43x55 + (sc_uint<6>) x43x56 + (sc_uint<6>) x43x57 + (sc_uint<6>) x43x58 + (sc_uint<6>) x43x59 + (sc_uint<6>) x43x60 + (sc_uint<6>) x43x61 + (sc_uint<6>) x43x62;
	P44 = (sc_uint<6>) ~x0x44 + (sc_uint<6>) ~x1x44 + (sc_uint<6>) ~x2x44 + (sc_uint<6>) ~x3x44 + (sc_uint<6>) ~x4x44 + (sc_uint<6>) ~x5x44 + (sc_uint<6>) ~x6x44 + (sc_uint<6>) ~x7x44 + (sc_uint<6>) ~x8x44 + (sc_uint<6>) ~x9x44 + (sc_uint<6>) ~x10x44 + (sc_uint<6>) ~x11x44 + (sc_uint<6>) ~x12x44 + (sc_uint<6>) ~x13x44 + (sc_uint<6>) ~x14x44 + (sc_uint<6>) ~x15x44 + (sc_uint<6>) ~x16x44 + (sc_uint<6>) ~x17x44 + (sc_uint<6>) ~x18x44 + (sc_uint<6>) ~x19x44 + (sc_uint<6>) ~x20x44 + (sc_uint<6>) ~x21x44 + (sc_uint<6>) ~x22x44 + (sc_uint<6>) ~x23x44 + (sc_uint<6>) ~x24x44 + (sc_uint<6>) ~x25x44 + (sc_uint<6>) ~x26x44 + (sc_uint<6>) ~x27x44 + (sc_uint<6>) ~x28x44 + (sc_uint<6>) ~x29x44 + (sc_uint<6>) ~x30x44 + (sc_uint<6>) ~x31x44 + (sc_uint<6>) ~x32x44 + (sc_uint<6>) ~x33x44 + (sc_uint<6>) ~x34x44 + (sc_uint<6>) ~x35x44 + (sc_uint<6>) ~x36x44 + (sc_uint<6>) ~x37x44 + (sc_uint<6>) ~x38x44 + (sc_uint<6>) ~x39x44 + (sc_uint<6>) ~x40x44 + (sc_uint<6>) ~x41x44 + (sc_uint<6>) ~x42x44 + (sc_uint<6>) ~x43x44 + (sc_uint<6>) x44x45 + (sc_uint<6>) x44x46 + (sc_uint<6>) x44x47 + (sc_uint<6>) x44x48 + (sc_uint<6>) x44x49 + (sc_uint<6>) x44x50 + (sc_uint<6>) x44x51 + (sc_uint<6>) x44x52 + (sc_uint<6>) x44x53 + (sc_uint<6>) x44x54 + (sc_uint<6>) x44x55 + (sc_uint<6>) x44x56 + (sc_uint<6>) x44x57 + (sc_uint<6>) x44x58 + (sc_uint<6>) x44x59 + (sc_uint<6>) x44x60 + (sc_uint<6>) x44x61 + (sc_uint<6>) x44x62;
	P45 = (sc_uint<6>) ~x0x45 + (sc_uint<6>) ~x1x45 + (sc_uint<6>) ~x2x45 + (sc_uint<6>) ~x3x45 + (sc_uint<6>) ~x4x45 + (sc_uint<6>) ~x5x45 + (sc_uint<6>) ~x6x45 + (sc_uint<6>) ~x7x45 + (sc_uint<6>) ~x8x45 + (sc_uint<6>) ~x9x45 + (sc_uint<6>) ~x10x45 + (sc_uint<6>) ~x11x45 + (sc_uint<6>) ~x12x45 + (sc_uint<6>) ~x13x45 + (sc_uint<6>) ~x14x45 + (sc_uint<6>) ~x15x45 + (sc_uint<6>) ~x16x45 + (sc_uint<6>) ~x17x45 + (sc_uint<6>) ~x18x45 + (sc_uint<6>) ~x19x45 + (sc_uint<6>) ~x20x45 + (sc_uint<6>) ~x21x45 + (sc_uint<6>) ~x22x45 + (sc_uint<6>) ~x23x45 + (sc_uint<6>) ~x24x45 + (sc_uint<6>) ~x25x45 + (sc_uint<6>) ~x26x45 + (sc_uint<6>) ~x27x45 + (sc_uint<6>) ~x28x45 + (sc_uint<6>) ~x29x45 + (sc_uint<6>) ~x30x45 + (sc_uint<6>) ~x31x45 + (sc_uint<6>) ~x32x45 + (sc_uint<6>) ~x33x45 + (sc_uint<6>) ~x34x45 + (sc_uint<6>) ~x35x45 + (sc_uint<6>) ~x36x45 + (sc_uint<6>) ~x37x45 + (sc_uint<6>) ~x38x45 + (sc_uint<6>) ~x39x45 + (sc_uint<6>) ~x40x45 + (sc_uint<6>) ~x41x45 + (sc_uint<6>) ~x42x45 + (sc_uint<6>) ~x43x45 + (sc_uint<6>) ~x44x45 + (sc_uint<6>) x45x46 + (sc_uint<6>) x45x47 + (sc_uint<6>) x45x48 + (sc_uint<6>) x45x49 + (sc_uint<6>) x45x50 + (sc_uint<6>) x45x51 + (sc_uint<6>) x45x52 + (sc_uint<6>) x45x53 + (sc_uint<6>) x45x54 + (sc_uint<6>) x45x55 + (sc_uint<6>) x45x56 + (sc_uint<6>) x45x57 + (sc_uint<6>) x45x58 + (sc_uint<6>) x45x59 + (sc_uint<6>) x45x60 + (sc_uint<6>) x45x61 + (sc_uint<6>) x45x62;
	P46 = (sc_uint<6>) ~x0x46 + (sc_uint<6>) ~x1x46 + (sc_uint<6>) ~x2x46 + (sc_uint<6>) ~x3x46 + (sc_uint<6>) ~x4x46 + (sc_uint<6>) ~x5x46 + (sc_uint<6>) ~x6x46 + (sc_uint<6>) ~x7x46 + (sc_uint<6>) ~x8x46 + (sc_uint<6>) ~x9x46 + (sc_uint<6>) ~x10x46 + (sc_uint<6>) ~x11x46 + (sc_uint<6>) ~x12x46 + (sc_uint<6>) ~x13x46 + (sc_uint<6>) ~x14x46 + (sc_uint<6>) ~x15x46 + (sc_uint<6>) ~x16x46 + (sc_uint<6>) ~x17x46 + (sc_uint<6>) ~x18x46 + (sc_uint<6>) ~x19x46 + (sc_uint<6>) ~x20x46 + (sc_uint<6>) ~x21x46 + (sc_uint<6>) ~x22x46 + (sc_uint<6>) ~x23x46 + (sc_uint<6>) ~x24x46 + (sc_uint<6>) ~x25x46 + (sc_uint<6>) ~x26x46 + (sc_uint<6>) ~x27x46 + (sc_uint<6>) ~x28x46 + (sc_uint<6>) ~x29x46 + (sc_uint<6>) ~x30x46 + (sc_uint<6>) ~x31x46 + (sc_uint<6>) ~x32x46 + (sc_uint<6>) ~x33x46 + (sc_uint<6>) ~x34x46 + (sc_uint<6>) ~x35x46 + (sc_uint<6>) ~x36x46 + (sc_uint<6>) ~x37x46 + (sc_uint<6>) ~x38x46 + (sc_uint<6>) ~x39x46 + (sc_uint<6>) ~x40x46 + (sc_uint<6>) ~x41x46 + (sc_uint<6>) ~x42x46 + (sc_uint<6>) ~x43x46 + (sc_uint<6>) ~x44x46 + (sc_uint<6>) ~x45x46 + (sc_uint<6>) x46x47 + (sc_uint<6>) x46x48 + (sc_uint<6>) x46x49 + (sc_uint<6>) x46x50 + (sc_uint<6>) x46x51 + (sc_uint<6>) x46x52 + (sc_uint<6>) x46x53 + (sc_uint<6>) x46x54 + (sc_uint<6>) x46x55 + (sc_uint<6>) x46x56 + (sc_uint<6>) x46x57 + (sc_uint<6>) x46x58 + (sc_uint<6>) x46x59 + (sc_uint<6>) x46x60 + (sc_uint<6>) x46x61 + (sc_uint<6>) x46x62;
	P47 = (sc_uint<6>) ~x0x47 + (sc_uint<6>) ~x1x47 + (sc_uint<6>) ~x2x47 + (sc_uint<6>) ~x3x47 + (sc_uint<6>) ~x4x47 + (sc_uint<6>) ~x5x47 + (sc_uint<6>) ~x6x47 + (sc_uint<6>) ~x7x47 + (sc_uint<6>) ~x8x47 + (sc_uint<6>) ~x9x47 + (sc_uint<6>) ~x10x47 + (sc_uint<6>) ~x11x47 + (sc_uint<6>) ~x12x47 + (sc_uint<6>) ~x13x47 + (sc_uint<6>) ~x14x47 + (sc_uint<6>) ~x15x47 + (sc_uint<6>) ~x16x47 + (sc_uint<6>) ~x17x47 + (sc_uint<6>) ~x18x47 + (sc_uint<6>) ~x19x47 + (sc_uint<6>) ~x20x47 + (sc_uint<6>) ~x21x47 + (sc_uint<6>) ~x22x47 + (sc_uint<6>) ~x23x47 + (sc_uint<6>) ~x24x47 + (sc_uint<6>) ~x25x47 + (sc_uint<6>) ~x26x47 + (sc_uint<6>) ~x27x47 + (sc_uint<6>) ~x28x47 + (sc_uint<6>) ~x29x47 + (sc_uint<6>) ~x30x47 + (sc_uint<6>) ~x31x47 + (sc_uint<6>) ~x32x47 + (sc_uint<6>) ~x33x47 + (sc_uint<6>) ~x34x47 + (sc_uint<6>) ~x35x47 + (sc_uint<6>) ~x36x47 + (sc_uint<6>) ~x37x47 + (sc_uint<6>) ~x38x47 + (sc_uint<6>) ~x39x47 + (sc_uint<6>) ~x40x47 + (sc_uint<6>) ~x41x47 + (sc_uint<6>) ~x42x47 + (sc_uint<6>) ~x43x47 + (sc_uint<6>) ~x44x47 + (sc_uint<6>) ~x45x47 + (sc_uint<6>) ~x46x47 + (sc_uint<6>) x47x48 + (sc_uint<6>) x47x49 + (sc_uint<6>) x47x50 + (sc_uint<6>) x47x51 + (sc_uint<6>) x47x52 + (sc_uint<6>) x47x53 + (sc_uint<6>) x47x54 + (sc_uint<6>) x47x55 + (sc_uint<6>) x47x56 + (sc_uint<6>) x47x57 + (sc_uint<6>) x47x58 + (sc_uint<6>) x47x59 + (sc_uint<6>) x47x60 + (sc_uint<6>) x47x61 + (sc_uint<6>) x47x62;
	P48 = (sc_uint<6>) ~x0x48 + (sc_uint<6>) ~x1x48 + (sc_uint<6>) ~x2x48 + (sc_uint<6>) ~x3x48 + (sc_uint<6>) ~x4x48 + (sc_uint<6>) ~x5x48 + (sc_uint<6>) ~x6x48 + (sc_uint<6>) ~x7x48 + (sc_uint<6>) ~x8x48 + (sc_uint<6>) ~x9x48 + (sc_uint<6>) ~x10x48 + (sc_uint<6>) ~x11x48 + (sc_uint<6>) ~x12x48 + (sc_uint<6>) ~x13x48 + (sc_uint<6>) ~x14x48 + (sc_uint<6>) ~x15x48 + (sc_uint<6>) ~x16x48 + (sc_uint<6>) ~x17x48 + (sc_uint<6>) ~x18x48 + (sc_uint<6>) ~x19x48 + (sc_uint<6>) ~x20x48 + (sc_uint<6>) ~x21x48 + (sc_uint<6>) ~x22x48 + (sc_uint<6>) ~x23x48 + (sc_uint<6>) ~x24x48 + (sc_uint<6>) ~x25x48 + (sc_uint<6>) ~x26x48 + (sc_uint<6>) ~x27x48 + (sc_uint<6>) ~x28x48 + (sc_uint<6>) ~x29x48 + (sc_uint<6>) ~x30x48 + (sc_uint<6>) ~x31x48 + (sc_uint<6>) ~x32x48 + (sc_uint<6>) ~x33x48 + (sc_uint<6>) ~x34x48 + (sc_uint<6>) ~x35x48 + (sc_uint<6>) ~x36x48 + (sc_uint<6>) ~x37x48 + (sc_uint<6>) ~x38x48 + (sc_uint<6>) ~x39x48 + (sc_uint<6>) ~x40x48 + (sc_uint<6>) ~x41x48 + (sc_uint<6>) ~x42x48 + (sc_uint<6>) ~x43x48 + (sc_uint<6>) ~x44x48 + (sc_uint<6>) ~x45x48 + (sc_uint<6>) ~x46x48 + (sc_uint<6>) ~x47x48 + (sc_uint<6>) x48x49 + (sc_uint<6>) x48x50 + (sc_uint<6>) x48x51 + (sc_uint<6>) x48x52 + (sc_uint<6>) x48x53 + (sc_uint<6>) x48x54 + (sc_uint<6>) x48x55 + (sc_uint<6>) x48x56 + (sc_uint<6>) x48x57 + (sc_uint<6>) x48x58 + (sc_uint<6>) x48x59 + (sc_uint<6>) x48x60 + (sc_uint<6>) x48x61 + (sc_uint<6>) x48x62;
	P49 = (sc_uint<6>) ~x0x49 + (sc_uint<6>) ~x1x49 + (sc_uint<6>) ~x2x49 + (sc_uint<6>) ~x3x49 + (sc_uint<6>) ~x4x49 + (sc_uint<6>) ~x5x49 + (sc_uint<6>) ~x6x49 + (sc_uint<6>) ~x7x49 + (sc_uint<6>) ~x8x49 + (sc_uint<6>) ~x9x49 + (sc_uint<6>) ~x10x49 + (sc_uint<6>) ~x11x49 + (sc_uint<6>) ~x12x49 + (sc_uint<6>) ~x13x49 + (sc_uint<6>) ~x14x49 + (sc_uint<6>) ~x15x49 + (sc_uint<6>) ~x16x49 + (sc_uint<6>) ~x17x49 + (sc_uint<6>) ~x18x49 + (sc_uint<6>) ~x19x49 + (sc_uint<6>) ~x20x49 + (sc_uint<6>) ~x21x49 + (sc_uint<6>) ~x22x49 + (sc_uint<6>) ~x23x49 + (sc_uint<6>) ~x24x49 + (sc_uint<6>) ~x25x49 + (sc_uint<6>) ~x26x49 + (sc_uint<6>) ~x27x49 + (sc_uint<6>) ~x28x49 + (sc_uint<6>) ~x29x49 + (sc_uint<6>) ~x30x49 + (sc_uint<6>) ~x31x49 + (sc_uint<6>) ~x32x49 + (sc_uint<6>) ~x33x49 + (sc_uint<6>) ~x34x49 + (sc_uint<6>) ~x35x49 + (sc_uint<6>) ~x36x49 + (sc_uint<6>) ~x37x49 + (sc_uint<6>) ~x38x49 + (sc_uint<6>) ~x39x49 + (sc_uint<6>) ~x40x49 + (sc_uint<6>) ~x41x49 + (sc_uint<6>) ~x42x49 + (sc_uint<6>) ~x43x49 + (sc_uint<6>) ~x44x49 + (sc_uint<6>) ~x45x49 + (sc_uint<6>) ~x46x49 + (sc_uint<6>) ~x47x49 + (sc_uint<6>) ~x48x49 + (sc_uint<6>) x49x50 + (sc_uint<6>) x49x51 + (sc_uint<6>) x49x52 + (sc_uint<6>) x49x53 + (sc_uint<6>) x49x54 + (sc_uint<6>) x49x55 + (sc_uint<6>) x49x56 + (sc_uint<6>) x49x57 + (sc_uint<6>) x49x58 + (sc_uint<6>) x49x59 + (sc_uint<6>) x49x60 + (sc_uint<6>) x49x61 + (sc_uint<6>) x49x62;
	P50 = (sc_uint<6>) ~x0x50 + (sc_uint<6>) ~x1x50 + (sc_uint<6>) ~x2x50 + (sc_uint<6>) ~x3x50 + (sc_uint<6>) ~x4x50 + (sc_uint<6>) ~x5x50 + (sc_uint<6>) ~x6x50 + (sc_uint<6>) ~x7x50 + (sc_uint<6>) ~x8x50 + (sc_uint<6>) ~x9x50 + (sc_uint<6>) ~x10x50 + (sc_uint<6>) ~x11x50 + (sc_uint<6>) ~x12x50 + (sc_uint<6>) ~x13x50 + (sc_uint<6>) ~x14x50 + (sc_uint<6>) ~x15x50 + (sc_uint<6>) ~x16x50 + (sc_uint<6>) ~x17x50 + (sc_uint<6>) ~x18x50 + (sc_uint<6>) ~x19x50 + (sc_uint<6>) ~x20x50 + (sc_uint<6>) ~x21x50 + (sc_uint<6>) ~x22x50 + (sc_uint<6>) ~x23x50 + (sc_uint<6>) ~x24x50 + (sc_uint<6>) ~x25x50 + (sc_uint<6>) ~x26x50 + (sc_uint<6>) ~x27x50 + (sc_uint<6>) ~x28x50 + (sc_uint<6>) ~x29x50 + (sc_uint<6>) ~x30x50 + (sc_uint<6>) ~x31x50 + (sc_uint<6>) ~x32x50 + (sc_uint<6>) ~x33x50 + (sc_uint<6>) ~x34x50 + (sc_uint<6>) ~x35x50 + (sc_uint<6>) ~x36x50 + (sc_uint<6>) ~x37x50 + (sc_uint<6>) ~x38x50 + (sc_uint<6>) ~x39x50 + (sc_uint<6>) ~x40x50 + (sc_uint<6>) ~x41x50 + (sc_uint<6>) ~x42x50 + (sc_uint<6>) ~x43x50 + (sc_uint<6>) ~x44x50 + (sc_uint<6>) ~x45x50 + (sc_uint<6>) ~x46x50 + (sc_uint<6>) ~x47x50 + (sc_uint<6>) ~x48x50 + (sc_uint<6>) ~x49x50 + (sc_uint<6>) x50x51 + (sc_uint<6>) x50x52 + (sc_uint<6>) x50x53 + (sc_uint<6>) x50x54 + (sc_uint<6>) x50x55 + (sc_uint<6>) x50x56 + (sc_uint<6>) x50x57 + (sc_uint<6>) x50x58 + (sc_uint<6>) x50x59 + (sc_uint<6>) x50x60 + (sc_uint<6>) x50x61 + (sc_uint<6>) x50x62;
	P51 = (sc_uint<6>) ~x0x51 + (sc_uint<6>) ~x1x51 + (sc_uint<6>) ~x2x51 + (sc_uint<6>) ~x3x51 + (sc_uint<6>) ~x4x51 + (sc_uint<6>) ~x5x51 + (sc_uint<6>) ~x6x51 + (sc_uint<6>) ~x7x51 + (sc_uint<6>) ~x8x51 + (sc_uint<6>) ~x9x51 + (sc_uint<6>) ~x10x51 + (sc_uint<6>) ~x11x51 + (sc_uint<6>) ~x12x51 + (sc_uint<6>) ~x13x51 + (sc_uint<6>) ~x14x51 + (sc_uint<6>) ~x15x51 + (sc_uint<6>) ~x16x51 + (sc_uint<6>) ~x17x51 + (sc_uint<6>) ~x18x51 + (sc_uint<6>) ~x19x51 + (sc_uint<6>) ~x20x51 + (sc_uint<6>) ~x21x51 + (sc_uint<6>) ~x22x51 + (sc_uint<6>) ~x23x51 + (sc_uint<6>) ~x24x51 + (sc_uint<6>) ~x25x51 + (sc_uint<6>) ~x26x51 + (sc_uint<6>) ~x27x51 + (sc_uint<6>) ~x28x51 + (sc_uint<6>) ~x29x51 + (sc_uint<6>) ~x30x51 + (sc_uint<6>) ~x31x51 + (sc_uint<6>) ~x32x51 + (sc_uint<6>) ~x33x51 + (sc_uint<6>) ~x34x51 + (sc_uint<6>) ~x35x51 + (sc_uint<6>) ~x36x51 + (sc_uint<6>) ~x37x51 + (sc_uint<6>) ~x38x51 + (sc_uint<6>) ~x39x51 + (sc_uint<6>) ~x40x51 + (sc_uint<6>) ~x41x51 + (sc_uint<6>) ~x42x51 + (sc_uint<6>) ~x43x51 + (sc_uint<6>) ~x44x51 + (sc_uint<6>) ~x45x51 + (sc_uint<6>) ~x46x51 + (sc_uint<6>) ~x47x51 + (sc_uint<6>) ~x48x51 + (sc_uint<6>) ~x49x51 + (sc_uint<6>) ~x50x51 + (sc_uint<6>) x51x52 + (sc_uint<6>) x51x53 + (sc_uint<6>) x51x54 + (sc_uint<6>) x51x55 + (sc_uint<6>) x51x56 + (sc_uint<6>) x51x57 + (sc_uint<6>) x51x58 + (sc_uint<6>) x51x59 + (sc_uint<6>) x51x60 + (sc_uint<6>) x51x61 + (sc_uint<6>) x51x62;
	P52 = (sc_uint<6>) ~x0x52 + (sc_uint<6>) ~x1x52 + (sc_uint<6>) ~x2x52 + (sc_uint<6>) ~x3x52 + (sc_uint<6>) ~x4x52 + (sc_uint<6>) ~x5x52 + (sc_uint<6>) ~x6x52 + (sc_uint<6>) ~x7x52 + (sc_uint<6>) ~x8x52 + (sc_uint<6>) ~x9x52 + (sc_uint<6>) ~x10x52 + (sc_uint<6>) ~x11x52 + (sc_uint<6>) ~x12x52 + (sc_uint<6>) ~x13x52 + (sc_uint<6>) ~x14x52 + (sc_uint<6>) ~x15x52 + (sc_uint<6>) ~x16x52 + (sc_uint<6>) ~x17x52 + (sc_uint<6>) ~x18x52 + (sc_uint<6>) ~x19x52 + (sc_uint<6>) ~x20x52 + (sc_uint<6>) ~x21x52 + (sc_uint<6>) ~x22x52 + (sc_uint<6>) ~x23x52 + (sc_uint<6>) ~x24x52 + (sc_uint<6>) ~x25x52 + (sc_uint<6>) ~x26x52 + (sc_uint<6>) ~x27x52 + (sc_uint<6>) ~x28x52 + (sc_uint<6>) ~x29x52 + (sc_uint<6>) ~x30x52 + (sc_uint<6>) ~x31x52 + (sc_uint<6>) ~x32x52 + (sc_uint<6>) ~x33x52 + (sc_uint<6>) ~x34x52 + (sc_uint<6>) ~x35x52 + (sc_uint<6>) ~x36x52 + (sc_uint<6>) ~x37x52 + (sc_uint<6>) ~x38x52 + (sc_uint<6>) ~x39x52 + (sc_uint<6>) ~x40x52 + (sc_uint<6>) ~x41x52 + (sc_uint<6>) ~x42x52 + (sc_uint<6>) ~x43x52 + (sc_uint<6>) ~x44x52 + (sc_uint<6>) ~x45x52 + (sc_uint<6>) ~x46x52 + (sc_uint<6>) ~x47x52 + (sc_uint<6>) ~x48x52 + (sc_uint<6>) ~x49x52 + (sc_uint<6>) ~x50x52 + (sc_uint<6>) ~x51x52 + (sc_uint<6>) x52x53 + (sc_uint<6>) x52x54 + (sc_uint<6>) x52x55 + (sc_uint<6>) x52x56 + (sc_uint<6>) x52x57 + (sc_uint<6>) x52x58 + (sc_uint<6>) x52x59 + (sc_uint<6>) x52x60 + (sc_uint<6>) x52x61 + (sc_uint<6>) x52x62;
	P53 = (sc_uint<6>) ~x0x53 + (sc_uint<6>) ~x1x53 + (sc_uint<6>) ~x2x53 + (sc_uint<6>) ~x3x53 + (sc_uint<6>) ~x4x53 + (sc_uint<6>) ~x5x53 + (sc_uint<6>) ~x6x53 + (sc_uint<6>) ~x7x53 + (sc_uint<6>) ~x8x53 + (sc_uint<6>) ~x9x53 + (sc_uint<6>) ~x10x53 + (sc_uint<6>) ~x11x53 + (sc_uint<6>) ~x12x53 + (sc_uint<6>) ~x13x53 + (sc_uint<6>) ~x14x53 + (sc_uint<6>) ~x15x53 + (sc_uint<6>) ~x16x53 + (sc_uint<6>) ~x17x53 + (sc_uint<6>) ~x18x53 + (sc_uint<6>) ~x19x53 + (sc_uint<6>) ~x20x53 + (sc_uint<6>) ~x21x53 + (sc_uint<6>) ~x22x53 + (sc_uint<6>) ~x23x53 + (sc_uint<6>) ~x24x53 + (sc_uint<6>) ~x25x53 + (sc_uint<6>) ~x26x53 + (sc_uint<6>) ~x27x53 + (sc_uint<6>) ~x28x53 + (sc_uint<6>) ~x29x53 + (sc_uint<6>) ~x30x53 + (sc_uint<6>) ~x31x53 + (sc_uint<6>) ~x32x53 + (sc_uint<6>) ~x33x53 + (sc_uint<6>) ~x34x53 + (sc_uint<6>) ~x35x53 + (sc_uint<6>) ~x36x53 + (sc_uint<6>) ~x37x53 + (sc_uint<6>) ~x38x53 + (sc_uint<6>) ~x39x53 + (sc_uint<6>) ~x40x53 + (sc_uint<6>) ~x41x53 + (sc_uint<6>) ~x42x53 + (sc_uint<6>) ~x43x53 + (sc_uint<6>) ~x44x53 + (sc_uint<6>) ~x45x53 + (sc_uint<6>) ~x46x53 + (sc_uint<6>) ~x47x53 + (sc_uint<6>) ~x48x53 + (sc_uint<6>) ~x49x53 + (sc_uint<6>) ~x50x53 + (sc_uint<6>) ~x51x53 + (sc_uint<6>) ~x52x53 + (sc_uint<6>) x53x54 + (sc_uint<6>) x53x55 + (sc_uint<6>) x53x56 + (sc_uint<6>) x53x57 + (sc_uint<6>) x53x58 + (sc_uint<6>) x53x59 + (sc_uint<6>) x53x60 + (sc_uint<6>) x53x61 + (sc_uint<6>) x53x62;
	P54 = (sc_uint<6>) ~x0x54 + (sc_uint<6>) ~x1x54 + (sc_uint<6>) ~x2x54 + (sc_uint<6>) ~x3x54 + (sc_uint<6>) ~x4x54 + (sc_uint<6>) ~x5x54 + (sc_uint<6>) ~x6x54 + (sc_uint<6>) ~x7x54 + (sc_uint<6>) ~x8x54 + (sc_uint<6>) ~x9x54 + (sc_uint<6>) ~x10x54 + (sc_uint<6>) ~x11x54 + (sc_uint<6>) ~x12x54 + (sc_uint<6>) ~x13x54 + (sc_uint<6>) ~x14x54 + (sc_uint<6>) ~x15x54 + (sc_uint<6>) ~x16x54 + (sc_uint<6>) ~x17x54 + (sc_uint<6>) ~x18x54 + (sc_uint<6>) ~x19x54 + (sc_uint<6>) ~x20x54 + (sc_uint<6>) ~x21x54 + (sc_uint<6>) ~x22x54 + (sc_uint<6>) ~x23x54 + (sc_uint<6>) ~x24x54 + (sc_uint<6>) ~x25x54 + (sc_uint<6>) ~x26x54 + (sc_uint<6>) ~x27x54 + (sc_uint<6>) ~x28x54 + (sc_uint<6>) ~x29x54 + (sc_uint<6>) ~x30x54 + (sc_uint<6>) ~x31x54 + (sc_uint<6>) ~x32x54 + (sc_uint<6>) ~x33x54 + (sc_uint<6>) ~x34x54 + (sc_uint<6>) ~x35x54 + (sc_uint<6>) ~x36x54 + (sc_uint<6>) ~x37x54 + (sc_uint<6>) ~x38x54 + (sc_uint<6>) ~x39x54 + (sc_uint<6>) ~x40x54 + (sc_uint<6>) ~x41x54 + (sc_uint<6>) ~x42x54 + (sc_uint<6>) ~x43x54 + (sc_uint<6>) ~x44x54 + (sc_uint<6>) ~x45x54 + (sc_uint<6>) ~x46x54 + (sc_uint<6>) ~x47x54 + (sc_uint<6>) ~x48x54 + (sc_uint<6>) ~x49x54 + (sc_uint<6>) ~x50x54 + (sc_uint<6>) ~x51x54 + (sc_uint<6>) ~x52x54 + (sc_uint<6>) ~x53x54 + (sc_uint<6>) x54x55 + (sc_uint<6>) x54x56 + (sc_uint<6>) x54x57 + (sc_uint<6>) x54x58 + (sc_uint<6>) x54x59 + (sc_uint<6>) x54x60 + (sc_uint<6>) x54x61 + (sc_uint<6>) x54x62;
	P55 = (sc_uint<6>) ~x0x55 + (sc_uint<6>) ~x1x55 + (sc_uint<6>) ~x2x55 + (sc_uint<6>) ~x3x55 + (sc_uint<6>) ~x4x55 + (sc_uint<6>) ~x5x55 + (sc_uint<6>) ~x6x55 + (sc_uint<6>) ~x7x55 + (sc_uint<6>) ~x8x55 + (sc_uint<6>) ~x9x55 + (sc_uint<6>) ~x10x55 + (sc_uint<6>) ~x11x55 + (sc_uint<6>) ~x12x55 + (sc_uint<6>) ~x13x55 + (sc_uint<6>) ~x14x55 + (sc_uint<6>) ~x15x55 + (sc_uint<6>) ~x16x55 + (sc_uint<6>) ~x17x55 + (sc_uint<6>) ~x18x55 + (sc_uint<6>) ~x19x55 + (sc_uint<6>) ~x20x55 + (sc_uint<6>) ~x21x55 + (sc_uint<6>) ~x22x55 + (sc_uint<6>) ~x23x55 + (sc_uint<6>) ~x24x55 + (sc_uint<6>) ~x25x55 + (sc_uint<6>) ~x26x55 + (sc_uint<6>) ~x27x55 + (sc_uint<6>) ~x28x55 + (sc_uint<6>) ~x29x55 + (sc_uint<6>) ~x30x55 + (sc_uint<6>) ~x31x55 + (sc_uint<6>) ~x32x55 + (sc_uint<6>) ~x33x55 + (sc_uint<6>) ~x34x55 + (sc_uint<6>) ~x35x55 + (sc_uint<6>) ~x36x55 + (sc_uint<6>) ~x37x55 + (sc_uint<6>) ~x38x55 + (sc_uint<6>) ~x39x55 + (sc_uint<6>) ~x40x55 + (sc_uint<6>) ~x41x55 + (sc_uint<6>) ~x42x55 + (sc_uint<6>) ~x43x55 + (sc_uint<6>) ~x44x55 + (sc_uint<6>) ~x45x55 + (sc_uint<6>) ~x46x55 + (sc_uint<6>) ~x47x55 + (sc_uint<6>) ~x48x55 + (sc_uint<6>) ~x49x55 + (sc_uint<6>) ~x50x55 + (sc_uint<6>) ~x51x55 + (sc_uint<6>) ~x52x55 + (sc_uint<6>) ~x53x55 + (sc_uint<6>) ~x54x55 + (sc_uint<6>) x55x56 + (sc_uint<6>) x55x57 + (sc_uint<6>) x55x58 + (sc_uint<6>) x55x59 + (sc_uint<6>) x55x60 + (sc_uint<6>) x55x61 + (sc_uint<6>) x55x62;
	P56 = (sc_uint<6>) ~x0x56 + (sc_uint<6>) ~x1x56 + (sc_uint<6>) ~x2x56 + (sc_uint<6>) ~x3x56 + (sc_uint<6>) ~x4x56 + (sc_uint<6>) ~x5x56 + (sc_uint<6>) ~x6x56 + (sc_uint<6>) ~x7x56 + (sc_uint<6>) ~x8x56 + (sc_uint<6>) ~x9x56 + (sc_uint<6>) ~x10x56 + (sc_uint<6>) ~x11x56 + (sc_uint<6>) ~x12x56 + (sc_uint<6>) ~x13x56 + (sc_uint<6>) ~x14x56 + (sc_uint<6>) ~x15x56 + (sc_uint<6>) ~x16x56 + (sc_uint<6>) ~x17x56 + (sc_uint<6>) ~x18x56 + (sc_uint<6>) ~x19x56 + (sc_uint<6>) ~x20x56 + (sc_uint<6>) ~x21x56 + (sc_uint<6>) ~x22x56 + (sc_uint<6>) ~x23x56 + (sc_uint<6>) ~x24x56 + (sc_uint<6>) ~x25x56 + (sc_uint<6>) ~x26x56 + (sc_uint<6>) ~x27x56 + (sc_uint<6>) ~x28x56 + (sc_uint<6>) ~x29x56 + (sc_uint<6>) ~x30x56 + (sc_uint<6>) ~x31x56 + (sc_uint<6>) ~x32x56 + (sc_uint<6>) ~x33x56 + (sc_uint<6>) ~x34x56 + (sc_uint<6>) ~x35x56 + (sc_uint<6>) ~x36x56 + (sc_uint<6>) ~x37x56 + (sc_uint<6>) ~x38x56 + (sc_uint<6>) ~x39x56 + (sc_uint<6>) ~x40x56 + (sc_uint<6>) ~x41x56 + (sc_uint<6>) ~x42x56 + (sc_uint<6>) ~x43x56 + (sc_uint<6>) ~x44x56 + (sc_uint<6>) ~x45x56 + (sc_uint<6>) ~x46x56 + (sc_uint<6>) ~x47x56 + (sc_uint<6>) ~x48x56 + (sc_uint<6>) ~x49x56 + (sc_uint<6>) ~x50x56 + (sc_uint<6>) ~x51x56 + (sc_uint<6>) ~x52x56 + (sc_uint<6>) ~x53x56 + (sc_uint<6>) ~x54x56 + (sc_uint<6>) ~x55x56 + (sc_uint<6>) x56x57 + (sc_uint<6>) x56x58 + (sc_uint<6>) x56x59 + (sc_uint<6>) x56x60 + (sc_uint<6>) x56x61 + (sc_uint<6>) x56x62;
	P57 = (sc_uint<6>) ~x0x57 + (sc_uint<6>) ~x1x57 + (sc_uint<6>) ~x2x57 + (sc_uint<6>) ~x3x57 + (sc_uint<6>) ~x4x57 + (sc_uint<6>) ~x5x57 + (sc_uint<6>) ~x6x57 + (sc_uint<6>) ~x7x57 + (sc_uint<6>) ~x8x57 + (sc_uint<6>) ~x9x57 + (sc_uint<6>) ~x10x57 + (sc_uint<6>) ~x11x57 + (sc_uint<6>) ~x12x57 + (sc_uint<6>) ~x13x57 + (sc_uint<6>) ~x14x57 + (sc_uint<6>) ~x15x57 + (sc_uint<6>) ~x16x57 + (sc_uint<6>) ~x17x57 + (sc_uint<6>) ~x18x57 + (sc_uint<6>) ~x19x57 + (sc_uint<6>) ~x20x57 + (sc_uint<6>) ~x21x57 + (sc_uint<6>) ~x22x57 + (sc_uint<6>) ~x23x57 + (sc_uint<6>) ~x24x57 + (sc_uint<6>) ~x25x57 + (sc_uint<6>) ~x26x57 + (sc_uint<6>) ~x27x57 + (sc_uint<6>) ~x28x57 + (sc_uint<6>) ~x29x57 + (sc_uint<6>) ~x30x57 + (sc_uint<6>) ~x31x57 + (sc_uint<6>) ~x32x57 + (sc_uint<6>) ~x33x57 + (sc_uint<6>) ~x34x57 + (sc_uint<6>) ~x35x57 + (sc_uint<6>) ~x36x57 + (sc_uint<6>) ~x37x57 + (sc_uint<6>) ~x38x57 + (sc_uint<6>) ~x39x57 + (sc_uint<6>) ~x40x57 + (sc_uint<6>) ~x41x57 + (sc_uint<6>) ~x42x57 + (sc_uint<6>) ~x43x57 + (sc_uint<6>) ~x44x57 + (sc_uint<6>) ~x45x57 + (sc_uint<6>) ~x46x57 + (sc_uint<6>) ~x47x57 + (sc_uint<6>) ~x48x57 + (sc_uint<6>) ~x49x57 + (sc_uint<6>) ~x50x57 + (sc_uint<6>) ~x51x57 + (sc_uint<6>) ~x52x57 + (sc_uint<6>) ~x53x57 + (sc_uint<6>) ~x54x57 + (sc_uint<6>) ~x55x57 + (sc_uint<6>) ~x56x57 + (sc_uint<6>) x57x58 + (sc_uint<6>) x57x59 + (sc_uint<6>) x57x60 + (sc_uint<6>) x57x61 + (sc_uint<6>) x57x62;
	P58 = (sc_uint<6>) ~x0x58 + (sc_uint<6>) ~x1x58 + (sc_uint<6>) ~x2x58 + (sc_uint<6>) ~x3x58 + (sc_uint<6>) ~x4x58 + (sc_uint<6>) ~x5x58 + (sc_uint<6>) ~x6x58 + (sc_uint<6>) ~x7x58 + (sc_uint<6>) ~x8x58 + (sc_uint<6>) ~x9x58 + (sc_uint<6>) ~x10x58 + (sc_uint<6>) ~x11x58 + (sc_uint<6>) ~x12x58 + (sc_uint<6>) ~x13x58 + (sc_uint<6>) ~x14x58 + (sc_uint<6>) ~x15x58 + (sc_uint<6>) ~x16x58 + (sc_uint<6>) ~x17x58 + (sc_uint<6>) ~x18x58 + (sc_uint<6>) ~x19x58 + (sc_uint<6>) ~x20x58 + (sc_uint<6>) ~x21x58 + (sc_uint<6>) ~x22x58 + (sc_uint<6>) ~x23x58 + (sc_uint<6>) ~x24x58 + (sc_uint<6>) ~x25x58 + (sc_uint<6>) ~x26x58 + (sc_uint<6>) ~x27x58 + (sc_uint<6>) ~x28x58 + (sc_uint<6>) ~x29x58 + (sc_uint<6>) ~x30x58 + (sc_uint<6>) ~x31x58 + (sc_uint<6>) ~x32x58 + (sc_uint<6>) ~x33x58 + (sc_uint<6>) ~x34x58 + (sc_uint<6>) ~x35x58 + (sc_uint<6>) ~x36x58 + (sc_uint<6>) ~x37x58 + (sc_uint<6>) ~x38x58 + (sc_uint<6>) ~x39x58 + (sc_uint<6>) ~x40x58 + (sc_uint<6>) ~x41x58 + (sc_uint<6>) ~x42x58 + (sc_uint<6>) ~x43x58 + (sc_uint<6>) ~x44x58 + (sc_uint<6>) ~x45x58 + (sc_uint<6>) ~x46x58 + (sc_uint<6>) ~x47x58 + (sc_uint<6>) ~x48x58 + (sc_uint<6>) ~x49x58 + (sc_uint<6>) ~x50x58 + (sc_uint<6>) ~x51x58 + (sc_uint<6>) ~x52x58 + (sc_uint<6>) ~x53x58 + (sc_uint<6>) ~x54x58 + (sc_uint<6>) ~x55x58 + (sc_uint<6>) ~x56x58 + (sc_uint<6>) ~x57x58 + (sc_uint<6>) x58x59 + (sc_uint<6>) x58x60 + (sc_uint<6>) x58x61 + (sc_uint<6>) x58x62;
	P59 = (sc_uint<6>) ~x0x59 + (sc_uint<6>) ~x1x59 + (sc_uint<6>) ~x2x59 + (sc_uint<6>) ~x3x59 + (sc_uint<6>) ~x4x59 + (sc_uint<6>) ~x5x59 + (sc_uint<6>) ~x6x59 + (sc_uint<6>) ~x7x59 + (sc_uint<6>) ~x8x59 + (sc_uint<6>) ~x9x59 + (sc_uint<6>) ~x10x59 + (sc_uint<6>) ~x11x59 + (sc_uint<6>) ~x12x59 + (sc_uint<6>) ~x13x59 + (sc_uint<6>) ~x14x59 + (sc_uint<6>) ~x15x59 + (sc_uint<6>) ~x16x59 + (sc_uint<6>) ~x17x59 + (sc_uint<6>) ~x18x59 + (sc_uint<6>) ~x19x59 + (sc_uint<6>) ~x20x59 + (sc_uint<6>) ~x21x59 + (sc_uint<6>) ~x22x59 + (sc_uint<6>) ~x23x59 + (sc_uint<6>) ~x24x59 + (sc_uint<6>) ~x25x59 + (sc_uint<6>) ~x26x59 + (sc_uint<6>) ~x27x59 + (sc_uint<6>) ~x28x59 + (sc_uint<6>) ~x29x59 + (sc_uint<6>) ~x30x59 + (sc_uint<6>) ~x31x59 + (sc_uint<6>) ~x32x59 + (sc_uint<6>) ~x33x59 + (sc_uint<6>) ~x34x59 + (sc_uint<6>) ~x35x59 + (sc_uint<6>) ~x36x59 + (sc_uint<6>) ~x37x59 + (sc_uint<6>) ~x38x59 + (sc_uint<6>) ~x39x59 + (sc_uint<6>) ~x40x59 + (sc_uint<6>) ~x41x59 + (sc_uint<6>) ~x42x59 + (sc_uint<6>) ~x43x59 + (sc_uint<6>) ~x44x59 + (sc_uint<6>) ~x45x59 + (sc_uint<6>) ~x46x59 + (sc_uint<6>) ~x47x59 + (sc_uint<6>) ~x48x59 + (sc_uint<6>) ~x49x59 + (sc_uint<6>) ~x50x59 + (sc_uint<6>) ~x51x59 + (sc_uint<6>) ~x52x59 + (sc_uint<6>) ~x53x59 + (sc_uint<6>) ~x54x59 + (sc_uint<6>) ~x55x59 + (sc_uint<6>) ~x56x59 + (sc_uint<6>) ~x57x59 + (sc_uint<6>) ~x58x59 + (sc_uint<6>) x59x60 + (sc_uint<6>) x59x61 + (sc_uint<6>) x59x62;
	P60 = (sc_uint<6>) ~x0x60 + (sc_uint<6>) ~x1x60 + (sc_uint<6>) ~x2x60 + (sc_uint<6>) ~x3x60 + (sc_uint<6>) ~x4x60 + (sc_uint<6>) ~x5x60 + (sc_uint<6>) ~x6x60 + (sc_uint<6>) ~x7x60 + (sc_uint<6>) ~x8x60 + (sc_uint<6>) ~x9x60 + (sc_uint<6>) ~x10x60 + (sc_uint<6>) ~x11x60 + (sc_uint<6>) ~x12x60 + (sc_uint<6>) ~x13x60 + (sc_uint<6>) ~x14x60 + (sc_uint<6>) ~x15x60 + (sc_uint<6>) ~x16x60 + (sc_uint<6>) ~x17x60 + (sc_uint<6>) ~x18x60 + (sc_uint<6>) ~x19x60 + (sc_uint<6>) ~x20x60 + (sc_uint<6>) ~x21x60 + (sc_uint<6>) ~x22x60 + (sc_uint<6>) ~x23x60 + (sc_uint<6>) ~x24x60 + (sc_uint<6>) ~x25x60 + (sc_uint<6>) ~x26x60 + (sc_uint<6>) ~x27x60 + (sc_uint<6>) ~x28x60 + (sc_uint<6>) ~x29x60 + (sc_uint<6>) ~x30x60 + (sc_uint<6>) ~x31x60 + (sc_uint<6>) ~x32x60 + (sc_uint<6>) ~x33x60 + (sc_uint<6>) ~x34x60 + (sc_uint<6>) ~x35x60 + (sc_uint<6>) ~x36x60 + (sc_uint<6>) ~x37x60 + (sc_uint<6>) ~x38x60 + (sc_uint<6>) ~x39x60 + (sc_uint<6>) ~x40x60 + (sc_uint<6>) ~x41x60 + (sc_uint<6>) ~x42x60 + (sc_uint<6>) ~x43x60 + (sc_uint<6>) ~x44x60 + (sc_uint<6>) ~x45x60 + (sc_uint<6>) ~x46x60 + (sc_uint<6>) ~x47x60 + (sc_uint<6>) ~x48x60 + (sc_uint<6>) ~x49x60 + (sc_uint<6>) ~x50x60 + (sc_uint<6>) ~x51x60 + (sc_uint<6>) ~x52x60 + (sc_uint<6>) ~x53x60 + (sc_uint<6>) ~x54x60 + (sc_uint<6>) ~x55x60 + (sc_uint<6>) ~x56x60 + (sc_uint<6>) ~x57x60 + (sc_uint<6>) ~x58x60 + (sc_uint<6>) ~x59x60 + (sc_uint<6>) x60x61 + (sc_uint<6>) x60x62;
	P61 = (sc_uint<6>) ~x0x61 + (sc_uint<6>) ~x1x61 + (sc_uint<6>) ~x2x61 + (sc_uint<6>) ~x3x61 + (sc_uint<6>) ~x4x61 + (sc_uint<6>) ~x5x61 + (sc_uint<6>) ~x6x61 + (sc_uint<6>) ~x7x61 + (sc_uint<6>) ~x8x61 + (sc_uint<6>) ~x9x61 + (sc_uint<6>) ~x10x61 + (sc_uint<6>) ~x11x61 + (sc_uint<6>) ~x12x61 + (sc_uint<6>) ~x13x61 + (sc_uint<6>) ~x14x61 + (sc_uint<6>) ~x15x61 + (sc_uint<6>) ~x16x61 + (sc_uint<6>) ~x17x61 + (sc_uint<6>) ~x18x61 + (sc_uint<6>) ~x19x61 + (sc_uint<6>) ~x20x61 + (sc_uint<6>) ~x21x61 + (sc_uint<6>) ~x22x61 + (sc_uint<6>) ~x23x61 + (sc_uint<6>) ~x24x61 + (sc_uint<6>) ~x25x61 + (sc_uint<6>) ~x26x61 + (sc_uint<6>) ~x27x61 + (sc_uint<6>) ~x28x61 + (sc_uint<6>) ~x29x61 + (sc_uint<6>) ~x30x61 + (sc_uint<6>) ~x31x61 + (sc_uint<6>) ~x32x61 + (sc_uint<6>) ~x33x61 + (sc_uint<6>) ~x34x61 + (sc_uint<6>) ~x35x61 + (sc_uint<6>) ~x36x61 + (sc_uint<6>) ~x37x61 + (sc_uint<6>) ~x38x61 + (sc_uint<6>) ~x39x61 + (sc_uint<6>) ~x40x61 + (sc_uint<6>) ~x41x61 + (sc_uint<6>) ~x42x61 + (sc_uint<6>) ~x43x61 + (sc_uint<6>) ~x44x61 + (sc_uint<6>) ~x45x61 + (sc_uint<6>) ~x46x61 + (sc_uint<6>) ~x47x61 + (sc_uint<6>) ~x48x61 + (sc_uint<6>) ~x49x61 + (sc_uint<6>) ~x50x61 + (sc_uint<6>) ~x51x61 + (sc_uint<6>) ~x52x61 + (sc_uint<6>) ~x53x61 + (sc_uint<6>) ~x54x61 + (sc_uint<6>) ~x55x61 + (sc_uint<6>) ~x56x61 + (sc_uint<6>) ~x57x61 + (sc_uint<6>) ~x58x61 + (sc_uint<6>) ~x59x61 + (sc_uint<6>) ~x60x61 + (sc_uint<6>) x61x62;
	P62 = (sc_uint<6>) ~x0x62 + (sc_uint<6>) ~x1x62 + (sc_uint<6>) ~x2x62 + (sc_uint<6>) ~x3x62 + (sc_uint<6>) ~x4x62 + (sc_uint<6>) ~x5x62 + (sc_uint<6>) ~x6x62 + (sc_uint<6>) ~x7x62 + (sc_uint<6>) ~x8x62 + (sc_uint<6>) ~x9x62 + (sc_uint<6>) ~x10x62 + (sc_uint<6>) ~x11x62 + (sc_uint<6>) ~x12x62 + (sc_uint<6>) ~x13x62 + (sc_uint<6>) ~x14x62 + (sc_uint<6>) ~x15x62 + (sc_uint<6>) ~x16x62 + (sc_uint<6>) ~x17x62 + (sc_uint<6>) ~x18x62 + (sc_uint<6>) ~x19x62 + (sc_uint<6>) ~x20x62 + (sc_uint<6>) ~x21x62 + (sc_uint<6>) ~x22x62 + (sc_uint<6>) ~x23x62 + (sc_uint<6>) ~x24x62 + (sc_uint<6>) ~x25x62 + (sc_uint<6>) ~x26x62 + (sc_uint<6>) ~x27x62 + (sc_uint<6>) ~x28x62 + (sc_uint<6>) ~x29x62 + (sc_uint<6>) ~x30x62 + (sc_uint<6>) ~x31x62 + (sc_uint<6>) ~x32x62 + (sc_uint<6>) ~x33x62 + (sc_uint<6>) ~x34x62 + (sc_uint<6>) ~x35x62 + (sc_uint<6>) ~x36x62 + (sc_uint<6>) ~x37x62 + (sc_uint<6>) ~x38x62 + (sc_uint<6>) ~x39x62 + (sc_uint<6>) ~x40x62 + (sc_uint<6>) ~x41x62 + (sc_uint<6>) ~x42x62 + (sc_uint<6>) ~x43x62 + (sc_uint<6>) ~x44x62 + (sc_uint<6>) ~x45x62 + (sc_uint<6>) ~x46x62 + (sc_uint<6>) ~x47x62 + (sc_uint<6>) ~x48x62 + (sc_uint<6>) ~x49x62 + (sc_uint<6>) ~x50x62 + (sc_uint<6>) ~x51x62 + (sc_uint<6>) ~x52x62 + (sc_uint<6>) ~x53x62 + (sc_uint<6>) ~x54x62 + (sc_uint<6>) ~x55x62 + (sc_uint<6>) ~x56x62 + (sc_uint<6>) ~x57x62 + (sc_uint<6>) ~x58x62 + (sc_uint<6>) ~x59x62 + (sc_uint<6>) ~x60x62 + (sc_uint<6>) ~x61x62;

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
	else	if ( P31 == 16 )
		temp[16] = input[31]; 
	else	if ( P32 == 16 )
		temp[16] = input[32]; 

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
	else	if ( P31 == 17 )
		temp[17] = input[31]; 
	else	if ( P32 == 17 )
		temp[17] = input[32]; 
	else	if ( P33 == 17 )
		temp[17] = input[33]; 
	else	if ( P34 == 17 )
		temp[17] = input[34]; 

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
	else	if ( P31 == 18 )
		temp[18] = input[31]; 
	else	if ( P32 == 18 )
		temp[18] = input[32]; 
	else	if ( P33 == 18 )
		temp[18] = input[33]; 
	else	if ( P34 == 18 )
		temp[18] = input[34]; 
	else	if ( P35 == 18 )
		temp[18] = input[35]; 
	else	if ( P36 == 18 )
		temp[18] = input[36]; 

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
	else	if ( P31 == 19 )
		temp[19] = input[31]; 
	else	if ( P32 == 19 )
		temp[19] = input[32]; 
	else	if ( P33 == 19 )
		temp[19] = input[33]; 
	else	if ( P34 == 19 )
		temp[19] = input[34]; 
	else	if ( P35 == 19 )
		temp[19] = input[35]; 
	else	if ( P36 == 19 )
		temp[19] = input[36]; 
	else	if ( P37 == 19 )
		temp[19] = input[37]; 
	else	if ( P38 == 19 )
		temp[19] = input[38]; 

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
	else	if ( P31 == 20 )
		temp[20] = input[31]; 
	else	if ( P32 == 20 )
		temp[20] = input[32]; 
	else	if ( P33 == 20 )
		temp[20] = input[33]; 
	else	if ( P34 == 20 )
		temp[20] = input[34]; 
	else	if ( P35 == 20 )
		temp[20] = input[35]; 
	else	if ( P36 == 20 )
		temp[20] = input[36]; 
	else	if ( P37 == 20 )
		temp[20] = input[37]; 
	else	if ( P38 == 20 )
		temp[20] = input[38]; 
	else	if ( P39 == 20 )
		temp[20] = input[39]; 
	else	if ( P40 == 20 )
		temp[20] = input[40]; 

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
	else	if ( P31 == 21 )
		temp[21] = input[31]; 
	else	if ( P32 == 21 )
		temp[21] = input[32]; 
	else	if ( P33 == 21 )
		temp[21] = input[33]; 
	else	if ( P34 == 21 )
		temp[21] = input[34]; 
	else	if ( P35 == 21 )
		temp[21] = input[35]; 
	else	if ( P36 == 21 )
		temp[21] = input[36]; 
	else	if ( P37 == 21 )
		temp[21] = input[37]; 
	else	if ( P38 == 21 )
		temp[21] = input[38]; 
	else	if ( P39 == 21 )
		temp[21] = input[39]; 
	else	if ( P40 == 21 )
		temp[21] = input[40]; 
	else	if ( P41 == 21 )
		temp[21] = input[41]; 
	else	if ( P42 == 21 )
		temp[21] = input[42]; 

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
	else	if ( P31 == 22 )
		temp[22] = input[31]; 
	else	if ( P32 == 22 )
		temp[22] = input[32]; 
	else	if ( P33 == 22 )
		temp[22] = input[33]; 
	else	if ( P34 == 22 )
		temp[22] = input[34]; 
	else	if ( P35 == 22 )
		temp[22] = input[35]; 
	else	if ( P36 == 22 )
		temp[22] = input[36]; 
	else	if ( P37 == 22 )
		temp[22] = input[37]; 
	else	if ( P38 == 22 )
		temp[22] = input[38]; 
	else	if ( P39 == 22 )
		temp[22] = input[39]; 
	else	if ( P40 == 22 )
		temp[22] = input[40]; 
	else	if ( P41 == 22 )
		temp[22] = input[41]; 
	else	if ( P42 == 22 )
		temp[22] = input[42]; 
	else	if ( P43 == 22 )
		temp[22] = input[43]; 
	else	if ( P44 == 22 )
		temp[22] = input[44]; 

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
	else	if ( P31 == 23 )
		temp[23] = input[31]; 
	else	if ( P32 == 23 )
		temp[23] = input[32]; 
	else	if ( P33 == 23 )
		temp[23] = input[33]; 
	else	if ( P34 == 23 )
		temp[23] = input[34]; 
	else	if ( P35 == 23 )
		temp[23] = input[35]; 
	else	if ( P36 == 23 )
		temp[23] = input[36]; 
	else	if ( P37 == 23 )
		temp[23] = input[37]; 
	else	if ( P38 == 23 )
		temp[23] = input[38]; 
	else	if ( P39 == 23 )
		temp[23] = input[39]; 
	else	if ( P40 == 23 )
		temp[23] = input[40]; 
	else	if ( P41 == 23 )
		temp[23] = input[41]; 
	else	if ( P42 == 23 )
		temp[23] = input[42]; 
	else	if ( P43 == 23 )
		temp[23] = input[43]; 
	else	if ( P44 == 23 )
		temp[23] = input[44]; 
	else	if ( P45 == 23 )
		temp[23] = input[45]; 
	else	if ( P46 == 23 )
		temp[23] = input[46]; 

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
	else	if ( P31 == 24 )
		temp[24] = input[31]; 
	else	if ( P32 == 24 )
		temp[24] = input[32]; 
	else	if ( P33 == 24 )
		temp[24] = input[33]; 
	else	if ( P34 == 24 )
		temp[24] = input[34]; 
	else	if ( P35 == 24 )
		temp[24] = input[35]; 
	else	if ( P36 == 24 )
		temp[24] = input[36]; 
	else	if ( P37 == 24 )
		temp[24] = input[37]; 
	else	if ( P38 == 24 )
		temp[24] = input[38]; 
	else	if ( P39 == 24 )
		temp[24] = input[39]; 
	else	if ( P40 == 24 )
		temp[24] = input[40]; 
	else	if ( P41 == 24 )
		temp[24] = input[41]; 
	else	if ( P42 == 24 )
		temp[24] = input[42]; 
	else	if ( P43 == 24 )
		temp[24] = input[43]; 
	else	if ( P44 == 24 )
		temp[24] = input[44]; 
	else	if ( P45 == 24 )
		temp[24] = input[45]; 
	else	if ( P46 == 24 )
		temp[24] = input[46]; 
	else	if ( P47 == 24 )
		temp[24] = input[47]; 
	else	if ( P48 == 24 )
		temp[24] = input[48]; 

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
	else	if ( P31 == 25 )
		temp[25] = input[31]; 
	else	if ( P32 == 25 )
		temp[25] = input[32]; 
	else	if ( P33 == 25 )
		temp[25] = input[33]; 
	else	if ( P34 == 25 )
		temp[25] = input[34]; 
	else	if ( P35 == 25 )
		temp[25] = input[35]; 
	else	if ( P36 == 25 )
		temp[25] = input[36]; 
	else	if ( P37 == 25 )
		temp[25] = input[37]; 
	else	if ( P38 == 25 )
		temp[25] = input[38]; 
	else	if ( P39 == 25 )
		temp[25] = input[39]; 
	else	if ( P40 == 25 )
		temp[25] = input[40]; 
	else	if ( P41 == 25 )
		temp[25] = input[41]; 
	else	if ( P42 == 25 )
		temp[25] = input[42]; 
	else	if ( P43 == 25 )
		temp[25] = input[43]; 
	else	if ( P44 == 25 )
		temp[25] = input[44]; 
	else	if ( P45 == 25 )
		temp[25] = input[45]; 
	else	if ( P46 == 25 )
		temp[25] = input[46]; 
	else	if ( P47 == 25 )
		temp[25] = input[47]; 
	else	if ( P48 == 25 )
		temp[25] = input[48]; 
	else	if ( P49 == 25 )
		temp[25] = input[49]; 
	else	if ( P50 == 25 )
		temp[25] = input[50]; 

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
	else	if ( P31 == 26 )
		temp[26] = input[31]; 
	else	if ( P32 == 26 )
		temp[26] = input[32]; 
	else	if ( P33 == 26 )
		temp[26] = input[33]; 
	else	if ( P34 == 26 )
		temp[26] = input[34]; 
	else	if ( P35 == 26 )
		temp[26] = input[35]; 
	else	if ( P36 == 26 )
		temp[26] = input[36]; 
	else	if ( P37 == 26 )
		temp[26] = input[37]; 
	else	if ( P38 == 26 )
		temp[26] = input[38]; 
	else	if ( P39 == 26 )
		temp[26] = input[39]; 
	else	if ( P40 == 26 )
		temp[26] = input[40]; 
	else	if ( P41 == 26 )
		temp[26] = input[41]; 
	else	if ( P42 == 26 )
		temp[26] = input[42]; 
	else	if ( P43 == 26 )
		temp[26] = input[43]; 
	else	if ( P44 == 26 )
		temp[26] = input[44]; 
	else	if ( P45 == 26 )
		temp[26] = input[45]; 
	else	if ( P46 == 26 )
		temp[26] = input[46]; 
	else	if ( P47 == 26 )
		temp[26] = input[47]; 
	else	if ( P48 == 26 )
		temp[26] = input[48]; 
	else	if ( P49 == 26 )
		temp[26] = input[49]; 
	else	if ( P50 == 26 )
		temp[26] = input[50]; 
	else	if ( P51 == 26 )
		temp[26] = input[51]; 
	else	if ( P52 == 26 )
		temp[26] = input[52]; 

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
	else	if ( P31 == 27 )
		temp[27] = input[31]; 
	else	if ( P32 == 27 )
		temp[27] = input[32]; 
	else	if ( P33 == 27 )
		temp[27] = input[33]; 
	else	if ( P34 == 27 )
		temp[27] = input[34]; 
	else	if ( P35 == 27 )
		temp[27] = input[35]; 
	else	if ( P36 == 27 )
		temp[27] = input[36]; 
	else	if ( P37 == 27 )
		temp[27] = input[37]; 
	else	if ( P38 == 27 )
		temp[27] = input[38]; 
	else	if ( P39 == 27 )
		temp[27] = input[39]; 
	else	if ( P40 == 27 )
		temp[27] = input[40]; 
	else	if ( P41 == 27 )
		temp[27] = input[41]; 
	else	if ( P42 == 27 )
		temp[27] = input[42]; 
	else	if ( P43 == 27 )
		temp[27] = input[43]; 
	else	if ( P44 == 27 )
		temp[27] = input[44]; 
	else	if ( P45 == 27 )
		temp[27] = input[45]; 
	else	if ( P46 == 27 )
		temp[27] = input[46]; 
	else	if ( P47 == 27 )
		temp[27] = input[47]; 
	else	if ( P48 == 27 )
		temp[27] = input[48]; 
	else	if ( P49 == 27 )
		temp[27] = input[49]; 
	else	if ( P50 == 27 )
		temp[27] = input[50]; 
	else	if ( P51 == 27 )
		temp[27] = input[51]; 
	else	if ( P52 == 27 )
		temp[27] = input[52]; 
	else	if ( P53 == 27 )
		temp[27] = input[53]; 
	else	if ( P54 == 27 )
		temp[27] = input[54]; 

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
	else	if ( P31 == 28 )
		temp[28] = input[31]; 
	else	if ( P32 == 28 )
		temp[28] = input[32]; 
	else	if ( P33 == 28 )
		temp[28] = input[33]; 
	else	if ( P34 == 28 )
		temp[28] = input[34]; 
	else	if ( P35 == 28 )
		temp[28] = input[35]; 
	else	if ( P36 == 28 )
		temp[28] = input[36]; 
	else	if ( P37 == 28 )
		temp[28] = input[37]; 
	else	if ( P38 == 28 )
		temp[28] = input[38]; 
	else	if ( P39 == 28 )
		temp[28] = input[39]; 
	else	if ( P40 == 28 )
		temp[28] = input[40]; 
	else	if ( P41 == 28 )
		temp[28] = input[41]; 
	else	if ( P42 == 28 )
		temp[28] = input[42]; 
	else	if ( P43 == 28 )
		temp[28] = input[43]; 
	else	if ( P44 == 28 )
		temp[28] = input[44]; 
	else	if ( P45 == 28 )
		temp[28] = input[45]; 
	else	if ( P46 == 28 )
		temp[28] = input[46]; 
	else	if ( P47 == 28 )
		temp[28] = input[47]; 
	else	if ( P48 == 28 )
		temp[28] = input[48]; 
	else	if ( P49 == 28 )
		temp[28] = input[49]; 
	else	if ( P50 == 28 )
		temp[28] = input[50]; 
	else	if ( P51 == 28 )
		temp[28] = input[51]; 
	else	if ( P52 == 28 )
		temp[28] = input[52]; 
	else	if ( P53 == 28 )
		temp[28] = input[53]; 
	else	if ( P54 == 28 )
		temp[28] = input[54]; 
	else	if ( P55 == 28 )
		temp[28] = input[55]; 
	else	if ( P56 == 28 )
		temp[28] = input[56]; 

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
	else	if ( P31 == 29 )
		temp[29] = input[31]; 
	else	if ( P32 == 29 )
		temp[29] = input[32]; 
	else	if ( P33 == 29 )
		temp[29] = input[33]; 
	else	if ( P34 == 29 )
		temp[29] = input[34]; 
	else	if ( P35 == 29 )
		temp[29] = input[35]; 
	else	if ( P36 == 29 )
		temp[29] = input[36]; 
	else	if ( P37 == 29 )
		temp[29] = input[37]; 
	else	if ( P38 == 29 )
		temp[29] = input[38]; 
	else	if ( P39 == 29 )
		temp[29] = input[39]; 
	else	if ( P40 == 29 )
		temp[29] = input[40]; 
	else	if ( P41 == 29 )
		temp[29] = input[41]; 
	else	if ( P42 == 29 )
		temp[29] = input[42]; 
	else	if ( P43 == 29 )
		temp[29] = input[43]; 
	else	if ( P44 == 29 )
		temp[29] = input[44]; 
	else	if ( P45 == 29 )
		temp[29] = input[45]; 
	else	if ( P46 == 29 )
		temp[29] = input[46]; 
	else	if ( P47 == 29 )
		temp[29] = input[47]; 
	else	if ( P48 == 29 )
		temp[29] = input[48]; 
	else	if ( P49 == 29 )
		temp[29] = input[49]; 
	else	if ( P50 == 29 )
		temp[29] = input[50]; 
	else	if ( P51 == 29 )
		temp[29] = input[51]; 
	else	if ( P52 == 29 )
		temp[29] = input[52]; 
	else	if ( P53 == 29 )
		temp[29] = input[53]; 
	else	if ( P54 == 29 )
		temp[29] = input[54]; 
	else	if ( P55 == 29 )
		temp[29] = input[55]; 
	else	if ( P56 == 29 )
		temp[29] = input[56]; 
	else	if ( P57 == 29 )
		temp[29] = input[57]; 
	else	if ( P58 == 29 )
		temp[29] = input[58]; 

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
	else	if ( P31 == 30 )
		temp[30] = input[31]; 
	else	if ( P32 == 30 )
		temp[30] = input[32]; 
	else	if ( P33 == 30 )
		temp[30] = input[33]; 
	else	if ( P34 == 30 )
		temp[30] = input[34]; 
	else	if ( P35 == 30 )
		temp[30] = input[35]; 
	else	if ( P36 == 30 )
		temp[30] = input[36]; 
	else	if ( P37 == 30 )
		temp[30] = input[37]; 
	else	if ( P38 == 30 )
		temp[30] = input[38]; 
	else	if ( P39 == 30 )
		temp[30] = input[39]; 
	else	if ( P40 == 30 )
		temp[30] = input[40]; 
	else	if ( P41 == 30 )
		temp[30] = input[41]; 
	else	if ( P42 == 30 )
		temp[30] = input[42]; 
	else	if ( P43 == 30 )
		temp[30] = input[43]; 
	else	if ( P44 == 30 )
		temp[30] = input[44]; 
	else	if ( P45 == 30 )
		temp[30] = input[45]; 
	else	if ( P46 == 30 )
		temp[30] = input[46]; 
	else	if ( P47 == 30 )
		temp[30] = input[47]; 
	else	if ( P48 == 30 )
		temp[30] = input[48]; 
	else	if ( P49 == 30 )
		temp[30] = input[49]; 
	else	if ( P50 == 30 )
		temp[30] = input[50]; 
	else	if ( P51 == 30 )
		temp[30] = input[51]; 
	else	if ( P52 == 30 )
		temp[30] = input[52]; 
	else	if ( P53 == 30 )
		temp[30] = input[53]; 
	else	if ( P54 == 30 )
		temp[30] = input[54]; 
	else	if ( P55 == 30 )
		temp[30] = input[55]; 
	else	if ( P56 == 30 )
		temp[30] = input[56]; 
	else	if ( P57 == 30 )
		temp[30] = input[57]; 
	else	if ( P58 == 30 )
		temp[30] = input[58]; 
	else	if ( P59 == 30 )
		temp[30] = input[59]; 
	else	if ( P60 == 30 )
		temp[30] = input[60]; 

	if ( P1 == 31 )
		temp[31] = input[1]; 
	else	if ( P3 == 31 )
		temp[31] = input[3]; 
	else	if ( P5 == 31 )
		temp[31] = input[5]; 
	else	if ( P7 == 31 )
		temp[31] = input[7]; 
	else	if ( P9 == 31 )
		temp[31] = input[9]; 
	else	if ( P11 == 31 )
		temp[31] = input[11]; 
	else	if ( P13 == 31 )
		temp[31] = input[13]; 
	else	if ( P15 == 31 )
		temp[31] = input[15]; 
	else	if ( P17 == 31 )
		temp[31] = input[17]; 
	else	if ( P19 == 31 )
		temp[31] = input[19]; 
	else	if ( P21 == 31 )
		temp[31] = input[21]; 
	else	if ( P23 == 31 )
		temp[31] = input[23]; 
	else	if ( P25 == 31 )
		temp[31] = input[25]; 
	else	if ( P27 == 31 )
		temp[31] = input[27]; 
	else	if ( P29 == 31 )
		temp[31] = input[29]; 
	else	if ( P31 == 31 )
		temp[31] = input[31]; 
	else	if ( P32 == 31 )
		temp[31] = input[32]; 
	else	if ( P33 == 31 )
		temp[31] = input[33]; 
	else	if ( P34 == 31 )
		temp[31] = input[34]; 
	else	if ( P35 == 31 )
		temp[31] = input[35]; 
	else	if ( P36 == 31 )
		temp[31] = input[36]; 
	else	if ( P37 == 31 )
		temp[31] = input[37]; 
	else	if ( P38 == 31 )
		temp[31] = input[38]; 
	else	if ( P39 == 31 )
		temp[31] = input[39]; 
	else	if ( P40 == 31 )
		temp[31] = input[40]; 
	else	if ( P41 == 31 )
		temp[31] = input[41]; 
	else	if ( P42 == 31 )
		temp[31] = input[42]; 
	else	if ( P43 == 31 )
		temp[31] = input[43]; 
	else	if ( P44 == 31 )
		temp[31] = input[44]; 
	else	if ( P45 == 31 )
		temp[31] = input[45]; 
	else	if ( P46 == 31 )
		temp[31] = input[46]; 
	else	if ( P47 == 31 )
		temp[31] = input[47]; 
	else	if ( P48 == 31 )
		temp[31] = input[48]; 
	else	if ( P49 == 31 )
		temp[31] = input[49]; 
	else	if ( P50 == 31 )
		temp[31] = input[50]; 
	else	if ( P51 == 31 )
		temp[31] = input[51]; 
	else	if ( P52 == 31 )
		temp[31] = input[52]; 
	else	if ( P53 == 31 )
		temp[31] = input[53]; 
	else	if ( P54 == 31 )
		temp[31] = input[54]; 
	else	if ( P55 == 31 )
		temp[31] = input[55]; 
	else	if ( P56 == 31 )
		temp[31] = input[56]; 
	else	if ( P57 == 31 )
		temp[31] = input[57]; 
	else	if ( P58 == 31 )
		temp[31] = input[58]; 
	else	if ( P59 == 31 )
		temp[31] = input[59]; 
	else	if ( P60 == 31 )
		temp[31] = input[60]; 
	else	if ( P61 == 31 )
		temp[31] = input[61]; 
	else	if ( P62 == 31 )
		temp[31] = input[62]; 

	if ( P1 == 32 )
		temp[32] = input[1]; 
	else	if ( P3 == 32 )
		temp[32] = input[3]; 
	else	if ( P5 == 32 )
		temp[32] = input[5]; 
	else	if ( P7 == 32 )
		temp[32] = input[7]; 
	else	if ( P9 == 32 )
		temp[32] = input[9]; 
	else	if ( P11 == 32 )
		temp[32] = input[11]; 
	else	if ( P13 == 32 )
		temp[32] = input[13]; 
	else	if ( P15 == 32 )
		temp[32] = input[15]; 
	else	if ( P17 == 32 )
		temp[32] = input[17]; 
	else	if ( P19 == 32 )
		temp[32] = input[19]; 
	else	if ( P21 == 32 )
		temp[32] = input[21]; 
	else	if ( P23 == 32 )
		temp[32] = input[23]; 
	else	if ( P25 == 32 )
		temp[32] = input[25]; 
	else	if ( P27 == 32 )
		temp[32] = input[27]; 
	else	if ( P29 == 32 )
		temp[32] = input[29]; 
	else	if ( P31 == 32 )
		temp[32] = input[31]; 
	else	if ( P32 == 32 )
		temp[32] = input[32]; 
	else	if ( P33 == 32 )
		temp[32] = input[33]; 
	else	if ( P34 == 32 )
		temp[32] = input[34]; 
	else	if ( P35 == 32 )
		temp[32] = input[35]; 
	else	if ( P36 == 32 )
		temp[32] = input[36]; 
	else	if ( P37 == 32 )
		temp[32] = input[37]; 
	else	if ( P38 == 32 )
		temp[32] = input[38]; 
	else	if ( P39 == 32 )
		temp[32] = input[39]; 
	else	if ( P40 == 32 )
		temp[32] = input[40]; 
	else	if ( P41 == 32 )
		temp[32] = input[41]; 
	else	if ( P42 == 32 )
		temp[32] = input[42]; 
	else	if ( P43 == 32 )
		temp[32] = input[43]; 
	else	if ( P44 == 32 )
		temp[32] = input[44]; 
	else	if ( P45 == 32 )
		temp[32] = input[45]; 
	else	if ( P46 == 32 )
		temp[32] = input[46]; 
	else	if ( P47 == 32 )
		temp[32] = input[47]; 
	else	if ( P48 == 32 )
		temp[32] = input[48]; 
	else	if ( P49 == 32 )
		temp[32] = input[49]; 
	else	if ( P50 == 32 )
		temp[32] = input[50]; 
	else	if ( P51 == 32 )
		temp[32] = input[51]; 
	else	if ( P52 == 32 )
		temp[32] = input[52]; 
	else	if ( P53 == 32 )
		temp[32] = input[53]; 
	else	if ( P54 == 32 )
		temp[32] = input[54]; 
	else	if ( P55 == 32 )
		temp[32] = input[55]; 
	else	if ( P56 == 32 )
		temp[32] = input[56]; 
	else	if ( P57 == 32 )
		temp[32] = input[57]; 
	else	if ( P58 == 32 )
		temp[32] = input[58]; 
	else	if ( P59 == 32 )
		temp[32] = input[59]; 
	else	if ( P60 == 32 )
		temp[32] = input[60]; 
	else	if ( P61 == 32 )
		temp[32] = input[61]; 
	else	if ( P62 == 32 )
		temp[32] = input[62]; 

	if ( P1 == 33 )
		temp[33] = input[1]; 
	else	if ( P3 == 33 )
		temp[33] = input[3]; 
	else	if ( P5 == 33 )
		temp[33] = input[5]; 
	else	if ( P7 == 33 )
		temp[33] = input[7]; 
	else	if ( P9 == 33 )
		temp[33] = input[9]; 
	else	if ( P11 == 33 )
		temp[33] = input[11]; 
	else	if ( P13 == 33 )
		temp[33] = input[13]; 
	else	if ( P15 == 33 )
		temp[33] = input[15]; 
	else	if ( P17 == 33 )
		temp[33] = input[17]; 
	else	if ( P19 == 33 )
		temp[33] = input[19]; 
	else	if ( P21 == 33 )
		temp[33] = input[21]; 
	else	if ( P23 == 33 )
		temp[33] = input[23]; 
	else	if ( P25 == 33 )
		temp[33] = input[25]; 
	else	if ( P27 == 33 )
		temp[33] = input[27]; 
	else	if ( P29 == 33 )
		temp[33] = input[29]; 
	else	if ( P31 == 33 )
		temp[33] = input[31]; 
	else	if ( P33 == 33 )
		temp[33] = input[33]; 
	else	if ( P34 == 33 )
		temp[33] = input[34]; 
	else	if ( P35 == 33 )
		temp[33] = input[35]; 
	else	if ( P36 == 33 )
		temp[33] = input[36]; 
	else	if ( P37 == 33 )
		temp[33] = input[37]; 
	else	if ( P38 == 33 )
		temp[33] = input[38]; 
	else	if ( P39 == 33 )
		temp[33] = input[39]; 
	else	if ( P40 == 33 )
		temp[33] = input[40]; 
	else	if ( P41 == 33 )
		temp[33] = input[41]; 
	else	if ( P42 == 33 )
		temp[33] = input[42]; 
	else	if ( P43 == 33 )
		temp[33] = input[43]; 
	else	if ( P44 == 33 )
		temp[33] = input[44]; 
	else	if ( P45 == 33 )
		temp[33] = input[45]; 
	else	if ( P46 == 33 )
		temp[33] = input[46]; 
	else	if ( P47 == 33 )
		temp[33] = input[47]; 
	else	if ( P48 == 33 )
		temp[33] = input[48]; 
	else	if ( P49 == 33 )
		temp[33] = input[49]; 
	else	if ( P50 == 33 )
		temp[33] = input[50]; 
	else	if ( P51 == 33 )
		temp[33] = input[51]; 
	else	if ( P52 == 33 )
		temp[33] = input[52]; 
	else	if ( P53 == 33 )
		temp[33] = input[53]; 
	else	if ( P54 == 33 )
		temp[33] = input[54]; 
	else	if ( P55 == 33 )
		temp[33] = input[55]; 
	else	if ( P56 == 33 )
		temp[33] = input[56]; 
	else	if ( P57 == 33 )
		temp[33] = input[57]; 
	else	if ( P58 == 33 )
		temp[33] = input[58]; 
	else	if ( P59 == 33 )
		temp[33] = input[59]; 
	else	if ( P60 == 33 )
		temp[33] = input[60]; 
	else	if ( P61 == 33 )
		temp[33] = input[61]; 
	else	if ( P62 == 33 )
		temp[33] = input[62]; 

	if ( P1 == 34 )
		temp[34] = input[1]; 
	else	if ( P3 == 34 )
		temp[34] = input[3]; 
	else	if ( P5 == 34 )
		temp[34] = input[5]; 
	else	if ( P7 == 34 )
		temp[34] = input[7]; 
	else	if ( P9 == 34 )
		temp[34] = input[9]; 
	else	if ( P11 == 34 )
		temp[34] = input[11]; 
	else	if ( P13 == 34 )
		temp[34] = input[13]; 
	else	if ( P15 == 34 )
		temp[34] = input[15]; 
	else	if ( P17 == 34 )
		temp[34] = input[17]; 
	else	if ( P19 == 34 )
		temp[34] = input[19]; 
	else	if ( P21 == 34 )
		temp[34] = input[21]; 
	else	if ( P23 == 34 )
		temp[34] = input[23]; 
	else	if ( P25 == 34 )
		temp[34] = input[25]; 
	else	if ( P27 == 34 )
		temp[34] = input[27]; 
	else	if ( P29 == 34 )
		temp[34] = input[29]; 
	else	if ( P31 == 34 )
		temp[34] = input[31]; 
	else	if ( P33 == 34 )
		temp[34] = input[33]; 
	else	if ( P34 == 34 )
		temp[34] = input[34]; 
	else	if ( P35 == 34 )
		temp[34] = input[35]; 
	else	if ( P36 == 34 )
		temp[34] = input[36]; 
	else	if ( P37 == 34 )
		temp[34] = input[37]; 
	else	if ( P38 == 34 )
		temp[34] = input[38]; 
	else	if ( P39 == 34 )
		temp[34] = input[39]; 
	else	if ( P40 == 34 )
		temp[34] = input[40]; 
	else	if ( P41 == 34 )
		temp[34] = input[41]; 
	else	if ( P42 == 34 )
		temp[34] = input[42]; 
	else	if ( P43 == 34 )
		temp[34] = input[43]; 
	else	if ( P44 == 34 )
		temp[34] = input[44]; 
	else	if ( P45 == 34 )
		temp[34] = input[45]; 
	else	if ( P46 == 34 )
		temp[34] = input[46]; 
	else	if ( P47 == 34 )
		temp[34] = input[47]; 
	else	if ( P48 == 34 )
		temp[34] = input[48]; 
	else	if ( P49 == 34 )
		temp[34] = input[49]; 
	else	if ( P50 == 34 )
		temp[34] = input[50]; 
	else	if ( P51 == 34 )
		temp[34] = input[51]; 
	else	if ( P52 == 34 )
		temp[34] = input[52]; 
	else	if ( P53 == 34 )
		temp[34] = input[53]; 
	else	if ( P54 == 34 )
		temp[34] = input[54]; 
	else	if ( P55 == 34 )
		temp[34] = input[55]; 
	else	if ( P56 == 34 )
		temp[34] = input[56]; 
	else	if ( P57 == 34 )
		temp[34] = input[57]; 
	else	if ( P58 == 34 )
		temp[34] = input[58]; 
	else	if ( P59 == 34 )
		temp[34] = input[59]; 
	else	if ( P60 == 34 )
		temp[34] = input[60]; 
	else	if ( P61 == 34 )
		temp[34] = input[61]; 
	else	if ( P62 == 34 )
		temp[34] = input[62]; 

	if ( P1 == 35 )
		temp[35] = input[1]; 
	else	if ( P3 == 35 )
		temp[35] = input[3]; 
	else	if ( P5 == 35 )
		temp[35] = input[5]; 
	else	if ( P7 == 35 )
		temp[35] = input[7]; 
	else	if ( P9 == 35 )
		temp[35] = input[9]; 
	else	if ( P11 == 35 )
		temp[35] = input[11]; 
	else	if ( P13 == 35 )
		temp[35] = input[13]; 
	else	if ( P15 == 35 )
		temp[35] = input[15]; 
	else	if ( P17 == 35 )
		temp[35] = input[17]; 
	else	if ( P19 == 35 )
		temp[35] = input[19]; 
	else	if ( P21 == 35 )
		temp[35] = input[21]; 
	else	if ( P23 == 35 )
		temp[35] = input[23]; 
	else	if ( P25 == 35 )
		temp[35] = input[25]; 
	else	if ( P27 == 35 )
		temp[35] = input[27]; 
	else	if ( P29 == 35 )
		temp[35] = input[29]; 
	else	if ( P31 == 35 )
		temp[35] = input[31]; 
	else	if ( P33 == 35 )
		temp[35] = input[33]; 
	else	if ( P35 == 35 )
		temp[35] = input[35]; 
	else	if ( P36 == 35 )
		temp[35] = input[36]; 
	else	if ( P37 == 35 )
		temp[35] = input[37]; 
	else	if ( P38 == 35 )
		temp[35] = input[38]; 
	else	if ( P39 == 35 )
		temp[35] = input[39]; 
	else	if ( P40 == 35 )
		temp[35] = input[40]; 
	else	if ( P41 == 35 )
		temp[35] = input[41]; 
	else	if ( P42 == 35 )
		temp[35] = input[42]; 
	else	if ( P43 == 35 )
		temp[35] = input[43]; 
	else	if ( P44 == 35 )
		temp[35] = input[44]; 
	else	if ( P45 == 35 )
		temp[35] = input[45]; 
	else	if ( P46 == 35 )
		temp[35] = input[46]; 
	else	if ( P47 == 35 )
		temp[35] = input[47]; 
	else	if ( P48 == 35 )
		temp[35] = input[48]; 
	else	if ( P49 == 35 )
		temp[35] = input[49]; 
	else	if ( P50 == 35 )
		temp[35] = input[50]; 
	else	if ( P51 == 35 )
		temp[35] = input[51]; 
	else	if ( P52 == 35 )
		temp[35] = input[52]; 
	else	if ( P53 == 35 )
		temp[35] = input[53]; 
	else	if ( P54 == 35 )
		temp[35] = input[54]; 
	else	if ( P55 == 35 )
		temp[35] = input[55]; 
	else	if ( P56 == 35 )
		temp[35] = input[56]; 
	else	if ( P57 == 35 )
		temp[35] = input[57]; 
	else	if ( P58 == 35 )
		temp[35] = input[58]; 
	else	if ( P59 == 35 )
		temp[35] = input[59]; 
	else	if ( P60 == 35 )
		temp[35] = input[60]; 
	else	if ( P61 == 35 )
		temp[35] = input[61]; 
	else	if ( P62 == 35 )
		temp[35] = input[62]; 

	if ( P1 == 36 )
		temp[36] = input[1]; 
	else	if ( P3 == 36 )
		temp[36] = input[3]; 
	else	if ( P5 == 36 )
		temp[36] = input[5]; 
	else	if ( P7 == 36 )
		temp[36] = input[7]; 
	else	if ( P9 == 36 )
		temp[36] = input[9]; 
	else	if ( P11 == 36 )
		temp[36] = input[11]; 
	else	if ( P13 == 36 )
		temp[36] = input[13]; 
	else	if ( P15 == 36 )
		temp[36] = input[15]; 
	else	if ( P17 == 36 )
		temp[36] = input[17]; 
	else	if ( P19 == 36 )
		temp[36] = input[19]; 
	else	if ( P21 == 36 )
		temp[36] = input[21]; 
	else	if ( P23 == 36 )
		temp[36] = input[23]; 
	else	if ( P25 == 36 )
		temp[36] = input[25]; 
	else	if ( P27 == 36 )
		temp[36] = input[27]; 
	else	if ( P29 == 36 )
		temp[36] = input[29]; 
	else	if ( P31 == 36 )
		temp[36] = input[31]; 
	else	if ( P33 == 36 )
		temp[36] = input[33]; 
	else	if ( P35 == 36 )
		temp[36] = input[35]; 
	else	if ( P36 == 36 )
		temp[36] = input[36]; 
	else	if ( P37 == 36 )
		temp[36] = input[37]; 
	else	if ( P38 == 36 )
		temp[36] = input[38]; 
	else	if ( P39 == 36 )
		temp[36] = input[39]; 
	else	if ( P40 == 36 )
		temp[36] = input[40]; 
	else	if ( P41 == 36 )
		temp[36] = input[41]; 
	else	if ( P42 == 36 )
		temp[36] = input[42]; 
	else	if ( P43 == 36 )
		temp[36] = input[43]; 
	else	if ( P44 == 36 )
		temp[36] = input[44]; 
	else	if ( P45 == 36 )
		temp[36] = input[45]; 
	else	if ( P46 == 36 )
		temp[36] = input[46]; 
	else	if ( P47 == 36 )
		temp[36] = input[47]; 
	else	if ( P48 == 36 )
		temp[36] = input[48]; 
	else	if ( P49 == 36 )
		temp[36] = input[49]; 
	else	if ( P50 == 36 )
		temp[36] = input[50]; 
	else	if ( P51 == 36 )
		temp[36] = input[51]; 
	else	if ( P52 == 36 )
		temp[36] = input[52]; 
	else	if ( P53 == 36 )
		temp[36] = input[53]; 
	else	if ( P54 == 36 )
		temp[36] = input[54]; 
	else	if ( P55 == 36 )
		temp[36] = input[55]; 
	else	if ( P56 == 36 )
		temp[36] = input[56]; 
	else	if ( P57 == 36 )
		temp[36] = input[57]; 
	else	if ( P58 == 36 )
		temp[36] = input[58]; 
	else	if ( P59 == 36 )
		temp[36] = input[59]; 
	else	if ( P60 == 36 )
		temp[36] = input[60]; 
	else	if ( P61 == 36 )
		temp[36] = input[61]; 
	else	if ( P62 == 36 )
		temp[36] = input[62]; 

	if ( P1 == 37 )
		temp[37] = input[1]; 
	else	if ( P3 == 37 )
		temp[37] = input[3]; 
	else	if ( P5 == 37 )
		temp[37] = input[5]; 
	else	if ( P7 == 37 )
		temp[37] = input[7]; 
	else	if ( P9 == 37 )
		temp[37] = input[9]; 
	else	if ( P11 == 37 )
		temp[37] = input[11]; 
	else	if ( P13 == 37 )
		temp[37] = input[13]; 
	else	if ( P15 == 37 )
		temp[37] = input[15]; 
	else	if ( P17 == 37 )
		temp[37] = input[17]; 
	else	if ( P19 == 37 )
		temp[37] = input[19]; 
	else	if ( P21 == 37 )
		temp[37] = input[21]; 
	else	if ( P23 == 37 )
		temp[37] = input[23]; 
	else	if ( P25 == 37 )
		temp[37] = input[25]; 
	else	if ( P27 == 37 )
		temp[37] = input[27]; 
	else	if ( P29 == 37 )
		temp[37] = input[29]; 
	else	if ( P31 == 37 )
		temp[37] = input[31]; 
	else	if ( P33 == 37 )
		temp[37] = input[33]; 
	else	if ( P35 == 37 )
		temp[37] = input[35]; 
	else	if ( P37 == 37 )
		temp[37] = input[37]; 
	else	if ( P38 == 37 )
		temp[37] = input[38]; 
	else	if ( P39 == 37 )
		temp[37] = input[39]; 
	else	if ( P40 == 37 )
		temp[37] = input[40]; 
	else	if ( P41 == 37 )
		temp[37] = input[41]; 
	else	if ( P42 == 37 )
		temp[37] = input[42]; 
	else	if ( P43 == 37 )
		temp[37] = input[43]; 
	else	if ( P44 == 37 )
		temp[37] = input[44]; 
	else	if ( P45 == 37 )
		temp[37] = input[45]; 
	else	if ( P46 == 37 )
		temp[37] = input[46]; 
	else	if ( P47 == 37 )
		temp[37] = input[47]; 
	else	if ( P48 == 37 )
		temp[37] = input[48]; 
	else	if ( P49 == 37 )
		temp[37] = input[49]; 
	else	if ( P50 == 37 )
		temp[37] = input[50]; 
	else	if ( P51 == 37 )
		temp[37] = input[51]; 
	else	if ( P52 == 37 )
		temp[37] = input[52]; 
	else	if ( P53 == 37 )
		temp[37] = input[53]; 
	else	if ( P54 == 37 )
		temp[37] = input[54]; 
	else	if ( P55 == 37 )
		temp[37] = input[55]; 
	else	if ( P56 == 37 )
		temp[37] = input[56]; 
	else	if ( P57 == 37 )
		temp[37] = input[57]; 
	else	if ( P58 == 37 )
		temp[37] = input[58]; 
	else	if ( P59 == 37 )
		temp[37] = input[59]; 
	else	if ( P60 == 37 )
		temp[37] = input[60]; 
	else	if ( P61 == 37 )
		temp[37] = input[61]; 
	else	if ( P62 == 37 )
		temp[37] = input[62]; 

	if ( P1 == 38 )
		temp[38] = input[1]; 
	else	if ( P3 == 38 )
		temp[38] = input[3]; 
	else	if ( P5 == 38 )
		temp[38] = input[5]; 
	else	if ( P7 == 38 )
		temp[38] = input[7]; 
	else	if ( P9 == 38 )
		temp[38] = input[9]; 
	else	if ( P11 == 38 )
		temp[38] = input[11]; 
	else	if ( P13 == 38 )
		temp[38] = input[13]; 
	else	if ( P15 == 38 )
		temp[38] = input[15]; 
	else	if ( P17 == 38 )
		temp[38] = input[17]; 
	else	if ( P19 == 38 )
		temp[38] = input[19]; 
	else	if ( P21 == 38 )
		temp[38] = input[21]; 
	else	if ( P23 == 38 )
		temp[38] = input[23]; 
	else	if ( P25 == 38 )
		temp[38] = input[25]; 
	else	if ( P27 == 38 )
		temp[38] = input[27]; 
	else	if ( P29 == 38 )
		temp[38] = input[29]; 
	else	if ( P31 == 38 )
		temp[38] = input[31]; 
	else	if ( P33 == 38 )
		temp[38] = input[33]; 
	else	if ( P35 == 38 )
		temp[38] = input[35]; 
	else	if ( P37 == 38 )
		temp[38] = input[37]; 
	else	if ( P38 == 38 )
		temp[38] = input[38]; 
	else	if ( P39 == 38 )
		temp[38] = input[39]; 
	else	if ( P40 == 38 )
		temp[38] = input[40]; 
	else	if ( P41 == 38 )
		temp[38] = input[41]; 
	else	if ( P42 == 38 )
		temp[38] = input[42]; 
	else	if ( P43 == 38 )
		temp[38] = input[43]; 
	else	if ( P44 == 38 )
		temp[38] = input[44]; 
	else	if ( P45 == 38 )
		temp[38] = input[45]; 
	else	if ( P46 == 38 )
		temp[38] = input[46]; 
	else	if ( P47 == 38 )
		temp[38] = input[47]; 
	else	if ( P48 == 38 )
		temp[38] = input[48]; 
	else	if ( P49 == 38 )
		temp[38] = input[49]; 
	else	if ( P50 == 38 )
		temp[38] = input[50]; 
	else	if ( P51 == 38 )
		temp[38] = input[51]; 
	else	if ( P52 == 38 )
		temp[38] = input[52]; 
	else	if ( P53 == 38 )
		temp[38] = input[53]; 
	else	if ( P54 == 38 )
		temp[38] = input[54]; 
	else	if ( P55 == 38 )
		temp[38] = input[55]; 
	else	if ( P56 == 38 )
		temp[38] = input[56]; 
	else	if ( P57 == 38 )
		temp[38] = input[57]; 
	else	if ( P58 == 38 )
		temp[38] = input[58]; 
	else	if ( P59 == 38 )
		temp[38] = input[59]; 
	else	if ( P60 == 38 )
		temp[38] = input[60]; 
	else	if ( P61 == 38 )
		temp[38] = input[61]; 
	else	if ( P62 == 38 )
		temp[38] = input[62]; 

	if ( P1 == 39 )
		temp[39] = input[1]; 
	else	if ( P3 == 39 )
		temp[39] = input[3]; 
	else	if ( P5 == 39 )
		temp[39] = input[5]; 
	else	if ( P7 == 39 )
		temp[39] = input[7]; 
	else	if ( P9 == 39 )
		temp[39] = input[9]; 
	else	if ( P11 == 39 )
		temp[39] = input[11]; 
	else	if ( P13 == 39 )
		temp[39] = input[13]; 
	else	if ( P15 == 39 )
		temp[39] = input[15]; 
	else	if ( P17 == 39 )
		temp[39] = input[17]; 
	else	if ( P19 == 39 )
		temp[39] = input[19]; 
	else	if ( P21 == 39 )
		temp[39] = input[21]; 
	else	if ( P23 == 39 )
		temp[39] = input[23]; 
	else	if ( P25 == 39 )
		temp[39] = input[25]; 
	else	if ( P27 == 39 )
		temp[39] = input[27]; 
	else	if ( P29 == 39 )
		temp[39] = input[29]; 
	else	if ( P31 == 39 )
		temp[39] = input[31]; 
	else	if ( P33 == 39 )
		temp[39] = input[33]; 
	else	if ( P35 == 39 )
		temp[39] = input[35]; 
	else	if ( P37 == 39 )
		temp[39] = input[37]; 
	else	if ( P39 == 39 )
		temp[39] = input[39]; 
	else	if ( P40 == 39 )
		temp[39] = input[40]; 
	else	if ( P41 == 39 )
		temp[39] = input[41]; 
	else	if ( P42 == 39 )
		temp[39] = input[42]; 
	else	if ( P43 == 39 )
		temp[39] = input[43]; 
	else	if ( P44 == 39 )
		temp[39] = input[44]; 
	else	if ( P45 == 39 )
		temp[39] = input[45]; 
	else	if ( P46 == 39 )
		temp[39] = input[46]; 
	else	if ( P47 == 39 )
		temp[39] = input[47]; 
	else	if ( P48 == 39 )
		temp[39] = input[48]; 
	else	if ( P49 == 39 )
		temp[39] = input[49]; 
	else	if ( P50 == 39 )
		temp[39] = input[50]; 
	else	if ( P51 == 39 )
		temp[39] = input[51]; 
	else	if ( P52 == 39 )
		temp[39] = input[52]; 
	else	if ( P53 == 39 )
		temp[39] = input[53]; 
	else	if ( P54 == 39 )
		temp[39] = input[54]; 
	else	if ( P55 == 39 )
		temp[39] = input[55]; 
	else	if ( P56 == 39 )
		temp[39] = input[56]; 
	else	if ( P57 == 39 )
		temp[39] = input[57]; 
	else	if ( P58 == 39 )
		temp[39] = input[58]; 
	else	if ( P59 == 39 )
		temp[39] = input[59]; 
	else	if ( P60 == 39 )
		temp[39] = input[60]; 
	else	if ( P61 == 39 )
		temp[39] = input[61]; 
	else	if ( P62 == 39 )
		temp[39] = input[62]; 

	if ( P1 == 40 )
		temp[40] = input[1]; 
	else	if ( P3 == 40 )
		temp[40] = input[3]; 
	else	if ( P5 == 40 )
		temp[40] = input[5]; 
	else	if ( P7 == 40 )
		temp[40] = input[7]; 
	else	if ( P9 == 40 )
		temp[40] = input[9]; 
	else	if ( P11 == 40 )
		temp[40] = input[11]; 
	else	if ( P13 == 40 )
		temp[40] = input[13]; 
	else	if ( P15 == 40 )
		temp[40] = input[15]; 
	else	if ( P17 == 40 )
		temp[40] = input[17]; 
	else	if ( P19 == 40 )
		temp[40] = input[19]; 
	else	if ( P21 == 40 )
		temp[40] = input[21]; 
	else	if ( P23 == 40 )
		temp[40] = input[23]; 
	else	if ( P25 == 40 )
		temp[40] = input[25]; 
	else	if ( P27 == 40 )
		temp[40] = input[27]; 
	else	if ( P29 == 40 )
		temp[40] = input[29]; 
	else	if ( P31 == 40 )
		temp[40] = input[31]; 
	else	if ( P33 == 40 )
		temp[40] = input[33]; 
	else	if ( P35 == 40 )
		temp[40] = input[35]; 
	else	if ( P37 == 40 )
		temp[40] = input[37]; 
	else	if ( P39 == 40 )
		temp[40] = input[39]; 
	else	if ( P40 == 40 )
		temp[40] = input[40]; 
	else	if ( P41 == 40 )
		temp[40] = input[41]; 
	else	if ( P42 == 40 )
		temp[40] = input[42]; 
	else	if ( P43 == 40 )
		temp[40] = input[43]; 
	else	if ( P44 == 40 )
		temp[40] = input[44]; 
	else	if ( P45 == 40 )
		temp[40] = input[45]; 
	else	if ( P46 == 40 )
		temp[40] = input[46]; 
	else	if ( P47 == 40 )
		temp[40] = input[47]; 
	else	if ( P48 == 40 )
		temp[40] = input[48]; 
	else	if ( P49 == 40 )
		temp[40] = input[49]; 
	else	if ( P50 == 40 )
		temp[40] = input[50]; 
	else	if ( P51 == 40 )
		temp[40] = input[51]; 
	else	if ( P52 == 40 )
		temp[40] = input[52]; 
	else	if ( P53 == 40 )
		temp[40] = input[53]; 
	else	if ( P54 == 40 )
		temp[40] = input[54]; 
	else	if ( P55 == 40 )
		temp[40] = input[55]; 
	else	if ( P56 == 40 )
		temp[40] = input[56]; 
	else	if ( P57 == 40 )
		temp[40] = input[57]; 
	else	if ( P58 == 40 )
		temp[40] = input[58]; 
	else	if ( P59 == 40 )
		temp[40] = input[59]; 
	else	if ( P60 == 40 )
		temp[40] = input[60]; 
	else	if ( P61 == 40 )
		temp[40] = input[61]; 
	else	if ( P62 == 40 )
		temp[40] = input[62]; 

	if ( P1 == 41 )
		temp[41] = input[1]; 
	else	if ( P3 == 41 )
		temp[41] = input[3]; 
	else	if ( P5 == 41 )
		temp[41] = input[5]; 
	else	if ( P7 == 41 )
		temp[41] = input[7]; 
	else	if ( P9 == 41 )
		temp[41] = input[9]; 
	else	if ( P11 == 41 )
		temp[41] = input[11]; 
	else	if ( P13 == 41 )
		temp[41] = input[13]; 
	else	if ( P15 == 41 )
		temp[41] = input[15]; 
	else	if ( P17 == 41 )
		temp[41] = input[17]; 
	else	if ( P19 == 41 )
		temp[41] = input[19]; 
	else	if ( P21 == 41 )
		temp[41] = input[21]; 
	else	if ( P23 == 41 )
		temp[41] = input[23]; 
	else	if ( P25 == 41 )
		temp[41] = input[25]; 
	else	if ( P27 == 41 )
		temp[41] = input[27]; 
	else	if ( P29 == 41 )
		temp[41] = input[29]; 
	else	if ( P31 == 41 )
		temp[41] = input[31]; 
	else	if ( P33 == 41 )
		temp[41] = input[33]; 
	else	if ( P35 == 41 )
		temp[41] = input[35]; 
	else	if ( P37 == 41 )
		temp[41] = input[37]; 
	else	if ( P39 == 41 )
		temp[41] = input[39]; 
	else	if ( P41 == 41 )
		temp[41] = input[41]; 
	else	if ( P42 == 41 )
		temp[41] = input[42]; 
	else	if ( P43 == 41 )
		temp[41] = input[43]; 
	else	if ( P44 == 41 )
		temp[41] = input[44]; 
	else	if ( P45 == 41 )
		temp[41] = input[45]; 
	else	if ( P46 == 41 )
		temp[41] = input[46]; 
	else	if ( P47 == 41 )
		temp[41] = input[47]; 
	else	if ( P48 == 41 )
		temp[41] = input[48]; 
	else	if ( P49 == 41 )
		temp[41] = input[49]; 
	else	if ( P50 == 41 )
		temp[41] = input[50]; 
	else	if ( P51 == 41 )
		temp[41] = input[51]; 
	else	if ( P52 == 41 )
		temp[41] = input[52]; 
	else	if ( P53 == 41 )
		temp[41] = input[53]; 
	else	if ( P54 == 41 )
		temp[41] = input[54]; 
	else	if ( P55 == 41 )
		temp[41] = input[55]; 
	else	if ( P56 == 41 )
		temp[41] = input[56]; 
	else	if ( P57 == 41 )
		temp[41] = input[57]; 
	else	if ( P58 == 41 )
		temp[41] = input[58]; 
	else	if ( P59 == 41 )
		temp[41] = input[59]; 
	else	if ( P60 == 41 )
		temp[41] = input[60]; 
	else	if ( P61 == 41 )
		temp[41] = input[61]; 
	else	if ( P62 == 41 )
		temp[41] = input[62]; 

	if ( P1 == 42 )
		temp[42] = input[1]; 
	else	if ( P3 == 42 )
		temp[42] = input[3]; 
	else	if ( P5 == 42 )
		temp[42] = input[5]; 
	else	if ( P7 == 42 )
		temp[42] = input[7]; 
	else	if ( P9 == 42 )
		temp[42] = input[9]; 
	else	if ( P11 == 42 )
		temp[42] = input[11]; 
	else	if ( P13 == 42 )
		temp[42] = input[13]; 
	else	if ( P15 == 42 )
		temp[42] = input[15]; 
	else	if ( P17 == 42 )
		temp[42] = input[17]; 
	else	if ( P19 == 42 )
		temp[42] = input[19]; 
	else	if ( P21 == 42 )
		temp[42] = input[21]; 
	else	if ( P23 == 42 )
		temp[42] = input[23]; 
	else	if ( P25 == 42 )
		temp[42] = input[25]; 
	else	if ( P27 == 42 )
		temp[42] = input[27]; 
	else	if ( P29 == 42 )
		temp[42] = input[29]; 
	else	if ( P31 == 42 )
		temp[42] = input[31]; 
	else	if ( P33 == 42 )
		temp[42] = input[33]; 
	else	if ( P35 == 42 )
		temp[42] = input[35]; 
	else	if ( P37 == 42 )
		temp[42] = input[37]; 
	else	if ( P39 == 42 )
		temp[42] = input[39]; 
	else	if ( P41 == 42 )
		temp[42] = input[41]; 
	else	if ( P42 == 42 )
		temp[42] = input[42]; 
	else	if ( P43 == 42 )
		temp[42] = input[43]; 
	else	if ( P44 == 42 )
		temp[42] = input[44]; 
	else	if ( P45 == 42 )
		temp[42] = input[45]; 
	else	if ( P46 == 42 )
		temp[42] = input[46]; 
	else	if ( P47 == 42 )
		temp[42] = input[47]; 
	else	if ( P48 == 42 )
		temp[42] = input[48]; 
	else	if ( P49 == 42 )
		temp[42] = input[49]; 
	else	if ( P50 == 42 )
		temp[42] = input[50]; 
	else	if ( P51 == 42 )
		temp[42] = input[51]; 
	else	if ( P52 == 42 )
		temp[42] = input[52]; 
	else	if ( P53 == 42 )
		temp[42] = input[53]; 
	else	if ( P54 == 42 )
		temp[42] = input[54]; 
	else	if ( P55 == 42 )
		temp[42] = input[55]; 
	else	if ( P56 == 42 )
		temp[42] = input[56]; 
	else	if ( P57 == 42 )
		temp[42] = input[57]; 
	else	if ( P58 == 42 )
		temp[42] = input[58]; 
	else	if ( P59 == 42 )
		temp[42] = input[59]; 
	else	if ( P60 == 42 )
		temp[42] = input[60]; 
	else	if ( P61 == 42 )
		temp[42] = input[61]; 
	else	if ( P62 == 42 )
		temp[42] = input[62]; 

	if ( P1 == 43 )
		temp[43] = input[1]; 
	else	if ( P3 == 43 )
		temp[43] = input[3]; 
	else	if ( P5 == 43 )
		temp[43] = input[5]; 
	else	if ( P7 == 43 )
		temp[43] = input[7]; 
	else	if ( P9 == 43 )
		temp[43] = input[9]; 
	else	if ( P11 == 43 )
		temp[43] = input[11]; 
	else	if ( P13 == 43 )
		temp[43] = input[13]; 
	else	if ( P15 == 43 )
		temp[43] = input[15]; 
	else	if ( P17 == 43 )
		temp[43] = input[17]; 
	else	if ( P19 == 43 )
		temp[43] = input[19]; 
	else	if ( P21 == 43 )
		temp[43] = input[21]; 
	else	if ( P23 == 43 )
		temp[43] = input[23]; 
	else	if ( P25 == 43 )
		temp[43] = input[25]; 
	else	if ( P27 == 43 )
		temp[43] = input[27]; 
	else	if ( P29 == 43 )
		temp[43] = input[29]; 
	else	if ( P31 == 43 )
		temp[43] = input[31]; 
	else	if ( P33 == 43 )
		temp[43] = input[33]; 
	else	if ( P35 == 43 )
		temp[43] = input[35]; 
	else	if ( P37 == 43 )
		temp[43] = input[37]; 
	else	if ( P39 == 43 )
		temp[43] = input[39]; 
	else	if ( P41 == 43 )
		temp[43] = input[41]; 
	else	if ( P43 == 43 )
		temp[43] = input[43]; 
	else	if ( P44 == 43 )
		temp[43] = input[44]; 
	else	if ( P45 == 43 )
		temp[43] = input[45]; 
	else	if ( P46 == 43 )
		temp[43] = input[46]; 
	else	if ( P47 == 43 )
		temp[43] = input[47]; 
	else	if ( P48 == 43 )
		temp[43] = input[48]; 
	else	if ( P49 == 43 )
		temp[43] = input[49]; 
	else	if ( P50 == 43 )
		temp[43] = input[50]; 
	else	if ( P51 == 43 )
		temp[43] = input[51]; 
	else	if ( P52 == 43 )
		temp[43] = input[52]; 
	else	if ( P53 == 43 )
		temp[43] = input[53]; 
	else	if ( P54 == 43 )
		temp[43] = input[54]; 
	else	if ( P55 == 43 )
		temp[43] = input[55]; 
	else	if ( P56 == 43 )
		temp[43] = input[56]; 
	else	if ( P57 == 43 )
		temp[43] = input[57]; 
	else	if ( P58 == 43 )
		temp[43] = input[58]; 
	else	if ( P59 == 43 )
		temp[43] = input[59]; 
	else	if ( P60 == 43 )
		temp[43] = input[60]; 
	else	if ( P61 == 43 )
		temp[43] = input[61]; 
	else	if ( P62 == 43 )
		temp[43] = input[62]; 

	if ( P1 == 44 )
		temp[44] = input[1]; 
	else	if ( P3 == 44 )
		temp[44] = input[3]; 
	else	if ( P5 == 44 )
		temp[44] = input[5]; 
	else	if ( P7 == 44 )
		temp[44] = input[7]; 
	else	if ( P9 == 44 )
		temp[44] = input[9]; 
	else	if ( P11 == 44 )
		temp[44] = input[11]; 
	else	if ( P13 == 44 )
		temp[44] = input[13]; 
	else	if ( P15 == 44 )
		temp[44] = input[15]; 
	else	if ( P17 == 44 )
		temp[44] = input[17]; 
	else	if ( P19 == 44 )
		temp[44] = input[19]; 
	else	if ( P21 == 44 )
		temp[44] = input[21]; 
	else	if ( P23 == 44 )
		temp[44] = input[23]; 
	else	if ( P25 == 44 )
		temp[44] = input[25]; 
	else	if ( P27 == 44 )
		temp[44] = input[27]; 
	else	if ( P29 == 44 )
		temp[44] = input[29]; 
	else	if ( P31 == 44 )
		temp[44] = input[31]; 
	else	if ( P33 == 44 )
		temp[44] = input[33]; 
	else	if ( P35 == 44 )
		temp[44] = input[35]; 
	else	if ( P37 == 44 )
		temp[44] = input[37]; 
	else	if ( P39 == 44 )
		temp[44] = input[39]; 
	else	if ( P41 == 44 )
		temp[44] = input[41]; 
	else	if ( P43 == 44 )
		temp[44] = input[43]; 
	else	if ( P44 == 44 )
		temp[44] = input[44]; 
	else	if ( P45 == 44 )
		temp[44] = input[45]; 
	else	if ( P46 == 44 )
		temp[44] = input[46]; 
	else	if ( P47 == 44 )
		temp[44] = input[47]; 
	else	if ( P48 == 44 )
		temp[44] = input[48]; 
	else	if ( P49 == 44 )
		temp[44] = input[49]; 
	else	if ( P50 == 44 )
		temp[44] = input[50]; 
	else	if ( P51 == 44 )
		temp[44] = input[51]; 
	else	if ( P52 == 44 )
		temp[44] = input[52]; 
	else	if ( P53 == 44 )
		temp[44] = input[53]; 
	else	if ( P54 == 44 )
		temp[44] = input[54]; 
	else	if ( P55 == 44 )
		temp[44] = input[55]; 
	else	if ( P56 == 44 )
		temp[44] = input[56]; 
	else	if ( P57 == 44 )
		temp[44] = input[57]; 
	else	if ( P58 == 44 )
		temp[44] = input[58]; 
	else	if ( P59 == 44 )
		temp[44] = input[59]; 
	else	if ( P60 == 44 )
		temp[44] = input[60]; 
	else	if ( P61 == 44 )
		temp[44] = input[61]; 
	else	if ( P62 == 44 )
		temp[44] = input[62]; 

	if ( P1 == 45 )
		temp[45] = input[1]; 
	else	if ( P3 == 45 )
		temp[45] = input[3]; 
	else	if ( P5 == 45 )
		temp[45] = input[5]; 
	else	if ( P7 == 45 )
		temp[45] = input[7]; 
	else	if ( P9 == 45 )
		temp[45] = input[9]; 
	else	if ( P11 == 45 )
		temp[45] = input[11]; 
	else	if ( P13 == 45 )
		temp[45] = input[13]; 
	else	if ( P15 == 45 )
		temp[45] = input[15]; 
	else	if ( P17 == 45 )
		temp[45] = input[17]; 
	else	if ( P19 == 45 )
		temp[45] = input[19]; 
	else	if ( P21 == 45 )
		temp[45] = input[21]; 
	else	if ( P23 == 45 )
		temp[45] = input[23]; 
	else	if ( P25 == 45 )
		temp[45] = input[25]; 
	else	if ( P27 == 45 )
		temp[45] = input[27]; 
	else	if ( P29 == 45 )
		temp[45] = input[29]; 
	else	if ( P31 == 45 )
		temp[45] = input[31]; 
	else	if ( P33 == 45 )
		temp[45] = input[33]; 
	else	if ( P35 == 45 )
		temp[45] = input[35]; 
	else	if ( P37 == 45 )
		temp[45] = input[37]; 
	else	if ( P39 == 45 )
		temp[45] = input[39]; 
	else	if ( P41 == 45 )
		temp[45] = input[41]; 
	else	if ( P43 == 45 )
		temp[45] = input[43]; 
	else	if ( P45 == 45 )
		temp[45] = input[45]; 
	else	if ( P46 == 45 )
		temp[45] = input[46]; 
	else	if ( P47 == 45 )
		temp[45] = input[47]; 
	else	if ( P48 == 45 )
		temp[45] = input[48]; 
	else	if ( P49 == 45 )
		temp[45] = input[49]; 
	else	if ( P50 == 45 )
		temp[45] = input[50]; 
	else	if ( P51 == 45 )
		temp[45] = input[51]; 
	else	if ( P52 == 45 )
		temp[45] = input[52]; 
	else	if ( P53 == 45 )
		temp[45] = input[53]; 
	else	if ( P54 == 45 )
		temp[45] = input[54]; 
	else	if ( P55 == 45 )
		temp[45] = input[55]; 
	else	if ( P56 == 45 )
		temp[45] = input[56]; 
	else	if ( P57 == 45 )
		temp[45] = input[57]; 
	else	if ( P58 == 45 )
		temp[45] = input[58]; 
	else	if ( P59 == 45 )
		temp[45] = input[59]; 
	else	if ( P60 == 45 )
		temp[45] = input[60]; 
	else	if ( P61 == 45 )
		temp[45] = input[61]; 
	else	if ( P62 == 45 )
		temp[45] = input[62]; 

	if ( P1 == 46 )
		temp[46] = input[1]; 
	else	if ( P3 == 46 )
		temp[46] = input[3]; 
	else	if ( P5 == 46 )
		temp[46] = input[5]; 
	else	if ( P7 == 46 )
		temp[46] = input[7]; 
	else	if ( P9 == 46 )
		temp[46] = input[9]; 
	else	if ( P11 == 46 )
		temp[46] = input[11]; 
	else	if ( P13 == 46 )
		temp[46] = input[13]; 
	else	if ( P15 == 46 )
		temp[46] = input[15]; 
	else	if ( P17 == 46 )
		temp[46] = input[17]; 
	else	if ( P19 == 46 )
		temp[46] = input[19]; 
	else	if ( P21 == 46 )
		temp[46] = input[21]; 
	else	if ( P23 == 46 )
		temp[46] = input[23]; 
	else	if ( P25 == 46 )
		temp[46] = input[25]; 
	else	if ( P27 == 46 )
		temp[46] = input[27]; 
	else	if ( P29 == 46 )
		temp[46] = input[29]; 
	else	if ( P31 == 46 )
		temp[46] = input[31]; 
	else	if ( P33 == 46 )
		temp[46] = input[33]; 
	else	if ( P35 == 46 )
		temp[46] = input[35]; 
	else	if ( P37 == 46 )
		temp[46] = input[37]; 
	else	if ( P39 == 46 )
		temp[46] = input[39]; 
	else	if ( P41 == 46 )
		temp[46] = input[41]; 
	else	if ( P43 == 46 )
		temp[46] = input[43]; 
	else	if ( P45 == 46 )
		temp[46] = input[45]; 
	else	if ( P46 == 46 )
		temp[46] = input[46]; 
	else	if ( P47 == 46 )
		temp[46] = input[47]; 
	else	if ( P48 == 46 )
		temp[46] = input[48]; 
	else	if ( P49 == 46 )
		temp[46] = input[49]; 
	else	if ( P50 == 46 )
		temp[46] = input[50]; 
	else	if ( P51 == 46 )
		temp[46] = input[51]; 
	else	if ( P52 == 46 )
		temp[46] = input[52]; 
	else	if ( P53 == 46 )
		temp[46] = input[53]; 
	else	if ( P54 == 46 )
		temp[46] = input[54]; 
	else	if ( P55 == 46 )
		temp[46] = input[55]; 
	else	if ( P56 == 46 )
		temp[46] = input[56]; 
	else	if ( P57 == 46 )
		temp[46] = input[57]; 
	else	if ( P58 == 46 )
		temp[46] = input[58]; 
	else	if ( P59 == 46 )
		temp[46] = input[59]; 
	else	if ( P60 == 46 )
		temp[46] = input[60]; 
	else	if ( P61 == 46 )
		temp[46] = input[61]; 
	else	if ( P62 == 46 )
		temp[46] = input[62]; 

	if ( P1 == 47 )
		temp[47] = input[1]; 
	else	if ( P3 == 47 )
		temp[47] = input[3]; 
	else	if ( P5 == 47 )
		temp[47] = input[5]; 
	else	if ( P7 == 47 )
		temp[47] = input[7]; 
	else	if ( P9 == 47 )
		temp[47] = input[9]; 
	else	if ( P11 == 47 )
		temp[47] = input[11]; 
	else	if ( P13 == 47 )
		temp[47] = input[13]; 
	else	if ( P15 == 47 )
		temp[47] = input[15]; 
	else	if ( P17 == 47 )
		temp[47] = input[17]; 
	else	if ( P19 == 47 )
		temp[47] = input[19]; 
	else	if ( P21 == 47 )
		temp[47] = input[21]; 
	else	if ( P23 == 47 )
		temp[47] = input[23]; 
	else	if ( P25 == 47 )
		temp[47] = input[25]; 
	else	if ( P27 == 47 )
		temp[47] = input[27]; 
	else	if ( P29 == 47 )
		temp[47] = input[29]; 
	else	if ( P31 == 47 )
		temp[47] = input[31]; 
	else	if ( P33 == 47 )
		temp[47] = input[33]; 
	else	if ( P35 == 47 )
		temp[47] = input[35]; 
	else	if ( P37 == 47 )
		temp[47] = input[37]; 
	else	if ( P39 == 47 )
		temp[47] = input[39]; 
	else	if ( P41 == 47 )
		temp[47] = input[41]; 
	else	if ( P43 == 47 )
		temp[47] = input[43]; 
	else	if ( P45 == 47 )
		temp[47] = input[45]; 
	else	if ( P47 == 47 )
		temp[47] = input[47]; 
	else	if ( P48 == 47 )
		temp[47] = input[48]; 
	else	if ( P49 == 47 )
		temp[47] = input[49]; 
	else	if ( P50 == 47 )
		temp[47] = input[50]; 
	else	if ( P51 == 47 )
		temp[47] = input[51]; 
	else	if ( P52 == 47 )
		temp[47] = input[52]; 
	else	if ( P53 == 47 )
		temp[47] = input[53]; 
	else	if ( P54 == 47 )
		temp[47] = input[54]; 
	else	if ( P55 == 47 )
		temp[47] = input[55]; 
	else	if ( P56 == 47 )
		temp[47] = input[56]; 
	else	if ( P57 == 47 )
		temp[47] = input[57]; 
	else	if ( P58 == 47 )
		temp[47] = input[58]; 
	else	if ( P59 == 47 )
		temp[47] = input[59]; 
	else	if ( P60 == 47 )
		temp[47] = input[60]; 
	else	if ( P61 == 47 )
		temp[47] = input[61]; 
	else	if ( P62 == 47 )
		temp[47] = input[62]; 

	if ( P1 == 48 )
		temp[48] = input[1]; 
	else	if ( P3 == 48 )
		temp[48] = input[3]; 
	else	if ( P5 == 48 )
		temp[48] = input[5]; 
	else	if ( P7 == 48 )
		temp[48] = input[7]; 
	else	if ( P9 == 48 )
		temp[48] = input[9]; 
	else	if ( P11 == 48 )
		temp[48] = input[11]; 
	else	if ( P13 == 48 )
		temp[48] = input[13]; 
	else	if ( P15 == 48 )
		temp[48] = input[15]; 
	else	if ( P17 == 48 )
		temp[48] = input[17]; 
	else	if ( P19 == 48 )
		temp[48] = input[19]; 
	else	if ( P21 == 48 )
		temp[48] = input[21]; 
	else	if ( P23 == 48 )
		temp[48] = input[23]; 
	else	if ( P25 == 48 )
		temp[48] = input[25]; 
	else	if ( P27 == 48 )
		temp[48] = input[27]; 
	else	if ( P29 == 48 )
		temp[48] = input[29]; 
	else	if ( P31 == 48 )
		temp[48] = input[31]; 
	else	if ( P33 == 48 )
		temp[48] = input[33]; 
	else	if ( P35 == 48 )
		temp[48] = input[35]; 
	else	if ( P37 == 48 )
		temp[48] = input[37]; 
	else	if ( P39 == 48 )
		temp[48] = input[39]; 
	else	if ( P41 == 48 )
		temp[48] = input[41]; 
	else	if ( P43 == 48 )
		temp[48] = input[43]; 
	else	if ( P45 == 48 )
		temp[48] = input[45]; 
	else	if ( P47 == 48 )
		temp[48] = input[47]; 
	else	if ( P48 == 48 )
		temp[48] = input[48]; 
	else	if ( P49 == 48 )
		temp[48] = input[49]; 
	else	if ( P50 == 48 )
		temp[48] = input[50]; 
	else	if ( P51 == 48 )
		temp[48] = input[51]; 
	else	if ( P52 == 48 )
		temp[48] = input[52]; 
	else	if ( P53 == 48 )
		temp[48] = input[53]; 
	else	if ( P54 == 48 )
		temp[48] = input[54]; 
	else	if ( P55 == 48 )
		temp[48] = input[55]; 
	else	if ( P56 == 48 )
		temp[48] = input[56]; 
	else	if ( P57 == 48 )
		temp[48] = input[57]; 
	else	if ( P58 == 48 )
		temp[48] = input[58]; 
	else	if ( P59 == 48 )
		temp[48] = input[59]; 
	else	if ( P60 == 48 )
		temp[48] = input[60]; 
	else	if ( P61 == 48 )
		temp[48] = input[61]; 
	else	if ( P62 == 48 )
		temp[48] = input[62]; 

	if ( P1 == 49 )
		temp[49] = input[1]; 
	else	if ( P3 == 49 )
		temp[49] = input[3]; 
	else	if ( P5 == 49 )
		temp[49] = input[5]; 
	else	if ( P7 == 49 )
		temp[49] = input[7]; 
	else	if ( P9 == 49 )
		temp[49] = input[9]; 
	else	if ( P11 == 49 )
		temp[49] = input[11]; 
	else	if ( P13 == 49 )
		temp[49] = input[13]; 
	else	if ( P15 == 49 )
		temp[49] = input[15]; 
	else	if ( P17 == 49 )
		temp[49] = input[17]; 
	else	if ( P19 == 49 )
		temp[49] = input[19]; 
	else	if ( P21 == 49 )
		temp[49] = input[21]; 
	else	if ( P23 == 49 )
		temp[49] = input[23]; 
	else	if ( P25 == 49 )
		temp[49] = input[25]; 
	else	if ( P27 == 49 )
		temp[49] = input[27]; 
	else	if ( P29 == 49 )
		temp[49] = input[29]; 
	else	if ( P31 == 49 )
		temp[49] = input[31]; 
	else	if ( P33 == 49 )
		temp[49] = input[33]; 
	else	if ( P35 == 49 )
		temp[49] = input[35]; 
	else	if ( P37 == 49 )
		temp[49] = input[37]; 
	else	if ( P39 == 49 )
		temp[49] = input[39]; 
	else	if ( P41 == 49 )
		temp[49] = input[41]; 
	else	if ( P43 == 49 )
		temp[49] = input[43]; 
	else	if ( P45 == 49 )
		temp[49] = input[45]; 
	else	if ( P47 == 49 )
		temp[49] = input[47]; 
	else	if ( P49 == 49 )
		temp[49] = input[49]; 
	else	if ( P50 == 49 )
		temp[49] = input[50]; 
	else	if ( P51 == 49 )
		temp[49] = input[51]; 
	else	if ( P52 == 49 )
		temp[49] = input[52]; 
	else	if ( P53 == 49 )
		temp[49] = input[53]; 
	else	if ( P54 == 49 )
		temp[49] = input[54]; 
	else	if ( P55 == 49 )
		temp[49] = input[55]; 
	else	if ( P56 == 49 )
		temp[49] = input[56]; 
	else	if ( P57 == 49 )
		temp[49] = input[57]; 
	else	if ( P58 == 49 )
		temp[49] = input[58]; 
	else	if ( P59 == 49 )
		temp[49] = input[59]; 
	else	if ( P60 == 49 )
		temp[49] = input[60]; 
	else	if ( P61 == 49 )
		temp[49] = input[61]; 
	else	if ( P62 == 49 )
		temp[49] = input[62]; 

	if ( P1 == 50 )
		temp[50] = input[1]; 
	else	if ( P3 == 50 )
		temp[50] = input[3]; 
	else	if ( P5 == 50 )
		temp[50] = input[5]; 
	else	if ( P7 == 50 )
		temp[50] = input[7]; 
	else	if ( P9 == 50 )
		temp[50] = input[9]; 
	else	if ( P11 == 50 )
		temp[50] = input[11]; 
	else	if ( P13 == 50 )
		temp[50] = input[13]; 
	else	if ( P15 == 50 )
		temp[50] = input[15]; 
	else	if ( P17 == 50 )
		temp[50] = input[17]; 
	else	if ( P19 == 50 )
		temp[50] = input[19]; 
	else	if ( P21 == 50 )
		temp[50] = input[21]; 
	else	if ( P23 == 50 )
		temp[50] = input[23]; 
	else	if ( P25 == 50 )
		temp[50] = input[25]; 
	else	if ( P27 == 50 )
		temp[50] = input[27]; 
	else	if ( P29 == 50 )
		temp[50] = input[29]; 
	else	if ( P31 == 50 )
		temp[50] = input[31]; 
	else	if ( P33 == 50 )
		temp[50] = input[33]; 
	else	if ( P35 == 50 )
		temp[50] = input[35]; 
	else	if ( P37 == 50 )
		temp[50] = input[37]; 
	else	if ( P39 == 50 )
		temp[50] = input[39]; 
	else	if ( P41 == 50 )
		temp[50] = input[41]; 
	else	if ( P43 == 50 )
		temp[50] = input[43]; 
	else	if ( P45 == 50 )
		temp[50] = input[45]; 
	else	if ( P47 == 50 )
		temp[50] = input[47]; 
	else	if ( P49 == 50 )
		temp[50] = input[49]; 
	else	if ( P50 == 50 )
		temp[50] = input[50]; 
	else	if ( P51 == 50 )
		temp[50] = input[51]; 
	else	if ( P52 == 50 )
		temp[50] = input[52]; 
	else	if ( P53 == 50 )
		temp[50] = input[53]; 
	else	if ( P54 == 50 )
		temp[50] = input[54]; 
	else	if ( P55 == 50 )
		temp[50] = input[55]; 
	else	if ( P56 == 50 )
		temp[50] = input[56]; 
	else	if ( P57 == 50 )
		temp[50] = input[57]; 
	else	if ( P58 == 50 )
		temp[50] = input[58]; 
	else	if ( P59 == 50 )
		temp[50] = input[59]; 
	else	if ( P60 == 50 )
		temp[50] = input[60]; 
	else	if ( P61 == 50 )
		temp[50] = input[61]; 
	else	if ( P62 == 50 )
		temp[50] = input[62]; 

	if ( P1 == 51 )
		temp[51] = input[1]; 
	else	if ( P3 == 51 )
		temp[51] = input[3]; 
	else	if ( P5 == 51 )
		temp[51] = input[5]; 
	else	if ( P7 == 51 )
		temp[51] = input[7]; 
	else	if ( P9 == 51 )
		temp[51] = input[9]; 
	else	if ( P11 == 51 )
		temp[51] = input[11]; 
	else	if ( P13 == 51 )
		temp[51] = input[13]; 
	else	if ( P15 == 51 )
		temp[51] = input[15]; 
	else	if ( P17 == 51 )
		temp[51] = input[17]; 
	else	if ( P19 == 51 )
		temp[51] = input[19]; 
	else	if ( P21 == 51 )
		temp[51] = input[21]; 
	else	if ( P23 == 51 )
		temp[51] = input[23]; 
	else	if ( P25 == 51 )
		temp[51] = input[25]; 
	else	if ( P27 == 51 )
		temp[51] = input[27]; 
	else	if ( P29 == 51 )
		temp[51] = input[29]; 
	else	if ( P31 == 51 )
		temp[51] = input[31]; 
	else	if ( P33 == 51 )
		temp[51] = input[33]; 
	else	if ( P35 == 51 )
		temp[51] = input[35]; 
	else	if ( P37 == 51 )
		temp[51] = input[37]; 
	else	if ( P39 == 51 )
		temp[51] = input[39]; 
	else	if ( P41 == 51 )
		temp[51] = input[41]; 
	else	if ( P43 == 51 )
		temp[51] = input[43]; 
	else	if ( P45 == 51 )
		temp[51] = input[45]; 
	else	if ( P47 == 51 )
		temp[51] = input[47]; 
	else	if ( P49 == 51 )
		temp[51] = input[49]; 
	else	if ( P51 == 51 )
		temp[51] = input[51]; 
	else	if ( P52 == 51 )
		temp[51] = input[52]; 
	else	if ( P53 == 51 )
		temp[51] = input[53]; 
	else	if ( P54 == 51 )
		temp[51] = input[54]; 
	else	if ( P55 == 51 )
		temp[51] = input[55]; 
	else	if ( P56 == 51 )
		temp[51] = input[56]; 
	else	if ( P57 == 51 )
		temp[51] = input[57]; 
	else	if ( P58 == 51 )
		temp[51] = input[58]; 
	else	if ( P59 == 51 )
		temp[51] = input[59]; 
	else	if ( P60 == 51 )
		temp[51] = input[60]; 
	else	if ( P61 == 51 )
		temp[51] = input[61]; 
	else	if ( P62 == 51 )
		temp[51] = input[62]; 

	if ( P1 == 52 )
		temp[52] = input[1]; 
	else	if ( P3 == 52 )
		temp[52] = input[3]; 
	else	if ( P5 == 52 )
		temp[52] = input[5]; 
	else	if ( P7 == 52 )
		temp[52] = input[7]; 
	else	if ( P9 == 52 )
		temp[52] = input[9]; 
	else	if ( P11 == 52 )
		temp[52] = input[11]; 
	else	if ( P13 == 52 )
		temp[52] = input[13]; 
	else	if ( P15 == 52 )
		temp[52] = input[15]; 
	else	if ( P17 == 52 )
		temp[52] = input[17]; 
	else	if ( P19 == 52 )
		temp[52] = input[19]; 
	else	if ( P21 == 52 )
		temp[52] = input[21]; 
	else	if ( P23 == 52 )
		temp[52] = input[23]; 
	else	if ( P25 == 52 )
		temp[52] = input[25]; 
	else	if ( P27 == 52 )
		temp[52] = input[27]; 
	else	if ( P29 == 52 )
		temp[52] = input[29]; 
	else	if ( P31 == 52 )
		temp[52] = input[31]; 
	else	if ( P33 == 52 )
		temp[52] = input[33]; 
	else	if ( P35 == 52 )
		temp[52] = input[35]; 
	else	if ( P37 == 52 )
		temp[52] = input[37]; 
	else	if ( P39 == 52 )
		temp[52] = input[39]; 
	else	if ( P41 == 52 )
		temp[52] = input[41]; 
	else	if ( P43 == 52 )
		temp[52] = input[43]; 
	else	if ( P45 == 52 )
		temp[52] = input[45]; 
	else	if ( P47 == 52 )
		temp[52] = input[47]; 
	else	if ( P49 == 52 )
		temp[52] = input[49]; 
	else	if ( P51 == 52 )
		temp[52] = input[51]; 
	else	if ( P52 == 52 )
		temp[52] = input[52]; 
	else	if ( P53 == 52 )
		temp[52] = input[53]; 
	else	if ( P54 == 52 )
		temp[52] = input[54]; 
	else	if ( P55 == 52 )
		temp[52] = input[55]; 
	else	if ( P56 == 52 )
		temp[52] = input[56]; 
	else	if ( P57 == 52 )
		temp[52] = input[57]; 
	else	if ( P58 == 52 )
		temp[52] = input[58]; 
	else	if ( P59 == 52 )
		temp[52] = input[59]; 
	else	if ( P60 == 52 )
		temp[52] = input[60]; 
	else	if ( P61 == 52 )
		temp[52] = input[61]; 
	else	if ( P62 == 52 )
		temp[52] = input[62]; 

	if ( P1 == 53 )
		temp[53] = input[1]; 
	else	if ( P3 == 53 )
		temp[53] = input[3]; 
	else	if ( P5 == 53 )
		temp[53] = input[5]; 
	else	if ( P7 == 53 )
		temp[53] = input[7]; 
	else	if ( P9 == 53 )
		temp[53] = input[9]; 
	else	if ( P11 == 53 )
		temp[53] = input[11]; 
	else	if ( P13 == 53 )
		temp[53] = input[13]; 
	else	if ( P15 == 53 )
		temp[53] = input[15]; 
	else	if ( P17 == 53 )
		temp[53] = input[17]; 
	else	if ( P19 == 53 )
		temp[53] = input[19]; 
	else	if ( P21 == 53 )
		temp[53] = input[21]; 
	else	if ( P23 == 53 )
		temp[53] = input[23]; 
	else	if ( P25 == 53 )
		temp[53] = input[25]; 
	else	if ( P27 == 53 )
		temp[53] = input[27]; 
	else	if ( P29 == 53 )
		temp[53] = input[29]; 
	else	if ( P31 == 53 )
		temp[53] = input[31]; 
	else	if ( P33 == 53 )
		temp[53] = input[33]; 
	else	if ( P35 == 53 )
		temp[53] = input[35]; 
	else	if ( P37 == 53 )
		temp[53] = input[37]; 
	else	if ( P39 == 53 )
		temp[53] = input[39]; 
	else	if ( P41 == 53 )
		temp[53] = input[41]; 
	else	if ( P43 == 53 )
		temp[53] = input[43]; 
	else	if ( P45 == 53 )
		temp[53] = input[45]; 
	else	if ( P47 == 53 )
		temp[53] = input[47]; 
	else	if ( P49 == 53 )
		temp[53] = input[49]; 
	else	if ( P51 == 53 )
		temp[53] = input[51]; 
	else	if ( P53 == 53 )
		temp[53] = input[53]; 
	else	if ( P54 == 53 )
		temp[53] = input[54]; 
	else	if ( P55 == 53 )
		temp[53] = input[55]; 
	else	if ( P56 == 53 )
		temp[53] = input[56]; 
	else	if ( P57 == 53 )
		temp[53] = input[57]; 
	else	if ( P58 == 53 )
		temp[53] = input[58]; 
	else	if ( P59 == 53 )
		temp[53] = input[59]; 
	else	if ( P60 == 53 )
		temp[53] = input[60]; 
	else	if ( P61 == 53 )
		temp[53] = input[61]; 
	else	if ( P62 == 53 )
		temp[53] = input[62]; 

	if ( P1 == 54 )
		temp[54] = input[1]; 
	else	if ( P3 == 54 )
		temp[54] = input[3]; 
	else	if ( P5 == 54 )
		temp[54] = input[5]; 
	else	if ( P7 == 54 )
		temp[54] = input[7]; 
	else	if ( P9 == 54 )
		temp[54] = input[9]; 
	else	if ( P11 == 54 )
		temp[54] = input[11]; 
	else	if ( P13 == 54 )
		temp[54] = input[13]; 
	else	if ( P15 == 54 )
		temp[54] = input[15]; 
	else	if ( P17 == 54 )
		temp[54] = input[17]; 
	else	if ( P19 == 54 )
		temp[54] = input[19]; 
	else	if ( P21 == 54 )
		temp[54] = input[21]; 
	else	if ( P23 == 54 )
		temp[54] = input[23]; 
	else	if ( P25 == 54 )
		temp[54] = input[25]; 
	else	if ( P27 == 54 )
		temp[54] = input[27]; 
	else	if ( P29 == 54 )
		temp[54] = input[29]; 
	else	if ( P31 == 54 )
		temp[54] = input[31]; 
	else	if ( P33 == 54 )
		temp[54] = input[33]; 
	else	if ( P35 == 54 )
		temp[54] = input[35]; 
	else	if ( P37 == 54 )
		temp[54] = input[37]; 
	else	if ( P39 == 54 )
		temp[54] = input[39]; 
	else	if ( P41 == 54 )
		temp[54] = input[41]; 
	else	if ( P43 == 54 )
		temp[54] = input[43]; 
	else	if ( P45 == 54 )
		temp[54] = input[45]; 
	else	if ( P47 == 54 )
		temp[54] = input[47]; 
	else	if ( P49 == 54 )
		temp[54] = input[49]; 
	else	if ( P51 == 54 )
		temp[54] = input[51]; 
	else	if ( P53 == 54 )
		temp[54] = input[53]; 
	else	if ( P54 == 54 )
		temp[54] = input[54]; 
	else	if ( P55 == 54 )
		temp[54] = input[55]; 
	else	if ( P56 == 54 )
		temp[54] = input[56]; 
	else	if ( P57 == 54 )
		temp[54] = input[57]; 
	else	if ( P58 == 54 )
		temp[54] = input[58]; 
	else	if ( P59 == 54 )
		temp[54] = input[59]; 
	else	if ( P60 == 54 )
		temp[54] = input[60]; 
	else	if ( P61 == 54 )
		temp[54] = input[61]; 
	else	if ( P62 == 54 )
		temp[54] = input[62]; 

	if ( P1 == 55 )
		temp[55] = input[1]; 
	else	if ( P3 == 55 )
		temp[55] = input[3]; 
	else	if ( P5 == 55 )
		temp[55] = input[5]; 
	else	if ( P7 == 55 )
		temp[55] = input[7]; 
	else	if ( P9 == 55 )
		temp[55] = input[9]; 
	else	if ( P11 == 55 )
		temp[55] = input[11]; 
	else	if ( P13 == 55 )
		temp[55] = input[13]; 
	else	if ( P15 == 55 )
		temp[55] = input[15]; 
	else	if ( P17 == 55 )
		temp[55] = input[17]; 
	else	if ( P19 == 55 )
		temp[55] = input[19]; 
	else	if ( P21 == 55 )
		temp[55] = input[21]; 
	else	if ( P23 == 55 )
		temp[55] = input[23]; 
	else	if ( P25 == 55 )
		temp[55] = input[25]; 
	else	if ( P27 == 55 )
		temp[55] = input[27]; 
	else	if ( P29 == 55 )
		temp[55] = input[29]; 
	else	if ( P31 == 55 )
		temp[55] = input[31]; 
	else	if ( P33 == 55 )
		temp[55] = input[33]; 
	else	if ( P35 == 55 )
		temp[55] = input[35]; 
	else	if ( P37 == 55 )
		temp[55] = input[37]; 
	else	if ( P39 == 55 )
		temp[55] = input[39]; 
	else	if ( P41 == 55 )
		temp[55] = input[41]; 
	else	if ( P43 == 55 )
		temp[55] = input[43]; 
	else	if ( P45 == 55 )
		temp[55] = input[45]; 
	else	if ( P47 == 55 )
		temp[55] = input[47]; 
	else	if ( P49 == 55 )
		temp[55] = input[49]; 
	else	if ( P51 == 55 )
		temp[55] = input[51]; 
	else	if ( P53 == 55 )
		temp[55] = input[53]; 
	else	if ( P55 == 55 )
		temp[55] = input[55]; 
	else	if ( P56 == 55 )
		temp[55] = input[56]; 
	else	if ( P57 == 55 )
		temp[55] = input[57]; 
	else	if ( P58 == 55 )
		temp[55] = input[58]; 
	else	if ( P59 == 55 )
		temp[55] = input[59]; 
	else	if ( P60 == 55 )
		temp[55] = input[60]; 
	else	if ( P61 == 55 )
		temp[55] = input[61]; 
	else	if ( P62 == 55 )
		temp[55] = input[62]; 

	if ( P1 == 56 )
		temp[56] = input[1]; 
	else	if ( P3 == 56 )
		temp[56] = input[3]; 
	else	if ( P5 == 56 )
		temp[56] = input[5]; 
	else	if ( P7 == 56 )
		temp[56] = input[7]; 
	else	if ( P9 == 56 )
		temp[56] = input[9]; 
	else	if ( P11 == 56 )
		temp[56] = input[11]; 
	else	if ( P13 == 56 )
		temp[56] = input[13]; 
	else	if ( P15 == 56 )
		temp[56] = input[15]; 
	else	if ( P17 == 56 )
		temp[56] = input[17]; 
	else	if ( P19 == 56 )
		temp[56] = input[19]; 
	else	if ( P21 == 56 )
		temp[56] = input[21]; 
	else	if ( P23 == 56 )
		temp[56] = input[23]; 
	else	if ( P25 == 56 )
		temp[56] = input[25]; 
	else	if ( P27 == 56 )
		temp[56] = input[27]; 
	else	if ( P29 == 56 )
		temp[56] = input[29]; 
	else	if ( P31 == 56 )
		temp[56] = input[31]; 
	else	if ( P33 == 56 )
		temp[56] = input[33]; 
	else	if ( P35 == 56 )
		temp[56] = input[35]; 
	else	if ( P37 == 56 )
		temp[56] = input[37]; 
	else	if ( P39 == 56 )
		temp[56] = input[39]; 
	else	if ( P41 == 56 )
		temp[56] = input[41]; 
	else	if ( P43 == 56 )
		temp[56] = input[43]; 
	else	if ( P45 == 56 )
		temp[56] = input[45]; 
	else	if ( P47 == 56 )
		temp[56] = input[47]; 
	else	if ( P49 == 56 )
		temp[56] = input[49]; 
	else	if ( P51 == 56 )
		temp[56] = input[51]; 
	else	if ( P53 == 56 )
		temp[56] = input[53]; 
	else	if ( P55 == 56 )
		temp[56] = input[55]; 
	else	if ( P56 == 56 )
		temp[56] = input[56]; 
	else	if ( P57 == 56 )
		temp[56] = input[57]; 
	else	if ( P58 == 56 )
		temp[56] = input[58]; 
	else	if ( P59 == 56 )
		temp[56] = input[59]; 
	else	if ( P60 == 56 )
		temp[56] = input[60]; 
	else	if ( P61 == 56 )
		temp[56] = input[61]; 
	else	if ( P62 == 56 )
		temp[56] = input[62]; 

	if ( P1 == 57 )
		temp[57] = input[1]; 
	else	if ( P3 == 57 )
		temp[57] = input[3]; 
	else	if ( P5 == 57 )
		temp[57] = input[5]; 
	else	if ( P7 == 57 )
		temp[57] = input[7]; 
	else	if ( P9 == 57 )
		temp[57] = input[9]; 
	else	if ( P11 == 57 )
		temp[57] = input[11]; 
	else	if ( P13 == 57 )
		temp[57] = input[13]; 
	else	if ( P15 == 57 )
		temp[57] = input[15]; 
	else	if ( P17 == 57 )
		temp[57] = input[17]; 
	else	if ( P19 == 57 )
		temp[57] = input[19]; 
	else	if ( P21 == 57 )
		temp[57] = input[21]; 
	else	if ( P23 == 57 )
		temp[57] = input[23]; 
	else	if ( P25 == 57 )
		temp[57] = input[25]; 
	else	if ( P27 == 57 )
		temp[57] = input[27]; 
	else	if ( P29 == 57 )
		temp[57] = input[29]; 
	else	if ( P31 == 57 )
		temp[57] = input[31]; 
	else	if ( P33 == 57 )
		temp[57] = input[33]; 
	else	if ( P35 == 57 )
		temp[57] = input[35]; 
	else	if ( P37 == 57 )
		temp[57] = input[37]; 
	else	if ( P39 == 57 )
		temp[57] = input[39]; 
	else	if ( P41 == 57 )
		temp[57] = input[41]; 
	else	if ( P43 == 57 )
		temp[57] = input[43]; 
	else	if ( P45 == 57 )
		temp[57] = input[45]; 
	else	if ( P47 == 57 )
		temp[57] = input[47]; 
	else	if ( P49 == 57 )
		temp[57] = input[49]; 
	else	if ( P51 == 57 )
		temp[57] = input[51]; 
	else	if ( P53 == 57 )
		temp[57] = input[53]; 
	else	if ( P55 == 57 )
		temp[57] = input[55]; 
	else	if ( P57 == 57 )
		temp[57] = input[57]; 
	else	if ( P58 == 57 )
		temp[57] = input[58]; 
	else	if ( P59 == 57 )
		temp[57] = input[59]; 
	else	if ( P60 == 57 )
		temp[57] = input[60]; 
	else	if ( P61 == 57 )
		temp[57] = input[61]; 
	else	if ( P62 == 57 )
		temp[57] = input[62]; 

	if ( P1 == 58 )
		temp[58] = input[1]; 
	else	if ( P3 == 58 )
		temp[58] = input[3]; 
	else	if ( P5 == 58 )
		temp[58] = input[5]; 
	else	if ( P7 == 58 )
		temp[58] = input[7]; 
	else	if ( P9 == 58 )
		temp[58] = input[9]; 
	else	if ( P11 == 58 )
		temp[58] = input[11]; 
	else	if ( P13 == 58 )
		temp[58] = input[13]; 
	else	if ( P15 == 58 )
		temp[58] = input[15]; 
	else	if ( P17 == 58 )
		temp[58] = input[17]; 
	else	if ( P19 == 58 )
		temp[58] = input[19]; 
	else	if ( P21 == 58 )
		temp[58] = input[21]; 
	else	if ( P23 == 58 )
		temp[58] = input[23]; 
	else	if ( P25 == 58 )
		temp[58] = input[25]; 
	else	if ( P27 == 58 )
		temp[58] = input[27]; 
	else	if ( P29 == 58 )
		temp[58] = input[29]; 
	else	if ( P31 == 58 )
		temp[58] = input[31]; 
	else	if ( P33 == 58 )
		temp[58] = input[33]; 
	else	if ( P35 == 58 )
		temp[58] = input[35]; 
	else	if ( P37 == 58 )
		temp[58] = input[37]; 
	else	if ( P39 == 58 )
		temp[58] = input[39]; 
	else	if ( P41 == 58 )
		temp[58] = input[41]; 
	else	if ( P43 == 58 )
		temp[58] = input[43]; 
	else	if ( P45 == 58 )
		temp[58] = input[45]; 
	else	if ( P47 == 58 )
		temp[58] = input[47]; 
	else	if ( P49 == 58 )
		temp[58] = input[49]; 
	else	if ( P51 == 58 )
		temp[58] = input[51]; 
	else	if ( P53 == 58 )
		temp[58] = input[53]; 
	else	if ( P55 == 58 )
		temp[58] = input[55]; 
	else	if ( P57 == 58 )
		temp[58] = input[57]; 
	else	if ( P58 == 58 )
		temp[58] = input[58]; 
	else	if ( P59 == 58 )
		temp[58] = input[59]; 
	else	if ( P60 == 58 )
		temp[58] = input[60]; 
	else	if ( P61 == 58 )
		temp[58] = input[61]; 
	else	if ( P62 == 58 )
		temp[58] = input[62]; 

	if ( P1 == 59 )
		temp[59] = input[1]; 
	else	if ( P3 == 59 )
		temp[59] = input[3]; 
	else	if ( P5 == 59 )
		temp[59] = input[5]; 
	else	if ( P7 == 59 )
		temp[59] = input[7]; 
	else	if ( P9 == 59 )
		temp[59] = input[9]; 
	else	if ( P11 == 59 )
		temp[59] = input[11]; 
	else	if ( P13 == 59 )
		temp[59] = input[13]; 
	else	if ( P15 == 59 )
		temp[59] = input[15]; 
	else	if ( P17 == 59 )
		temp[59] = input[17]; 
	else	if ( P19 == 59 )
		temp[59] = input[19]; 
	else	if ( P21 == 59 )
		temp[59] = input[21]; 
	else	if ( P23 == 59 )
		temp[59] = input[23]; 
	else	if ( P25 == 59 )
		temp[59] = input[25]; 
	else	if ( P27 == 59 )
		temp[59] = input[27]; 
	else	if ( P29 == 59 )
		temp[59] = input[29]; 
	else	if ( P31 == 59 )
		temp[59] = input[31]; 
	else	if ( P33 == 59 )
		temp[59] = input[33]; 
	else	if ( P35 == 59 )
		temp[59] = input[35]; 
	else	if ( P37 == 59 )
		temp[59] = input[37]; 
	else	if ( P39 == 59 )
		temp[59] = input[39]; 
	else	if ( P41 == 59 )
		temp[59] = input[41]; 
	else	if ( P43 == 59 )
		temp[59] = input[43]; 
	else	if ( P45 == 59 )
		temp[59] = input[45]; 
	else	if ( P47 == 59 )
		temp[59] = input[47]; 
	else	if ( P49 == 59 )
		temp[59] = input[49]; 
	else	if ( P51 == 59 )
		temp[59] = input[51]; 
	else	if ( P53 == 59 )
		temp[59] = input[53]; 
	else	if ( P55 == 59 )
		temp[59] = input[55]; 
	else	if ( P57 == 59 )
		temp[59] = input[57]; 
	else	if ( P59 == 59 )
		temp[59] = input[59]; 
	else	if ( P60 == 59 )
		temp[59] = input[60]; 
	else	if ( P61 == 59 )
		temp[59] = input[61]; 
	else	if ( P62 == 59 )
		temp[59] = input[62]; 

	if ( P1 == 60 )
		temp[60] = input[1]; 
	else	if ( P3 == 60 )
		temp[60] = input[3]; 
	else	if ( P5 == 60 )
		temp[60] = input[5]; 
	else	if ( P7 == 60 )
		temp[60] = input[7]; 
	else	if ( P9 == 60 )
		temp[60] = input[9]; 
	else	if ( P11 == 60 )
		temp[60] = input[11]; 
	else	if ( P13 == 60 )
		temp[60] = input[13]; 
	else	if ( P15 == 60 )
		temp[60] = input[15]; 
	else	if ( P17 == 60 )
		temp[60] = input[17]; 
	else	if ( P19 == 60 )
		temp[60] = input[19]; 
	else	if ( P21 == 60 )
		temp[60] = input[21]; 
	else	if ( P23 == 60 )
		temp[60] = input[23]; 
	else	if ( P25 == 60 )
		temp[60] = input[25]; 
	else	if ( P27 == 60 )
		temp[60] = input[27]; 
	else	if ( P29 == 60 )
		temp[60] = input[29]; 
	else	if ( P31 == 60 )
		temp[60] = input[31]; 
	else	if ( P33 == 60 )
		temp[60] = input[33]; 
	else	if ( P35 == 60 )
		temp[60] = input[35]; 
	else	if ( P37 == 60 )
		temp[60] = input[37]; 
	else	if ( P39 == 60 )
		temp[60] = input[39]; 
	else	if ( P41 == 60 )
		temp[60] = input[41]; 
	else	if ( P43 == 60 )
		temp[60] = input[43]; 
	else	if ( P45 == 60 )
		temp[60] = input[45]; 
	else	if ( P47 == 60 )
		temp[60] = input[47]; 
	else	if ( P49 == 60 )
		temp[60] = input[49]; 
	else	if ( P51 == 60 )
		temp[60] = input[51]; 
	else	if ( P53 == 60 )
		temp[60] = input[53]; 
	else	if ( P55 == 60 )
		temp[60] = input[55]; 
	else	if ( P57 == 60 )
		temp[60] = input[57]; 
	else	if ( P59 == 60 )
		temp[60] = input[59]; 
	else	if ( P60 == 60 )
		temp[60] = input[60]; 
	else	if ( P61 == 60 )
		temp[60] = input[61]; 
	else	if ( P62 == 60 )
		temp[60] = input[62]; 

	if ( P1 == 61 )
		temp[61] = input[1]; 
	else	if ( P3 == 61 )
		temp[61] = input[3]; 
	else	if ( P5 == 61 )
		temp[61] = input[5]; 
	else	if ( P7 == 61 )
		temp[61] = input[7]; 
	else	if ( P9 == 61 )
		temp[61] = input[9]; 
	else	if ( P11 == 61 )
		temp[61] = input[11]; 
	else	if ( P13 == 61 )
		temp[61] = input[13]; 
	else	if ( P15 == 61 )
		temp[61] = input[15]; 
	else	if ( P17 == 61 )
		temp[61] = input[17]; 
	else	if ( P19 == 61 )
		temp[61] = input[19]; 
	else	if ( P21 == 61 )
		temp[61] = input[21]; 
	else	if ( P23 == 61 )
		temp[61] = input[23]; 
	else	if ( P25 == 61 )
		temp[61] = input[25]; 
	else	if ( P27 == 61 )
		temp[61] = input[27]; 
	else	if ( P29 == 61 )
		temp[61] = input[29]; 
	else	if ( P31 == 61 )
		temp[61] = input[31]; 
	else	if ( P33 == 61 )
		temp[61] = input[33]; 
	else	if ( P35 == 61 )
		temp[61] = input[35]; 
	else	if ( P37 == 61 )
		temp[61] = input[37]; 
	else	if ( P39 == 61 )
		temp[61] = input[39]; 
	else	if ( P41 == 61 )
		temp[61] = input[41]; 
	else	if ( P43 == 61 )
		temp[61] = input[43]; 
	else	if ( P45 == 61 )
		temp[61] = input[45]; 
	else	if ( P47 == 61 )
		temp[61] = input[47]; 
	else	if ( P49 == 61 )
		temp[61] = input[49]; 
	else	if ( P51 == 61 )
		temp[61] = input[51]; 
	else	if ( P53 == 61 )
		temp[61] = input[53]; 
	else	if ( P55 == 61 )
		temp[61] = input[55]; 
	else	if ( P57 == 61 )
		temp[61] = input[57]; 
	else	if ( P59 == 61 )
		temp[61] = input[59]; 
	else	if ( P61 == 61 )
		temp[61] = input[61]; 
	else	if ( P62 == 61 )
		temp[61] = input[62]; 

	if ( P1 == 62 )
		temp[62] = input[1]; 
	else	if ( P3 == 62 )
		temp[62] = input[3]; 
	else	if ( P5 == 62 )
		temp[62] = input[5]; 
	else	if ( P7 == 62 )
		temp[62] = input[7]; 
	else	if ( P9 == 62 )
		temp[62] = input[9]; 
	else	if ( P11 == 62 )
		temp[62] = input[11]; 
	else	if ( P13 == 62 )
		temp[62] = input[13]; 
	else	if ( P15 == 62 )
		temp[62] = input[15]; 
	else	if ( P17 == 62 )
		temp[62] = input[17]; 
	else	if ( P19 == 62 )
		temp[62] = input[19]; 
	else	if ( P21 == 62 )
		temp[62] = input[21]; 
	else	if ( P23 == 62 )
		temp[62] = input[23]; 
	else	if ( P25 == 62 )
		temp[62] = input[25]; 
	else	if ( P27 == 62 )
		temp[62] = input[27]; 
	else	if ( P29 == 62 )
		temp[62] = input[29]; 
	else	if ( P31 == 62 )
		temp[62] = input[31]; 
	else	if ( P33 == 62 )
		temp[62] = input[33]; 
	else	if ( P35 == 62 )
		temp[62] = input[35]; 
	else	if ( P37 == 62 )
		temp[62] = input[37]; 
	else	if ( P39 == 62 )
		temp[62] = input[39]; 
	else	if ( P41 == 62 )
		temp[62] = input[41]; 
	else	if ( P43 == 62 )
		temp[62] = input[43]; 
	else	if ( P45 == 62 )
		temp[62] = input[45]; 
	else	if ( P47 == 62 )
		temp[62] = input[47]; 
	else	if ( P49 == 62 )
		temp[62] = input[49]; 
	else	if ( P51 == 62 )
		temp[62] = input[51]; 
	else	if ( P53 == 62 )
		temp[62] = input[53]; 
	else	if ( P55 == 62 )
		temp[62] = input[55]; 
	else	if ( P57 == 62 )
		temp[62] = input[57]; 
	else	if ( P59 == 62 )
		temp[62] = input[59]; 
	else	if ( P61 == 62 )
		temp[62] = input[61]; 
	else	if ( P62 == 62 )
		temp[62] = input[62]; 


// ON AJUSTE LES SORTIE EN FONCTION DE FB

	if (fb == 0){ 
		output[0] = temp[31]; 
		output[1] = temp[32]; 
		output[2] = temp[33]; 
		output[3] = temp[34]; 
		output[4] = temp[35]; 
		output[5] = temp[36]; 
		output[6] = temp[37]; 
		output[7] = temp[38]; 
		output[8] = temp[39]; 
		output[9] = temp[40]; 
		output[10] = temp[41]; 
		output[11] = temp[42]; 
		output[12] = temp[43]; 
		output[13] = temp[44]; 
		output[14] = temp[45]; 
		output[15] = temp[46]; 
		output[16] = temp[47]; 
		output[17] = temp[48]; 
		output[18] = temp[49]; 
		output[19] = temp[50]; 
		output[20] = temp[51]; 
		output[21] = temp[52]; 
		output[22] = temp[53]; 
		output[23] = temp[54]; 
		output[24] = temp[55]; 
		output[25] = temp[56]; 
		output[26] = temp[57]; 
		output[27] = temp[58]; 
		output[28] = temp[59]; 
		output[29] = temp[60]; 
		output[30] = temp[61]; 
		output[31] = temp[62]; 
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
		output[16] = temp[16]; 
		output[17] = temp[17]; 
		output[18] = temp[18]; 
		output[19] = temp[19]; 
		output[20] = temp[20]; 
		output[21] = temp[21]; 
		output[22] = temp[22]; 
		output[23] = temp[23]; 
		output[24] = temp[24]; 
		output[25] = temp[25]; 
		output[26] = temp[26]; 
		output[27] = temp[27]; 
		output[28] = temp[28]; 
		output[29] = temp[29]; 
		output[30] = temp[30]; 
		output[31] = temp[31]; 
	} 
} 
