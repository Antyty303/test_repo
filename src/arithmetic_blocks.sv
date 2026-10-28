`timescale 1ns / 1ps

// 1-битный сумматор
module full_adder (
	input  logic a,
	input  logic b,
	input  logic cin,
	output logic sum,
	output logic cout
);
	assign sum  = a ^ b ^ cin;
	assign cout = (a & b) | (b & cin) | (a & cin);
endmodule


// 4-битный сумматор
module adder_4bit (
	input  logic [3:0] A,
	input  logic [3:0] B,
	input  logic       cin,
	output logic [3:0] S,
	output logic       cout
);
	logic c1, c2, c3; // провода

	full_adder fa0 (.a(A[0]), .b(B[0]), .cin(cin), .sum(S[0]), .cout(c1));
	full_adder fa1 (.a(A[1]), .b(B[1]), .cin(c1),  .sum(S[1]), .cout(c2));
	full_adder fa2 (.a(A[2]), .b(B[2]), .cin(c2),  .sum(S[2]), .cout(c3));
	full_adder fa3 (.a(A[3]), .b(B[3]), .cin(c3),  .sum(S[3]), .cout(cout));
	endmodule


// 4-битный вычитатель
module sub_4bit (
	input  logic [3:0] A,
	input  logic [3:0] B,
	output logic [3:0] Diff,
	output logic       bout
);
	logic [3:0] inverted_B;
	logic       adder_cout;

	assign inverted_B = ~B;

	// A + (~B) + 1
	adder_4bit adder_inst (
	  .A(A),
	  .B(inverted_B),
	  .cin(1'b1),
	  .S(Diff),
	  .cout(adder_cout)
	);

	assign bout = ~adder_cout;
endmodule
