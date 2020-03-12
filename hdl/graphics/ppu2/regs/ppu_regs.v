/*******************************************************************************
*                          AUTOGENERATED BY REGBLOCK                           *
*                            Do not edit manually.                             *
*          Edit the source file (or regblock utility) and regenerate.          *
*******************************************************************************/

// Block name           : ppu
// Bus type             : apb
// Bus data width       : 32
// Bus address width    : 16

module ppu_regs (
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
	output reg  csr_run_o,
	input wire  csr_running_i,
	output reg  csr_halt_hsync_o,
	output reg  csr_halt_vsync_o,
	output reg [8:0] dispsize_w_o,
	output reg [7:0] dispsize_h_o,
	output reg [31:0] cproc_pc_o,
	output reg cproc_pc_wen,
	output reg [15:0] lcd_pxfifo_o,
	output reg lcd_pxfifo_wen,
	input wire  lcd_csr_pxfifo_empty_i,
	input wire  lcd_csr_pxfifo_full_i,
	input wire [5:0] lcd_csr_pxfifo_level_i,
	output reg  lcd_csr_lcd_cs_o,
	output reg  lcd_csr_lcd_dc_o,
	input wire  lcd_csr_tx_busy_i,
	output reg  lcd_csr_lcd_shiftcnt_o,
	input wire  ints_vsync_i,
	output reg  ints_vsync_o,
	input wire  ints_hsync_i,
	output reg  ints_hsync_o,
	output reg  inte_vsync_o,
	output reg  inte_hsync_o
);

// APB adapter
wire [31:0] wdata = apbs_pwdata;
reg [31:0] rdata;
wire wen = apbs_psel && apbs_penable && apbs_pwrite;
wire ren = apbs_psel && apbs_penable && !apbs_pwrite;
wire [15:0] addr = apbs_paddr & 16'h1c;
assign apbs_prdata = rdata;
assign apbs_pready = 1'b1;
assign apbs_pslverr = 1'b0;

localparam ADDR_CSR = 0;
localparam ADDR_DISPSIZE = 4;
localparam ADDR_CPROC_PC = 8;
localparam ADDR_LCD_PXFIFO = 12;
localparam ADDR_LCD_CSR = 16;
localparam ADDR_INTS = 20;
localparam ADDR_INTE = 24;

wire __csr_wen = wen && addr == ADDR_CSR;
wire __csr_ren = ren && addr == ADDR_CSR;
wire __dispsize_wen = wen && addr == ADDR_DISPSIZE;
wire __dispsize_ren = ren && addr == ADDR_DISPSIZE;
wire __cproc_pc_wen = wen && addr == ADDR_CPROC_PC;
wire __cproc_pc_ren = ren && addr == ADDR_CPROC_PC;
wire __lcd_pxfifo_wen = wen && addr == ADDR_LCD_PXFIFO;
wire __lcd_pxfifo_ren = ren && addr == ADDR_LCD_PXFIFO;
wire __lcd_csr_wen = wen && addr == ADDR_LCD_CSR;
wire __lcd_csr_ren = ren && addr == ADDR_LCD_CSR;
wire __ints_wen = wen && addr == ADDR_INTS;
wire __ints_ren = ren && addr == ADDR_INTS;
wire __inte_wen = wen && addr == ADDR_INTE;
wire __inte_ren = ren && addr == ADDR_INTE;

wire  csr_run_wdata = wdata[0];
wire  csr_run_rdata;
wire  csr_running_wdata = wdata[2];
wire  csr_running_rdata;
wire  csr_halt_hsync_wdata = wdata[3];
wire  csr_halt_hsync_rdata;
wire  csr_halt_vsync_wdata = wdata[4];
wire  csr_halt_vsync_rdata;
wire [31:0] __csr_rdata = {27'h0, csr_halt_vsync_rdata, csr_halt_hsync_rdata, csr_running_rdata, 1'h0, csr_run_rdata};
assign csr_run_rdata = 1'h0;
assign csr_running_rdata = csr_running_i;
assign csr_halt_hsync_rdata = csr_halt_hsync_o;
assign csr_halt_vsync_rdata = csr_halt_vsync_o;

wire [8:0] dispsize_w_wdata = wdata[8:0];
wire [8:0] dispsize_w_rdata;
wire [7:0] dispsize_h_wdata = wdata[23:16];
wire [7:0] dispsize_h_rdata;
wire [31:0] __dispsize_rdata = {8'h0, dispsize_h_rdata, 7'h0, dispsize_w_rdata};
assign dispsize_w_rdata = 9'h0;
assign dispsize_h_rdata = 8'h0;

wire [31:0] cproc_pc_wdata = wdata[31:0];
wire [31:0] cproc_pc_rdata;
wire [31:0] __cproc_pc_rdata = {cproc_pc_rdata};
assign cproc_pc_rdata = 32'h0;

