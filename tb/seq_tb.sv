`timescale 1ns / 1ps

module seq_tb();

	logic			clk;
	logic [3:0] SW;
	logic [3:0] KEY;
	logic [3:0] LEDG;
	
	seq_top tested_unit (
		.clk(clk),
		.SW(SW),
		.KEY(KEY),
		.LEDG(LEDG)
	);
	
	initial clk = 0;
	always #5 clk = ~clk;
	
	initial begin
		$monitor("Время: %0t | SW=%d | KEY=%b | Внутр. регистры: A_reg=%d, B_reg=%d | Выход LEDG=%d",
			$time, SW, KEY, tested_unit.A_reg, tested_unit.B_reg, LEDG);
   end
	
	initial begin
		SW = 4'd0;
		KEY = 4'b1111;
		#20;

		$display("\nТест: А=7, B=5, Сложение");

		SW = 4'd7;
		#10;
		KEY[0] = 1'b0;
		#30;
		KEY[0] = 1'b1;
		#40;

		SW = 4'd5;
		#10;
		KEY[1] = 1'b0;
		#15;
		KEY[1] = 1'b1;
		#30;

		KEY[2] = 1'b0;
		#30;
		KEY[2] = 1'b1;
		#40;

		$display("\nТест: А=13, B=4, Вычитание");

		SW = 4'd13;
		#10;
		KEY[0] = 1'b0; #30; KEY[0] = 1'b1;
		#40;

		SW = 4'd4;
		#15;
		KEY[1] = 1'b0; #35; KEY[1] = 1'b1;
		#40;

		KEY[3] = 1'b0;
		#25;
		KEY[3] = 1'b1;
		#40;
		$display("\nТестирование модуля seq_top завершено");
		$finish;
	end
	
endmodule