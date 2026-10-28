`timescale 1ns/1ps

module tb_adder_4bit();

	logic [3:0] A;
	logic [3:0] B;
	logic [3:0] S;
	logic [3:0] reference_S;

	int error_count = 0;

	adder_4bit tested_unit (.A(A), .B(B), .cin(1'b0), .S(S));

	initial begin
		A = 4'd0;
		B = 4'd0;
		reference_S = 4'b0;
		#10;

		for (int i = 0; i < 16; i++) begin
			for (int j = 0; j < 16; j++) begin
				A = i;
				B = j;
				reference_S = (A + B) & 4'hF;
				#1;

				if (S !== reference_S) begin
					error_count++;
					$error("Ошибка в %0t! Операнды: A = %0d, B = %0d. Получено: S = %0d, Ожидалось: S = %0d", 
					$time, A, B, S, reference_S);
				end
			end
		end

		$display("=========================================================");
		$display("Тест для adder_4bit завершён. Обнаружено ошибок: %0d", error_count);
		$display("=========================================================");
		$finish;
	end

endmodule
