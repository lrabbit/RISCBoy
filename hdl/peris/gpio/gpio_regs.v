// Autogenerated with regblock
// Do not edit manually

module gpio_regs (
	input wire clk,
	input wire rst_n,
	
	// APB Port
	input wire apbs_psel,
	input wire apbs_penable,
	input wire apbs_pwrite,
	input wire [15:0] apbs_paddr,
	input wire [31:0] apbs_pwdata,
	output wire [31:0] apbs_prdata,
	output wire apbs_pready,
	output wire apbs_pslverr,
	
	// Register interfaces
	output reg [31:0] out__o,
	output reg [31:0] dir__o,
	input wire [31:0] in__i
);

// APB adapter
wire [31:0] wdata = apbs_pwdata;
reg [31:0] rdata;
wire wen = apbs_psel && apbs_penable && apbs_pwrite;
wire ren = apbs_psel && apbs_penable && !apbs_pwrite;
wire [15:0] addr = apbs_paddr & 16'hf;
assign apbs_prdata = rdata;
assign apbs_pready = 1'b1;
assign apbs_pslverr = 1'b0;

localparam ADDR_OUT = 0;
localparam ADDR_DIR = 4;
localparam ADDR_IN = 8;
wire out_wen = wen && addr == ADDR_OUT;
wire out_ren = ren && addr == ADDR_OUT;
wire dir_wen = wen && addr == ADDR_DIR;
wire dir_ren = ren && addr == ADDR_DIR;
wire in_wen = wen && addr == ADDR_IN;
wire in_ren = ren && addr == ADDR_IN;

wire [31:0] out__rdata;
wire [31:0] out__wdata;
assign out__rdata = out__o;
wire [31:0] out_rdata = {out__rdata};
assign out__wdata = wdata[31:0];

wire [31:0] dir__rdata;
wire [31:0] dir__wdata;
assign dir__rdata = dir__o;
wire [31:0] dir_rdata = {dir__rdata};
assign dir__wdata = wdata[31:0];

wire [31:0] in__rdata;
wire [31:0] in__wdata;
assign in__rdata = in__i;
wire [31:0] in_rdata = {in__rdata};
assign in__wdata = wdata[31:0];

always @ (*) begin
	case (addr)
		ADDR_OUT: rdata = out_rdata;
		ADDR_DIR: rdata = dir_rdata;
		ADDR_IN: rdata = in_rdata;
		default: rdata = 32'h0;
	endcase
end

always @ (posedge clk or negedge rst_n) begin
	if (!rst_n) begin
		out__o <= 32'h0;
		dir__o <= 32'h0;
	end else begin
		if (out_wen)
			out__o <= out__wdata;
		if (dir_wen)
			dir__o <= dir__wdata;
	end
end

endmodule
