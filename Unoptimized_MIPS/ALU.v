`timescale 1ns / 1ps

module ALU(
    input         [5:0]  SignExt,
    input         [1:0]  ALU_OP,
    input        [31:0]  Data_1, Data_2,

    output       [31:0]  Data_O,
    output               Zero,
    output reg           WAIT,
    output reg           mul_done,

    input                clk,
    input                rst
);

    reg  [2:0]  funt;
    reg  [1:0]  mul_count;
    reg  [31:0] mul_result;

    wire is_mul = (ALU_OP == 2'b10) && (SignExt == 6'b011000);

    assign Data_O = mul_done ? mul_result : comb_result;
    assign Zero   = (Data_O == 32'b0);

    reg [31:0] comb_result;
    always @(*) begin
        funt = 3'b010;
        case (ALU_OP)
            2'b00: funt = 3'b010;
            2'b01: funt = 3'b110;
            2'b10: begin
                case (SignExt)
                    6'b100000: funt = 3'b010;
                    6'b100010: funt = 3'b110;
                    6'b100100: funt = 3'b000;
                    6'b100101: funt = 3'b001;
                    6'b101010: funt = 3'b111;
                    6'b011000: funt = 3'b011;
                    default:   funt = 3'b010;
                endcase
            end
            default: funt = 3'b010;
        endcase

        case (funt)
            3'b010: comb_result = Data_1 + Data_2;
            3'b110: comb_result = Data_1 - Data_2;
            3'b000: comb_result = Data_1 & Data_2;
            3'b001: comb_result = Data_1 | Data_2;
            3'b111: comb_result = (Data_1 < Data_2) ? 32'b1 : 32'b0;
            3'b011: comb_result = Data_1 * Data_2;
            default: comb_result = 32'b0;
        endcase
    end

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            WAIT       <= 1'b0;
            mul_count  <= 2'b00;
            mul_result <= 32'b0;
            mul_done   <= 1'b0;
        end else begin
            mul_done <= 1'b0;

            if (is_mul && !WAIT && !mul_done) begin
                mul_result <= Data_1 * Data_2;
                WAIT       <= 1'b1;
                mul_count  <= 2'b01;

            end else if (WAIT && mul_count == 2'b01) begin
                mul_count  <= 2'b10;

            end else if (WAIT && mul_count == 2'b10) begin
                mul_count  <= 2'b11;

            end else if (WAIT && mul_count == 2'b11) begin
                WAIT       <= 1'b0;
                mul_count  <= 2'b00;
                mul_done   <= 1'b1;
            end
        end
    end

endmodule