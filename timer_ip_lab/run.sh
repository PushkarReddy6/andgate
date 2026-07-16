verilator --binary -j 0 -Wall simple_timer.v simple_timer_tb.v --top-module simple_timer_tb --timing -trace
cd obj_dir || { echo "obj_dir not found"; exit 1; }
 
make -f Vsimple_timer_tb.mk Vsimple_timer_tb || { echo "Compilation failed"; exit 1; }
./Vsimple_timer_tb || { echo "Simulation failed"; exit 1; } 
gtkwave simple_timer.vcd
