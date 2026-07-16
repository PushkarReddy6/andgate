verilator --binary -j 0 -Wall reset_sync.v cdc_sync.v top_with_sync.v sync_tb.v --top sync_tb --timing -trace
cd obj_dir || { echo "obj_dir not found"; exit 1; } 
make -f Vsync_tb.mk Vsync_tb || { echo "Compilation failed"; exit 1; } 
./Vsync_tb || { echo "Simulation failed"; exit 1; } 
gtkwave dump.vcd 
