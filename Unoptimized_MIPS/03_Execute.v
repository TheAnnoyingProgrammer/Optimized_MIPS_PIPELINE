`timescale 1ns / 1ps

module Execute(
    input        [1:0]  iWB,
    input        [2:0]  iMM,
    input        [3:0]  iEX,

    input        [4:0]  Instr_2016,
    input        [4:0]  Instr_1511,

    input        [31:0] NPC,
    input        [31:0] SignExt,
    input        [31:0] Read_Data_1,
    input        [31:0] Read_Data_2,

    output              Zero,
    output              WAIT,

    output reg   [1:0]  WB,
    output reg   [2:0]  MM,

    output reg   [4:0]  WriteReg,
    output reg   [31:0] ALU_Data,
    output reg   [31:0] PC_from_ExMem,
    output reg   [31:0] Write_Data,

    input               clk,
    input               rst
);

    wire [4:0]  RegDst_Mux;
    wire [31:0] ALUSrc_Mux;
    wire [31:0] ALU_O;
    wire [31:0] Branch_Address;
    wire        mul_done;

    assign RegDst_Mux     = iEX[0] ? Instr_1511 : Instr_2016;
    assign ALUSrc_Mux     = iEX[3] ? SignExt : Read_Data_2;
    assign Branch_Address = NPC + SignExt;

    ALU ALU0 (
        .SignExt(SignExt[5:0]),
        .ALU_OP(iEX[2:1]),
        .Data_1(Read_Data_1),
        .Data_2(ALUSrc_Mux),
        .Data_O(ALU_O),
        .Zero(Zero),
        .WAIT(WAIT),
        .mul_done(mul_done),
        .clk(clk),
        .rst(rst)
    );

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            WB            <= 2'b00;
            MM            <= 3'b000;
            WriteReg      <= 5'b00000;
            ALU_Data      <= 32'b0;
            PC_from_ExMem <= 32'b0;
            Write_Data    <= 32'b0;
        end else if (mul_done) begin
            WB            <= iWB;
            MM            <= iMM;
            WriteReg      <= RegDst_Mux;
            ALU_Data      <= ALU_O;
            PC_from_ExMem <= Branch_Address;
            Write_Data    <= Read_Data_2;
        end else if (!WAIT) begin
            WB            <= iWB;
            MM            <= iMM;
            WriteReg      <= RegDst_Mux;
            ALU_Data      <= ALU_O;
            PC_from_ExMem <= Branch_Address;
            Write_Data    <= Read_Data_2;
        end
    end

endmodule