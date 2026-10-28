`timescale 1ns / 1ps

module comb_tb();
	logic [8:0] SW;
	logic [3:0] LEDR;

	int log_file;

	comb_top tested_unit (
		.SW(SW),
		.LEDR(LEDR)
	);
	
	initial begin
		log_file = $fopen("comb_simulation_log.txt", "w");
		if (!log_file) begin
			$display("Ошибка: Не удалось открыть файл логов для комбинационной логики!");
			$finish;
		end

		$fdisplay(log_file, "===============================================");
		$fdisplay(log_file, "   ТЕСТБЕНЧ 1: ПРОВЕРКА КОМБИНАЦИОННОЙ ЛОГИКИ  ");
		$fdisplay(log_file, "===============================================");
		$fdisplay(log_file, "Время | Режим | Число А | Число В | Выход LEDR");
		$fdisplay(log_file, "-----------------------------------------------");
		
		// 5 + 3 = 8
		SW = {1'b0, 4'h3, 4'h5}; #10;
		$fdisplay(log_file, "%5t |  +    |   %0d     |   %0d     |    %0d", $time, SW[3:0], SW[7:4], LEDR);

		// 7 + 6 = 13
		SW = {1'b0, 4'h6, 4'h7}; #10;
		$fdisplay(log_file, "%5t |  +    |   %0d     |   %0d     |    %0d", $time, SW[3:0], SW[7:4], LEDR);

		// 10 - 4 = 6
		SW = {1'b1, 4'h4, 4'hA}; #10;
		$fdisplay(log_file, "%5t |  -    |   %0d    |   %0d     |    %0d", $time, SW[3:0], SW[7:4], LEDR);

		// 4 - 4 = 0
		SW = {1'b1, 4'h4, 4'h4}; #10;
		$fdisplay(log_file, "%5t |  -    |   %0d     |   %0d     |    %0d", $time, SW[3:0], SW[7:4], LEDR);

		// 3 - 5 = 14 т.к. unsigned
		SW = {1'b1, 4'h5, 4'h3}; #10;
		$fdisplay(log_file, "%5t |  -    |   %0d     |   %0d     |    %0d (переполнение)", $time, SW[3:0], SW[7:4], LEDR);

		$stop;
	end
	
	final begin
		$fdisplay(log_file, "-----------------------------------------------");
		$fdisplay(log_file, "Тест комбинационной логики успешно завершен.");
		$fclose(log_file);
	end
	
endmodule