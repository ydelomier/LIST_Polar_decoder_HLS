#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include "math.h"

using namespace std;

int main(int argc, char* argv[]) {

    std::cout << "(II) USER GUIDE : command L " << std::endl;
    std::cout << "(II)      Parameters : " << std::endl;
    std::cout << "(II)                  - L          : (int) LIST size: power of 2 " << std::endl;

    if (argc < 2)
        return -1;

    std::cout << "Generating ..." << endl;
    int L = atoi(argv [1]);

    std::string i_filename = "output.txt";
    ofstream of(i_filename);
    if (of.is_open()) {

        of << "template <class T>" << endl;
        of << "inline T RO_MUX" << 2*L << " ( T tab[" << 2*L << "], sc_uint<" << log2(2*L) << "> position[" << 2*L << "], sc_uint<" << log2(2*L) << "> indice)" << endl;
        of << "{" << endl;
        of << "#pragma HLS INLINE off" << endl;
		of << "#pragma HLS ARRAY_PARTITION variable=tab complete dim=1" << endl;
		of << "#pragma HLS ARRAY_PARTITION variable=position complete dim=1" << endl;
        of << "     if( position[0] == indice ){" << endl;
        of << "         return tab[0];}" << endl;
        for(int i = 1; i < 2*L-1; i ++){
            of << "     if( position[" << i << "] == indice ){" << endl;
            of << "         return tab[" << i << "];}" << endl;
        }
        of << "     else{" << endl;
        of << "         return tab[" << 2*L-1 << "];}" << endl;
        of << "}" << endl;

        of << endl;
        of << endl;
        of << endl;
        of << endl;

        of << "template <int Q> "<< endl;
        of << "void RANKORDER_SORT_L" << L << " (PS_struct<1,Q," << log2(L) << "> input[" << 2*L << "], PS_struct<1,Q," << log2(L) << "> output[" << L << "], sc_biguint<1> fb)"<< endl;
        of << "{"<< endl;
        of << "#pragma HLS INLINE"<< endl;
        of << "#pragma HLS ARRAY_PARTITION variable=input complete dim=1"<< endl;
        of << "#pragma HLS ARRAY_PARTITION variable=output complete dim=1"<< endl;
        of << endl;
        of << "// Adjust input when FB=0"<< endl;
        of << endl;
        of <<  "    if (fb == 0){"<< endl;

        if( L==2) {
            of <<  "        input[2] = input[1];" <<endl;
            of <<  "        input[1] = input[0];" <<endl;
        }
        else{
            of <<  "        input["<< 2*L-1 << "].metric = MAX_VAL;" <<endl;
            of <<  "        input["<< 2*L-2 << "] = input[" << L-1 << "];" <<endl;

            int lilL = L-2;
            for(int i = (2*L-3); i >= 1; i--)
            {
                if( (i%2) == 0)
                    of <<  "        input["<< i << "].metric = 0;" <<endl;
                else {
                    of << "        input[" << i << "] = input[" << lilL << "];" << endl;
                    lilL--;
                }
            }
        }
        of <<  "    }"<< endl;
        of << endl;
        of <<  "    sc_uint<" << log2(2*L) << "> position[" << 2*L << "];" << endl;
        of <<  "#pragma HLS ARRAY_PARTITION variable=position complete dim=1" <<endl;
        of << endl;
        of <<  "// COMPARE inputs" <<endl;
        of << endl;

        for(int i = 1; i <= 2*L-3; i+=2) {
            for(int j = i+1; j<= 2*L-2; j++ )
            {
                of <<  "    sc_uint<1> comp_r_" << i << "_" << j << " = COMP < Q > (input[" << i << "].metric, input[" << j << "].metric);" <<endl;
            }
            of << endl;
        }

        of <<  "// COMPUTE positions" <<endl;
        of << endl;
        of <<  "    position[0] = 0;" <<endl;

        for(int i = 1; i <= 2*L-2; i++) {
            of << "    position[" << i << "] = " << (int) (i + 1) / 2 << " + ";
            for (int j = 1; j < i; j += 2) {
                of << "(sc_uint<1>) ~(comp_r_" << j << "_" << i << ")";
                of << " + ";
            }
            if( (i%2) == 1 ){
                for (int j = i+1; j <= 2*L-2 ; j ++) {
                    of << "comp_r_" << i << "_" << j;
                    of << " + ";
                }
            }
            of.seekp(-3, std::ios_base::cur);
            of << ";" << endl;
        }
        of <<  "    position["<< 2*L-1 << "] = (sc_uint<" << log2(2*L) << ">) " << 2*L-1 << ";" <<endl;

        of << endl;
        of <<  " // Multiplex the inputs in the order" << endl;
        of <<  "    PS_struct<1,Q," << log2(L) << "> temp[" << 2*L-1 << "];" << endl;
        of <<  "#pragma HLS ARRAY_PARTITION variable=temp complete dim=1" << endl;
        of <<  "    temp[0] = input[0];" << endl;
        for(int i = 1; i <= 2*L-2 ; i++)
            of <<  "    temp[" << i << "] = RO_MUX" << 2*L << " < PS_struct<1,Q," << log2(L) << "> > (input, position, (sc_uint<" << log2(2*L) << ">) " << i << ");" <<endl;

        of << endl;
        of <<  "// output the L smallest input" << endl;
        of <<  "    if (fb == 0){" << endl;
        for(int i = 0; i < L; i++)
            of <<  "    output[" << i << "] = temp[" << L+i-1 << "]; "<< endl;
        of <<  "    }" << endl;
        of <<  "    else{" << endl;
        for(int i = 0; i < L; i++)
            of <<  "    output[" << i << "] = temp[" << i << "]; "<< endl;
        of <<  "    }" << endl;
        of <<  "}" << endl;
        of.close();
    }

    cout << "   $$$   Generated   $$$ " << endl;
    return 1;
}
