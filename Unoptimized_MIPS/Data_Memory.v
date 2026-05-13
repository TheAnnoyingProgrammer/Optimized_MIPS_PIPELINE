`timescale 1ns / 1ps

module Data_Memory#(
    parameter ADRS_BIT = 5
)(
    input        [31:0] Address, Write_Data,
    input               MemRead, MemWrite,

    output  reg  [31:0] Read_Data,

    input               clk, rst
);

    reg  [31:0] memory [0:(1<<ADRS_BIT)-1];

    integer i;

    always  @(posedge clk or negedge rst) begin
        if (!rst) begin
            for (i = 0; i < (1<<ADRS_BIT); i = i + 1)
                memory[i] <= 32'b0;

            Read_Data <= 32'b0;
        end else begin
            if (MemWrite)
                memory[Address[ADRS_BIT+1:2]] <= Write_Data;

            if (MemRead)
                Read_Data <= memory[Address[ADRS_BIT+1:2]];
            else
                Read_Data <= 32'b0;
        end
    end

endmodule