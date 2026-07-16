#!/bin/bash

verilator --binary -j 0 -Wall ff_no_gating.v \
ff_with_gating.v ff_tb.v --top ff_tb --timing \
--CFLAGS "-std=c++20" --trace

cd obj_dir || { echo "obj_dir not found"; exit 1; }

make -f Vff_tb.mk Vff_tb || { echo "Compilation failed"; exit 1; }

./Vff_tb || { echo "Simulation failed"; exit 1; }

gtkwave dump.vcd
