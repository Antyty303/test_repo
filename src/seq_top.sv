`timescale 1ns / 1ps

// Верхний последовательный модуль 
module seq_top (
	input  logic       clk,
	input  logic [3:0] SW,	
	input  logic [3:0] KEY,   
	output logic [3:0] LEDG  
);
	logic [3:0] A_reg;
	logic [3:0] B_reg;
	logic [3:0] result_reg;

	logic [3:0] reg_sum_out;
	logic [3:0] reg_sub_out;
	logic       unused_cout, unused_bout;
	
	logic [3:0] key_r;
   logic [3:0] key_pressed;

	adder_4bit adder_for_regs (.A(A_reg), .B(B_reg), .cin(1'b0), .S(reg_sum_out), .cout(unused_cout));
	sub_4bit   sub_for_regs   (.A(A_reg), .B(B_reg), .Diff(reg_sub_out), .bout(unused_bout));

	always_ff @(posedge clk) begin
		// Запоминаем текущее состояние кнопок, чтобы сравнить его на следующем такте
		key_r <= KEY; // Кнопка отпущена - сигнал 1, Кнопка нажата - 0.
		// если на прошлом такте кнопка была отпущена (1), а на текущем нажата (0) — значит произошло нажатие
		key_pressed[0] = key_r[0] && !KEY[0];
		key_pressed[1] = key_r[1] && !KEY[1];
		key_pressed[2] = key_r[2] && !KEY[2];
		key_pressed[3] = key_r[3] && !KEY[3];

		if (key_pressed[0]) begin
			A_reg <= SW;
		end

		if (key_pressed[1]) begin
			B_reg <= SW;
		end

		if (key_pressed[2]) begin
			result_reg <= reg_sum_out;
		end else if (key_pressed[3]) begin
			result_reg <= reg_sub_out;
		end
	end

	assign LEDG = result_reg;

endmodule
