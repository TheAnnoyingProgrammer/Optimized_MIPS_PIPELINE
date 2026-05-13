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

    output       [31:0] dbg_ALU1_Out,
    output       [31:0] dbg_ALU2_Out,
    output              dbg_ALU1_WAIT,
    output              dbg_ALU2_WAIT,

    input               clk,
    input               rst
);

    wire [4:0]  RegDst_Mux;
    wire [31:0] ALUSrc_Mux;
    wire [31:0] Branch_Address;

    assign RegDst_Mux     = iEX[0] ? Instr_1511 : Instr_2016;
    assign ALUSrc_Mux     = iEX[3] ? SignExt : Read_Data_2;
    assign Branch_Address = NPC + SignExt;

    wire [31:0] ALU_O1;
    wire        Zero1;
    wire        WAIT1;
    wire        mul_done1;

    wire [31:0] ALU_O2;
    wire        Zero2;
    wire        WAIT2;
    wire        mul_done2;

    wire use_alu2  = WAIT1 & ~WAIT2;
    wire both_busy = WAIT1 &  WAIT2;

    ALU ALU1 (
        .SignExt  (use_alu2 ? 6'b0        : SignExt[5:0]),
        .ALU_OP   (use_alu2 ? 2'b0        : iEX[2:1]),
        .Data_1   (Read_Data_1),
        .Data_2   (ALUSrc_Mux),
        .Data_O   (ALU_O1),
        .Zero     (Zero1),
        .WAIT     (WAIT1),
        .mul_done (mul_done1),
        .clk      (clk),
        .rst      (rst)
    );

    ALU ALU2 (
        .SignExt  (use_alu2 ? SignExt[5:0] : 6'b0),
        .ALU_OP   (use_alu2 ? iEX[2:1]    : 2'b0),
        .Data_1   (Read_Data_1),
        .Data_2   (ALUSrc_Mux),
        .Data_O   (ALU_O2),
        .Zero     (Zero2),
        .WAIT     (WAIT2),
        .mul_done (mul_done2),
        .clk      (clk),
        .rst      (rst)
    );

    assign WAIT = both_busy;
    assign Zero = use_alu2 ? Zero2 : Zero1;

    assign dbg_ALU1_Out  = ALU_O1;
    assign dbg_ALU2_Out  = ALU_O2;
    assign dbg_ALU1_WAIT = WAIT1;
    assign dbg_ALU2_WAIT = WAIT2;

    wire [31:0] result_data = use_alu2 ? ALU_O2 : ALU_O1;

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            WB            <= 2'b00;
            MM            <= 3'b000;
            WriteReg      <= 5'b00000;
            ALU_Data      <= 32'b0;
            PC_from_ExMem <= 32'b0;
            Write_Data    <= 32'b0;

        end else if (!both_busy) begin
            WB            <= iWB;
            MM            <= iMM;
            WriteReg      <= RegDst_Mux;
            ALU_Data      <= result_data;
            PC_from_ExMem <= Branch_Address;
            Write_Data    <= Read_Data_2;
        end
    end

endmodule