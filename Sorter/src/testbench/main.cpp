//#include "./sc_top_module/sc_dual_top_module.h"

#include "../my_module.h"
#include "sc_xorshift128.h"
#include <iomanip>


#define _VSATN	-31
#define _VSATP	31
#define _BETA	4


int sc_main (int argc, char * argv []){

	sc_clock clock("clock", 10, SC_NS, 0.5);
	sc_signal< bool > reset ("8");

	sc_report_handler::set_actions (SC_ID_LOGIC_X_TO_BOOL_, SC_DO_NOTHING);

	sc_signal < sc_uint<8> > seed;

	sc_fifo< float > f ("f", 1);

	sc_xorshift128 rand ("rand");
	rand.clk (clock);
	rand.reset (reset);
	rand.s1(f);

	my_module mod ( "top"  );
	mod.clk      ( clock     );
	mod.reset    ( reset     );
	mod.noise (f);

	reset = true;

	cout << "(II) Reset the system" << endl;

	sc_start( 20, SC_NS );

	reset  = false;

	cout << "(II) Running the system" << endl;

	sc_start(3000, SC_US);


  return 0;
}
