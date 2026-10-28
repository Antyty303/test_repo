`timescale 1ns / 1ps

module lab1_top (
	input  logic [8:0] SW,   
	output logic [3:0] LEDR,
	
	input  logic       clk,	
	input  logic [3:0] KEY,   
	output logic [3:0] LEDG  
);

	comb_top comb (
		.SW(SW),
		.LEDR(LEDR)
	);
	
	seq_top seq (
		.clk(clk),
		.SW(SW[3:0]),
		.KEY(KEY),
		.LEDG(LEDG)
	);

endmodule