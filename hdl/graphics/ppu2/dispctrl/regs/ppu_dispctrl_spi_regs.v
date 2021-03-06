/*******************************************************************************
*                          AUTOGENERATED BY REGBLOCK                           *
*                            Do not edit manually.                             *
*          Edit the source file (or regblock utility) and regenerate.          *
*******************************************************************************/

// Block name           : dispctrl_spi
// Bus type             : apb
// Bus data width       : 32
// Bus address width    : 16

module dispctrl_spi_regs (
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
	input wire  csr_pxfifo_empty_i,
	input wire  csr_pxfifo_full_i,
	output reg  csr_lcd_cs_o,
	output reg  csr_lcd_dc_o,
	input wire  csr_tx_busy_i,
	output reg  csr_lcd_shiftcnt_o,
	output reg [8:0] dispsize_w_o,
	output reg [15:0] pxfifo_o,
	output reg pxfifo_wen
);

// APB adapter
wire [31:0] wdata = apbs_pwdata;
reg [31:0] rdata;
wire wen = apbs_psel && apbs_penable && apbs_pwrite;
wire ren = apbs_psel && apbs_penable && !apbs_pwrite;
wire [15:0] addr = apbs_paddr & 16'hc;
assign apbs_prdata = rdata;
assign apbs_pready = 1'b1;
assign apbs_pslverr = 1'b0;

localparam ADDR_CSR = 0;
localparam ADDR_DISPSIZE = 4;
localparam ADDR_PXFIFO = 8;

wire __csr_wen = wen && addr == ADDR_CSR;
wire __csr_ren = ren && addr == ADDR_CSR;
wire __dispsize_wen = wen && addr == ADDR_DISPSIZE;
wire __dispsize_ren = ren && addr == ADDR_DISPSIZE;
wire __pxfifo_wen = wen && addr == ADDR_PXFIFO;
wire __pxfifo_ren = ren && addr == ADDR_PXFIFO;

wire  csr_pxfifo_empty_wdata = wdata[0];
wire  csr_pxfifo_empty_rdata;
wire  csr_pxfifo_full_wdata = wdata[1];
wire  csr_pxfifo_full_rdata;
wire  csr_lcd_cs_wdata = wdata[8];
wire  csr_lcd_cs_rdata;
wire  csr_lcd_dc_wdata = wdata[9];
wire  csr_lcd_dc_rdata;
wire  csr_tx_busy_wdata = wdata[10];
wire  csr_tx_busy_rdata;
wire  csr_lcd_shiftcnt_wdata = wdata[16];
wire  csr_lcd_shiftcnt_rdata;
wire [3:0] csr_disptype_wdata = wdata[31:28];
wire [3:0] csr_disptype_rdata;
wire [31:0] __csr_rdata = {csr_disptype_rdata, 11'h0, csr_lcd_shiftcnt_rdata, 5'h0, csr_tx_busy_rdata, csr_lcd_dc_rdata, csr_lcd_cs_rdata, 6'h0, csr_pxfifo_full_rdata, csr_pxfifo_empty_rdata};
assign csr_pxfifo_empty_rdata = csr_pxfifo_empty_i;
assign csr_pxfifo_full_rdata = csr_pxfifo_full_i;
assign csr_lcd_cs_rdata = csr_lcd_cs_o;
assign csr_lcd_dc_rdata = csr_lcd_dc_o;
assign csr_tx_busy_rdata = csr_tx_busy_i;
assign csr_lcd_shiftcnt_rdata = csr_lcd_shiftcnt_o;
assign csr_disptype_rdata = 4'h0;

wire [8:0] dispsize_w_wdata = wdata[8:0];
wire [8:0] dispsize_w_rdata;
wire [31:0] __dispsize_rdata = {23'h0, dispsize_w_rdata};
assign dispsize_w_rdata = 9'h13f;

wire [15:0] pxfifo_wdata = wdata[15:0];
wire [15:0] pxfifo_rdata;
wire [31:0] __pxfifo_rdata = {16'h0, pxfifo_rdata};
assign pxfifo_rdata = 16'h0;

always @ (*) begin
	case (addr)
		ADDR_CSR: rdata = __csr_rdata;
		ADDR_DISPSIZE: rdata = __dispsize_rdata;
		ADDR_PXFIFO: rdata = __pxfifo_rdata;
		default: rdata = 32'h0;
	endcase
	pxfifo_wen = __pxfifo_wen;
	pxfifo_o = pxfifo_wdata;
end

always @ (posedge clk or negedge rst_n) begin
	if (!rst_n) begin
		csr_lcd_cs_o <= 1'h1;
		csr_lcd_dc_o <= 1'h0;
		csr_lcd_shiftcnt_o <= 1'h0;
		dispsize_w_o <= 9'h13f;
	end else begin
		if (__csr_wen)
			csr_lcd_cs_o <= csr_lcd_cs_wdata;
		if (__csr_wen)
			csr_lcd_dc_o <= csr_lcd_dc_wdata;
		if (__csr_wen)
			csr_lcd_shiftcnt_o <= csr_lcd_shiftcnt_wdata;
		if (__dispsize_wen)
			dispsize_w_o <= dispsize_w_wdata;
	end
end

endmodule
