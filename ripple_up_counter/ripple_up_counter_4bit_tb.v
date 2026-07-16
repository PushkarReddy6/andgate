module ripple_up_counter_4bit_tb; 
reg clk; 
reg reset; 
wire [3:0] q; 
// 4-bit ripple up counter instantiation 
ripple_up_counter_4bit uut ( 
.clk(clk), 
.reset(reset), 
.q(q) 
); 
// Clock generation 
always #5 clk <= ~clk; 
initial begin 
clk = 0; 
reset = 1; 
// Display signals 
$display("Time\treset\tq"); 
$monitor("%0dns\t%b\t%b", $time, reset, q); 
// Apply reset 
#10; 
reset = 0; 
#200; 
$finish; 
end 
// Waveform dump 
initial begin 
$dumpfile("up_counter_dump.vcd"); 
$dumpvars(); 
end 
endmodule
