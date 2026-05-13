`timescale 1ns / 1ps

module MWB(
    input        [1:0]  iWB,
    input        [2:0]  iMM,

    input        [4:0]  iWriteReg,
    input        [31:0] ALU_Data,
    input        [31:0] Write_Data,
    input        [31:0] PC_from_ExMem,

    input               zero,
    input               WAIT,

    output              PCSrc,
    output       [31:0] PC_to_Fetch,

    output reg          RegWrite_to_Decode,
    output reg   [4:0]  WriteReg_to_Decode,
    output reg   [31:0] WriteData_to_Decode,

    output reg   [1:0]  WB,
    output reg   [4:0]  WriteReg,
    output reg   [31:0] Address,
    output reg   [31:0] Read_Data,

    input               clk,
    input               rst
);

    // ---------------------------------------------------------
    // Registered pipeline signals for branch control
    // zero and iMM[0] must be registered to avoid glitches on
    // PCSrc. We capture them in the same always block so they
    // stay in sync with the rest of the MEM/WB stage.
    // ---------------------------------------------------------
    reg        zero_reg;
    reg        branch_reg;   // registered iMM[0] (Branch control bit)

    assign PCSrc       = branch_reg & zero_reg;
    assign PC_to_Fetch = PC_from_ExMem;

    // ---------------------------------------------------------
    // Data Memory instantiation
    // ---------------------------------------------------------
    wire [31:0] DM_Read_Data;

    Data_Memory DM(
        .Address   (ALU_Data),
        .Write_Data(Write_Data),
        .MemRead   (iMM[2]),
        .MemWrite  (iMM[1]),
        .Read_Data (DM_Read_Data),
        .clk       (clk),
        .rst       (rst)
    );

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            WB                  <= 2'b00;
            WriteReg            <= 5'b00000;
            Address             <= 32'b0;
            Read_Data           <= 32'b0;

            RegWrite_to_Decode  <= 1'b0;
            WriteReg_to_Decode  <= 5'b00000;
            WriteData_to_Decode <= 32'b0;

            zero_reg            <= 1'b0;
            branch_reg          <= 1'b0;

        end else if (WAIT) begin
            // Stall: hold every pipeline register exactly as-is.
            // Suppress the writeback to decode so it doesn't fire
            // twice when the pipeline resumes.
            RegWrite_to_Decode  <= 1'b0;
            // All other regs keep their values implicitly (no assignment).

        end else begin
            // Normal advance
            WB                  <= iWB;
            WriteReg            <= iWriteReg;
            Address             <= ALU_Data;
            Read_Data           <= DM_Read_Data;

            RegWrite_to_Decode  <= iWB[1];
            WriteReg_to_Decode  <= iWriteReg;
            
            WriteData_to_Decode <= iWB[0] ? DM_Read_Data : ALU_Data;

            // Register branch decision to keep PCSrc glitch-free
            zero_reg            <= zero;
            branch_reg          <= iMM[0];
        end
    end

endmodule