`timescale 1ns / 1ps

// Комбинационная логика
module comb_top (
	input  logic [8:0] SW,   
	output logic [3:0] LEDR  
);
	logic [3:0] sum_out;
	logic [3:0] sub_out;

	adder_4bit my_adder (.A(SW[3:0]), .B(SW[7:4]), .cin(1'b0), .S(sum_out));
	sub_4bit   my_sub   (.A(SW[3:0]), .B(SW[7:4]), .Diff(sub_out));

	always_comb begin
		if (SW[8] == 1'b0) begin
			LEDR = sum_out;
		end else begin
			LEDR = sub_out;
		end
	end
endmodule