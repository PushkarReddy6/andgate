module alu ( 
input [1:0] a, 
input [1:0] b, 
input sel,             
output reg [1:0] result 
); 
// 0: ADD, 1: SUB 
always @(*) begin 
case (sel) 
1'b0: result = a + b; 
1'b1: result = a - b; 
endcase 
end 
endmodule
