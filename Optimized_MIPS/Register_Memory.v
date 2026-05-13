`timescale 1ns / 1ps

module Register_Memory(
    input                RegWrite,
    input         [4:0]  Write_Reg_0,
    input         [4:0]  Read_Reg_1,
    input         [4:0]  Read_Reg_2,
    input        [31:0]  Write_Data_0,

    output wire  [31:0]  Read_Data_1,
    output wire  [31:0]  Read_Data_2,

    input                clk,
    input                rst
);

    reg [31:0] regs [0:31];
    integer i;

    assign Read_Data_1 = (RegWrite && Write_Reg_0 != 5'd0 && Write_Reg_0 == Read_Reg_1)
                         ? Write_Data_0 : regs[Read_Reg_1];

    assign Read_Data_2 = (RegWrite && Write_Reg_0 != 5'd0 && Write_Reg_0 == Read_Reg_2)
                         ? Write_Data_0 : regs[Read_Reg_2];

    always @(posedge clk) begin
        if (!rst) begin
            for (i = 0; i < 32; i = i + 1)
                regs[i] <= 32'b0;
        end else begin
            if (RegWrite && Write_Reg_0 != 5'd0)
                regs[Write_Reg_0] <= Write_Data_0;
        end
    end

endmodule