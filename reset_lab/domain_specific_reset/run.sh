verilator --binary -j 0 -Wall domain_reset.v domain_reset_tb.v --top domain_reset_tb --timing -trace 
cd obj_dir || { echo "obj_dir not found"; exit 1; } 
make -f 
Vdomain_reset_tb.mk Vdomain_reset_tb || { echo 
"Compilation failed"; exit 1; } 
#Run the simulation 
./Vdomain_reset_tb || { echo "Simulation failed"; exit 1; } 
# Step 5: View the waveform in GTKWave 
gtkwave domain_reset.vcd 
