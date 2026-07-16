module and_gate_non_synth ( 
input a, 
input b, 
output reg y 
); 
// Non-synthesizable construct: Initial block 
initial begin 
y = 0; 
end 
// Non-synthesizable construct: Delay (#) 
always @(a or b) begin 
#5 y = a & b; 
end 
// Non-synthesizable construct: $display system task 
always @(y) begin 
$display("TIME=%0t : a=%b b=%b y=%b", $time, a, b, y); 
end 
// Non-synthesizable construct: $monitor task 
initial begin 
$monitor("MONITOR: time=%0t a=%b b=%b y=%b", $time, a, b, y); 
end 
// Non-synthesizable construct: Simulation termination 
initial begin 
#120; 
$display("Simulation Finished"); 
$finish; 
end 
endmodule
