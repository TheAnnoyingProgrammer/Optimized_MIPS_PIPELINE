`timescale 1ns / 1ps

module Fetch(
    input               PCSrc,
    input        [31:0] PC_from_ExMem,
    input               WAIT,

    output reg   [31:0] NPC,
    output reg   [31:0] Instruction,

    input               clk,
    input               rst
);

    wire [31:0] Adder_Out;
    wire [31:0] Mux_Out;
    wire [31:0] Memory_Out;
    reg  [31:0] PC_Out;

    assign Adder_Out = PC_Out + 32'd1;
    assign Mux_Out   = PCSrc ? PC_from_ExMem : Adder_Out;

    Instruction_Memory IM(
        .Instruction_Address(PC_Out),
        .Instruction_Data(Memory_Out),
        .clk(clk),
        .rst(rst)
    );

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            PC_Out      <= 32'b0;
            NPC         <= 32'b0;
            Instruction <= 32'b0;
        end else if (!WAIT) begin
            PC_Out      <= Mux_Out;
            NPC         <= Adder_Out;
            Instruction <= Memory_Out;
        end
    end

endmodule