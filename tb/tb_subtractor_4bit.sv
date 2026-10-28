`timescale 1ns/1ps

module tb_subtractor_4bit();

	logic [3:0] A;
	logic [3:0] B;
	logic [3:0] D;
	logic [3:0] reference_D;
	
	int error_count = 0;

	sub_4bit tested_unit (.A(A), .B(B), .Diff(D));

	initial begin
		A = 4'd0;
		B = 4'd0;
		reference_D = 4'b0;
		#10;

		for (int i = 0; i < 16; i++) begin
			for (int j = 0; j < 16; j++) begin
				A = i;
				B = j;
				reference_D = (A - B) & 4'hF;
				#1;
				
				if (D !== reference_D) begin
					error_count++;
					$error("Ошибка в %0t! Операнды: A = %0d, B = %0d. Получено: D = %0d, Ожидалось: D = %0d", 
					$time, A, B, D, reference_D);
				end
			end
		end

		$display("=========================================================");
		$display("Тест для subtractor_4bit завершён. Обнаружено ошибок: %0d", error_count);
		$display("=========================================================");
		$finish;
	end

endmodule
