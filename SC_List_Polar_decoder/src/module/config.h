 
#define LLR_BITS		8
#define LLR_MAXV    	(+127)
#define LLR_MINV    	(-127)
#define MAX_VAL	    	(+127)

#define LLR 			sc_bigint<LLR_BITS>
#define BIT 			sc_biguint<1>
#define TYPE_LLRS   	sc_bigint<PAR * LLR_BITS>
#define TYPE_BITS   	sc_biguint<PAR>

#define L_SIZE 			64
#define LOG2_L  		6

#define SORTER			2  // 0 : BUBBLE, 1 : CUSTOM, 2 : RANKORDER

#define PARALLEL_TP     0  // 0 : SEMI-PARALLEL element TP , 1 : FULLY-PARALLEL element TP

#define CA2 			// CA2 or SIGMAG , define the representation format
						// CA2 : 2's complement , SIGMAG : sign and magnitude

#define EXTENDED		1	// 1: on, 0: off. Enable the extension of the quantization format for the internal signals of the operators

#define _MONITORING_ 

