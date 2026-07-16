module up_counter_4bit_tb;  
  reg clk;   reg reset;  
  wire [3:0] count;  
  
up_counter_4bit uut (  
  .clk(clk),  
  .reset(reset),  
  .count(count)  
  );  
  
// clock generation  
always #5 clk <= ~clk; // 10 time unit clock period 
initial        
 begin  
 $monitor("Time=%t|Reset=%b |count=%b",$time,reset,count);   
 reset = 1; #10;    
 reset = 0; #200;  
  $finish;  
end  
initial begin  
  $dumpfile ("up_counter_4bit.vcd");  
  $dumpvars();  
  end  
endmodule   

