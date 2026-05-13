`timescale 1ns / 1ps

module Instruction_Memory#(

    parameter   IMBIT = 8

    )(
    
    input        [31:0]  Instruction_Address,
    output  reg  [31:0]  Instruction_Data,
    
    input                clk, rst    
    );
    
            reg  [31:0]  Instruction_Memory [0:(2**IMBIT)-1];
            
    initial $readmemh("instructions.mem", Instruction_Memory);
    
    always  @(posedge clk)
            Instruction_Data <= Instruction_Memory[Instruction_Address[IMBIT-1:0]];
    
endmodule