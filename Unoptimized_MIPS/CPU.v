`timescale 1ns / 1ps

module CPU(
    input clk,
    input rst,

    output [31:0] dbg_fetch_NPC,
    output [31:0] dbg_instruction,

    output [31:0] dbg_RD1,
    output [31:0] dbg_RD2,
    output [31:0] dbg_signext,

    output [31:0] dbg_ALU_Data,
    output [31:0] dbg_Mem_Read_Data,
    output [31:0] dbg_WB_Data,

    output [4:0]  dbg_WriteReg,
    output        dbg_RegWrite,
    output        dbg_PCSrc,
    output        dbg_WAIT,

    output [4:0]  dbg_rs,
    output [4:0]  dbg_rt,
    output [4:0]  dbg_rd
);

    wire        PCSrc;
    wire        WAIT;
    wire [31:0] PC_to_Fetch;

    wire [31:0] fetch_NPC;
    wire [31:0] fetch_Instruction;

    wire [1:0]  id_WB;
    wire [2:0]  id_MM;
    wire [3:0]  id_EX;
    wire [4:0]  id_Instr_2016;
    wire [4:0]  id_Instr_1511;
    wire [31:0] id_NPC;
    wire [31:0] id_SignExt;
    wire [31:0] id_Read_Data_1;
    wire [31:0] id_Read_Data_2;

    wire        ex_Zero;
    wire [1:0]  ex_WB;
    wire [2:0]  ex_MM;
    wire [4:0]  ex_WriteReg;
    wire [31:0] ex_ALU_Data;
    wire [31:0] ex_PC_from_ExMem;
    wire [31:0] ex_Write_Data;

    wire        wb_RegWrite;
    wire [4:0]  wb_WriteReg;
    wire [31:0] wb_Write_Data_To_Reg;

    wire [1:0]  wb_WB;
    wire [4:0]  wb_WriteReg_dbg;
    wire [31:0] wb_Address;
    wire [31:0] wb_Read_Data;

    Fetch fetch_stage (
        .PCSrc(PCSrc),
        .PC_from_ExMem(PC_to_Fetch),
        .WAIT(WAIT),
        .NPC(fetch_NPC),
        .Instruction(fetch_Instruction),
        .clk(clk),
        .rst(rst)
    );

    Decode decode_stage (
        .RegWrite(wb_RegWrite),
        .WriteReg(wb_WriteReg),
        .WriteData(wb_Write_Data_To_Reg),
        .iNPC(fetch_NPC),
        .Instruction(fetch_Instruction),
        .WAIT(WAIT),
        .WB(id_WB),
        .MM(id_MM),
        .EX(id_EX),
        .Instr_2016(id_Instr_2016),
        .Instr_1511(id_Instr_1511),
        .NPC(id_NPC),
        .SignExt(id_SignExt),
        .Read_Data_1(id_Read_Data_1),
        .Read_Data_2(id_Read_Data_2),
        .dbg_rs(dbg_rs),
        .dbg_rt(dbg_rt),
        .dbg_rd(dbg_rd),
        .clk(clk),
        .rst(rst)
    );

    Execute execute_stage (
        .iWB(id_WB),
        .iMM(id_MM),
        .iEX(id_EX),
        .Instr_2016(id_Instr_2016),
        .Instr_1511(id_Instr_1511),
        .NPC(id_NPC),
        .SignExt(id_SignExt),
        .Read_Data_1(id_Read_Data_1),
        .Read_Data_2(id_Read_Data_2),
        .Zero(ex_Zero),
        .WAIT(WAIT),
        .WB(ex_WB),
        .MM(ex_MM),
        .WriteReg(ex_WriteReg),
        .ALU_Data(ex_ALU_Data),
        .PC_from_ExMem(ex_PC_from_ExMem),
        .Write_Data(ex_Write_Data),
        .clk(clk),
        .rst(rst)
    );

    MWB memory_writeback_stage (
        .WAIT(WAIT),
        .iWB(ex_WB),
        .iMM(ex_MM),
        .iWriteReg(ex_WriteReg),
        .ALU_Data(ex_ALU_Data),
        .Write_Data(ex_Write_Data),
        .PC_from_ExMem(ex_PC_from_ExMem),
        .zero(ex_Zero),
        .PCSrc(PCSrc),
        .PC_to_Fetch(PC_to_Fetch),
        .RegWrite_to_Decode(wb_RegWrite),
        .WriteReg_to_Decode(wb_WriteReg),
        .WriteData_to_Decode(wb_Write_Data_To_Reg),
        .WB(wb_WB),
        .WriteReg(wb_WriteReg_dbg),
        .Address(wb_Address),
        .Read_Data(wb_Read_Data),
        .clk(clk),
        .rst(rst)
    );

    assign dbg_fetch_NPC     = fetch_NPC;
    assign dbg_instruction   = fetch_Instruction;
    assign dbg_RD1           = id_Read_Data_1;
    assign dbg_RD2           = id_Read_Data_2;
    assign dbg_signext       = id_SignExt;
    assign dbg_ALU_Data      = ex_ALU_Data;
    assign dbg_Mem_Read_Data = wb_Read_Data;
    assign dbg_WB_Data       = wb_Write_Data_To_Reg;
    assign dbg_WriteReg      = wb_WriteReg;
    assign dbg_RegWrite      = wb_RegWrite;
    assign dbg_PCSrc         = PCSrc;
    assign dbg_WAIT          = WAIT;

endmodule