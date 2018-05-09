/**********************************************************************
 * DO WHAT THE FUCK YOU WANT TO AND DON'T BLAME US PUBLIC LICENSE     *
 *                    Version 3, April 2008                           *
 *                                                                    *
 * Copyright (C) 2018 Luke Wren                                       *
 *                                                                    *
 * Everyone is permitted to copy and distribute verbatim or modified  *
 * copies of this license document and accompanying software, and     *
 * changing either is allowed.                                        *
 *                                                                    *
 *   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION  *
 *                                                                    *
 * 0. You just DO WHAT THE FUCK YOU WANT TO.                          *
 * 1. We're NOT RESPONSIBLE WHEN IT DOESN'T FUCKING WORK.             *
 *                                                                    *
 *********************************************************************/

// Synchronous FIFO
//
// No first-word-fallthrough.
// (Note this gives 50% throughput for depth=2)
// All outputs are registered, apart from read data, which is
// combinationally decoded from internal register-based memory.
// Depth must be power of 2, != 1

module sync_fifo #(
	parameter DEPTH = 2,
	parameter WIDTH = 32,
	parameter W_ADDR = $clog2(DEPTH)	// SHOULD BE LOCALPARAM but this triggers bug in xilinx tools with clog2
) (
	input  wire clk,
	input  wire rst_n,

	input  wire [WIDTH-1:0] w_data,
	input  wire             w_en,
	output wire [WIDTH-1:0] r_data,
	input  wire             r_en,

	output  reg             full,
	output  reg             empty,
	output  reg [W_ADDR:0]  level
);

reg [WIDTH-1:0] mem[0:DEPTH-1];

reg [W_ADDR-1:0] w_ptr;
reg [W_ADDR-1:0] r_ptr;
assign r_data = mem[r_ptr];

always @ (posedge clk or negedge rst_n) begin
	if (!rst_n) begin
		full <= 1'b0;
		empty <= 1'b1;
		level <= {(W_ADDR+1){1'b0}};
		w_ptr <= {W_ADDR{1'b0}};
		r_ptr <= {W_ADDR{1'b0}};
	end else begin
		w_ptr <= w_ptr + w_en;
		r_ptr <= r_ptr + r_en;
		if (w_en) begin
			mem[w_ptr] <= w_data;
			if (!r_en) begin
				level <= level + 1'b1;
				empty <= 1'b0;
				full <= level == DEPTH - 1;
			end
		end else if (r_en) begin
			level <= level - 1'b1;
			full <= 1'b0;
			empty <= level == 1;
		end
	end
end

endmodule