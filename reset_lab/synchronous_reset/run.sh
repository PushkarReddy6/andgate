verilator --binary -j 0 -Wall sync_reset_ff.v sync_reset_tb.v --top sync_reset_tb --timing -trace 
cd obj_dir || { echo "obj_dir not found"; exit 1; } 
make -f Vsync_reset_tb.mk Vsync_reset_tb || { echo "Compilation failed"; exit 1; }  
./Vsync_reset_tb || { echo "Simulation failed"; exit 1; } 
gtkwave sync_reset.vcd 