wire [15:0] lcd_pxfifo_wdata = wdata[15:0];
wire [15:0] lcd_pxfifo_rdata;
wire [31:0] __lcd_pxfifo_rdata = {16'h0, lcd_pxfifo_rdata};
assign lcd_pxfifo_rdata = 16'h0;

wire  lcd_csr_pxfifo_empty_wdata = wdata[0];
wire  lcd_csr_pxfifo_empty_rdata;
wire  lcd_csr_pxfifo_full_wdata = wdata[1];
wire  lcd_csr_pxfifo_full_rdata;
wire [5:0] lcd_csr_pxfifo_level_wdata = wdata[7:2];
wire [5:0] lcd_csr_pxfifo_level_rdata;
wire  lcd_csr_lcd_cs_wdata = wdata[8];
wire  lcd_csr_lcd_cs_rdata;
wire  lcd_csr_lcd_dc_wdata = wdata[9];
wire  lcd_csr_lcd_dc_rdata;
wire  lcd_csr_tx_busy_wdata = wdata[10];
wire  lcd_csr_tx_busy_rdata;
wire  lcd_csr_lcd_shiftcnt_wdata = wdata[16];
wire  lcd_csr_lcd_shiftcnt_rdata;
wire [31:0] __lcd_csr_rdata = {15'h0, lcd_csr_lcd_shiftcnt_rdata, 5'h0, lcd_csr_tx_busy_rdata, lcd_csr_lcd_dc_rdata, lcd_csr_lcd_cs_rdata, lcd_csr_pxfifo_level_rdata, lcd_csr_pxfifo_full_rdata, lcd_csr_pxfifo_empty_rdata};
assign lcd_csr_pxfifo_empty_rdata = lcd_csr_pxfifo_empty_i;
assign lcd_csr_pxfifo_full_rdata = lcd_csr_pxfifo_full_i;
assign lcd_csr_pxfifo_level_rdata = lcd_csr_pxfifo_level_i;
assign lcd_csr_lcd_cs_rdata = lcd_csr_lcd_cs_o;
assign lcd_csr_lcd_dc_rdata = lcd_csr_lcd_dc_o;
assign lcd_csr_tx_busy_rdata = lcd_csr_tx_busy_i;
assign lcd_csr_lcd_shiftcnt_rdata = lcd_csr_lcd_shiftcnt_o;

wire  ints_vsync_wdata = wdata[0];
wire  ints_vsync_rdata;
wire  ints_hsync_wdata = wdata[1];
wire  ints_hsync_rdata;
wire [31:0] __ints_rdata = {30'h0, ints_hsync_rdata, ints_vsync_rdata};
reg  ints_vsync;
assign ints_vsync_rdata = ints_vsync;
reg  ints_hsync;
assign ints_hsync_rdata = ints_hsync;

wire  inte_vsync_wdata = wdata[0];
wire  inte_vsync_rdata;
wire  inte_hsync_wdata = wdata[1];
wire  inte_hsync_rdata;
wire [31:0] __inte_rdata = {30'h0, inte_hsync_rdata, inte_vsync_rdata};
assign inte_vsync_rdata = inte_vsync_o;
assign inte_hsync_rdata = inte_hsync_o;

always @ (*) begin
	case (addr)
		ADDR_CSR: rdata = __csr_rdata;
		ADDR_DISPSIZE: rdata = __dispsize_rdata;
		ADDR_CPROC_PC: rdata = __cproc_pc_rdata;
		ADDR_LCD_PXFIFO: rdata = __lcd_pxfifo_rdata;
		ADDR_LCD_CSR: rdata = __lcd_csr_rdata;
		ADDR_INTS: rdata = __ints_rdata;
		ADDR_INTE: rdata = __inte_rdata;
		default: rdata = 32'h0;
	endcase
	csr_run_o = csr_run_wdata & {1{__csr_wen}};
	cproc_pc_wen = __cproc_pc_wen;
	cproc_pc_o = cproc_pc_wdata;
	lcd_pxfifo_wen = __lcd_pxfifo_wen;
	lcd_pxfifo_o = lcd_pxfifo_wdata;
	ints_vsync_o = ints_vsync;
	ints_hsync_o = ints_hsync;
end

always @ (posedge clk or negedge rst_n) begin
	if (!rst_n) begin
		csr_halt_hsync_o <= 1'h0;
		csr_halt_vsync_o <= 1'h0;
		dispsize_w_o <= 9'h0;
		dispsize_h_o <= 8'h0;
		lcd_csr_lcd_cs_o <= 1'h1;
		lcd_csr_lcd_dc_o <= 1'h0;
		lcd_csr_lcd_shiftcnt_o <= 1'h0;
		ints_vsync <= 1'h0;
		ints_hsync <= 1'h0;
		inte_vsync_o <= 1'h0;
		inte_hsync_o <= 1'h0;
	end else begin
		if (__csr_wen)
			csr_halt_hsync_o <= csr_halt_hsync_wdata;
		if (__csr_wen)
			csr_halt_vsync_o <= csr_halt_vsync_wdata;
		if (__dispsize_wen)
			dispsize_w_o <= dispsize_w_wdata;
		if (__dispsize_wen)
			dispsize_h_o <= dispsize_h_wdata;
		if (__lcd_csr_wen)
			lcd_csr_lcd_cs_o <= lcd_csr_lcd_cs_wdata;
		if (__lcd_csr_wen)
			lcd_csr_lcd_dc_o <= lcd_csr_lcd_dc_wdata;
		if (__lcd_csr_wen)
			lcd_csr_lcd_shiftcnt_o <= lcd_csr_lcd_shiftcnt_wdata;
		ints_vsync <= (ints_vsync && !(__ints_wen && ints_vsync_wdata)) || ints_vsync_i;
		ints_hsync <= (ints_hsync && !(__ints_wen && ints_hsync_wdata)) || ints_hsync_i;
		if (__inte_wen)
			inte_vsync_o <= inte_vsync_wdata;
		if (__inte_wen)
			inte_hsync_o <= inte_hsync_wdata;
	end
end

endmodule
