 
#define LLR_BITS		8
#define LLR_MAXV    	(+127)
#define LLR_MINV    	(-127)
#define MAX_VAL	    	(+127)

#define PAR 			1

#define LLR 			sc_bigint<LLR_BITS>
#define BIT 			sc_biguint<1>
#define TYPE_LLRS   	sc_bigint<PAR * LLR_BITS>
#define TYPE_BITS   	sc_biguint<PAR>

#define _DEPTH       5

#define COUNTER      sc_uint<_DEPTH>
