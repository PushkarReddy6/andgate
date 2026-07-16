verilator --binary -j 0 -Wall uart.v apb_uart_bridge.v apb_uart_top.v apb_uart_tb.v --top apb_uart_tb --timing -trace
cd obj_dir || { echo "Error: obj_dir not found"; exit 1; } 
make -f Vapb_uart_tb.mk Vapb_uart_tb || { echo "Error: Compilation failed"; exit 1; } 
./Vapb_uart_tb || { echo "Error: Simulation failed"; exit 1; } 
gtkwave apb_uart_dump.vcd
