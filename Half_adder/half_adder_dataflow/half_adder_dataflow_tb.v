
`timescale 1ns/1ps  
module half_adder_dataflow_tb; 
reg a, b;                 // Input test signals 
wire sum, carry;          // Outputs from the half adder 
// Instantiate Unit Under Test (UUT) 
half_adder_dataflow uut ( 
.a(a), 
.b(b), 
.sum(sum), 
.carry(carry) 
); 
// Test stimulus block 
initial begin 
$display("Dataflow Half Adder Test"); 
$display("A B | Sum Carry"); 
$display("---------------------"); 
a = 0; b = 0; #10 $display("%b %b|%b %b", a, b, sum, 
carry);  // 0 + 0 
a = 0; b = 1; #10 $display("%b %b |  %b    %b", a, b, sum, 
carry);  //0 + 1 
a = 1; b = 0; #10  
$display("%b %b |  %b    %b", a, b, sum, carry);  // 1 + 0 
a = 1; b = 1; #10 $display("%b %b |  %b    %b", a, b, sum, 
carry);  // 1 + 1 
$finish;  // End simulation 
end 
// Dump waveform data for GTKWave 
initial begin 
$dumpfile("half_adder_dataflow.vcd");  // Output VCD file 
$dumpvars(0, half_adder_dataflow_tb); 
end 
endmodule 
