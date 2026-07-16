verilator --binary -j 0 -Wall global_reset.v global_reset_tb.v --top global_reset_tb --timing -trace
cd obj_dir || { echo "obj_dir not found"; exit 1; }
make -f Vglobal_reset_tb.mk Vglobal_reset_tb || { echo "Compilation failed"; exit 1; }
./Vglobal_reset_tb || { echo "Simulation failed"; exit 1; }
gtkwave global_reset.vcd
