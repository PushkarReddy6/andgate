module metastability ( 
input clk,         
input async_in,
output reg sample 
);
always @(posedge clk) begin 
sample <= async_in; 
end 
endmodule

