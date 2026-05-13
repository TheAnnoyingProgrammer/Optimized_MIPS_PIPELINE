`timescale 1ns / 1ps

module Decode(
    input               RegWrite,
    input        [4:0]  WriteReg,
    input        [31:0] WriteData,

    input        [31:0] iNPC,
    input        [31:0] Instruction,
    input               WAIT,

    output reg   [1:0]  WB,
    output reg   [2:0]  MM,
    output reg   [3:0]  EX,

    output reg   [4:0]  Instr_2016,
    output reg   [4:0]  Instr_1511,

    output reg   [31:0] NPC,
    output reg   [31:0] SignExt,
    output reg   [31:0] Read_Data_1,
    output reg   [31:0] Read_Data_2,

    output       [4:0]  dbg_rs,
    output       [4:0]  dbg_rt,
    output       [4:0]  dbg_rd,

    input               clk,
    input               rst
);

    reg [8:0] Controlled_O;

    wire [31:0] RM_Read_Data_1;
    wire [31:0] RM_Read_Data_2;

    assign dbg_rs = Instruction[25:21];
    assign dbg_rt = Instruction[20:16];
    assign dbg_rd = Instruction[15:11];

    always @(*) begin
        case (Instruction[31:26])
            6'b000000: Controlled_O = 9'b10_000_0101;
            6'b100011: Controlled_O = 9'b11_100_1000;
            6'b101011: Controlled_O = 9'b00_010_1000;
            6'b000100: Controlled_O = 9'b00_001_0010;
            6'b001000: Controlled_O = 9'b10_000_1000;
            default:   Controlled_O = 9'b00_000_0000;
        endcase
    end

   Register_Memory RM (
    .RegWrite(RegWrite & ~WAIT),
    .Write_Reg_0(WriteReg),
    .Write_Data_0(WriteData),
    .Read_Reg_1(Instruction[25:21]),
    .Read_Reg_2(Instruction[20:16]),
    .Read_Data_1(RM_Read_Data_1),
    .Read_Data_2(RM_Read_Data_2),
    .clk(clk),
    .rst(rst)
    );

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            WB          <= 2'b00;
            MM          <= 3'b000;
            EX          <= 4'b0000;
            Instr_2016  <= 5'b00000;
            Instr_1511  <= 5'b00000;
            NPC         <= 32'b0;
            SignExt     <= 32'b0;
            Read_Data_1 <= 32'b0;
            Read_Data_2 <= 32'b0;
        end else if (!WAIT) begin
            WB          <= Controlled_O[8:7];
            MM          <= Controlled_O[6:4];
            EX          <= Controlled_O[3:0];
            Instr_2016  <= Instruction[20:16];
            Instr_1511  <= Instruction[15:11];
            NPC         <= iNPC;
            SignExt     <= {{16{Instruction[15]}}, Instruction[15:0]};
            Read_Data_1 <= RM_Read_Data_1;
            Read_Data_2 <= RM_Read_Data_2;
        end
    end

endmodule