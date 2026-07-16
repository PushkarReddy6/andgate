`timescale 1ns/1ps
module half_adder_dataflow(
input a,               // First input bit
input b,               // Second input bit
output sum,            // Sum output
output carry           // Carry output
);
assign sum = a ^ b;    // XOR operation for sum
assign carry = a & b;  // AND operation for carry
endmodule

