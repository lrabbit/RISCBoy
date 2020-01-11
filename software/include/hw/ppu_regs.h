/*******************************************************************************
*                          AUTOGENERATED BY REGBLOCK                           *
*                            Do not edit manually.                             *
*          Edit the source file (or regblock utility) and regenerate.          *
*******************************************************************************/

#ifndef _PPU_REGS_H_
#define _PPU_REGS_H_

// Block name           : ppu
// Bus type             : apb
// Bus data width       : 32
// Bus address width    : 16

#define PPU_CSR_OFFS 0
#define PPU_DISPSIZE_OFFS 4
#define PPU_DEFAULT_BG_COLOUR_OFFS 8
#define PPU_BEAM_OFFS 12
#define PPU_POKER_PC_OFFS 16
#define PPU_POKER_SCRATCH_OFFS 20
#define PPU_BG0_CSR_OFFS 24
#define PPU_BG0_SCROLL_OFFS 28
#define PPU_BG0_TSBASE_OFFS 32
#define PPU_BG0_TMBASE_OFFS 36
#define PPU_BG1_CSR_OFFS 40
#define PPU_BG1_SCROLL_OFFS 44
#define PPU_BG1_TSBASE_OFFS 48
#define PPU_BG1_TMBASE_OFFS 52
#define PPU_SP_CSR_OFFS 56
#define PPU_SP_TSBASE_OFFS 60
#define PPU_SP0_OFFS 64
#define PPU_SP1_OFFS 68
#define PPU_SP2_OFFS 72
#define PPU_SP3_OFFS 76
#define PPU_SP4_OFFS 80
#define PPU_SP5_OFFS 84
#define PPU_SP6_OFFS 88
#define PPU_SP7_OFFS 92
#define PPU_LCD_PXFIFO_OFFS 96
#define PPU_LCD_CSR_OFFS 100
#define PPU_INTS_OFFS 104
#define PPU_INTE_OFFS 108

/*******************************************************************************
*                                     CSR                                      *
*******************************************************************************/

// PPU control and status register

// Field: CSR_RUN  Access: SC
// Write 1 to start the PPU running. Self-clearing strobe
#define PPU_CSR_RUN_LSB  0
#define PPU_CSR_RUN_BITS 1
#define PPU_CSR_RUN_MASK 0x1
// Field: CSR_HALT  Access: SC
// Write 1 to manually halt the PPU. Self-clearing strobe
#define PPU_CSR_HALT_LSB  1
#define PPU_CSR_HALT_BITS 1
#define PPU_CSR_HALT_MASK 0x2
// Field: CSR_RUNNING  Access: ROV
// Reads as 1 if PPU is running, otherwise 0
#define PPU_CSR_RUNNING_LSB  2
#define PPU_CSR_RUNNING_BITS 1
#define PPU_CSR_RUNNING_MASK 0x4
// Field: CSR_HALT_HSYNC  Access: RW
// If 1, the PPU will halt automatically after completing a scanline
#define PPU_CSR_HALT_HSYNC_LSB  3
#define PPU_CSR_HALT_HSYNC_BITS 1
#define PPU_CSR_HALT_HSYNC_MASK 0x8
// Field: CSR_HALT_VSYNC  Access: RW
// If 1, the PPU will halt automatically after completing a frame
#define PPU_CSR_HALT_VSYNC_LSB  4
#define PPU_CSR_HALT_VSYNC_BITS 1
#define PPU_CSR_HALT_VSYNC_MASK 0x10
// Field: CSR_POKER_EN  Access: RW
// Enable the Poker. While Poker is running, PPU will not produce pixels unless
// Poker is in a WAIT state.
#define PPU_CSR_POKER_EN_LSB  8
#define PPU_CSR_POKER_EN_BITS 1
#define PPU_CSR_POKER_EN_MASK 0x100

/*******************************************************************************
*                                   DISPSIZE                                   *
*******************************************************************************/

// Configure display dimensions. Actual width is W + 1, height is H + 1

// Field: DISPSIZE_W  Access: WO
#define PPU_DISPSIZE_W_LSB  0
#define PPU_DISPSIZE_W_BITS 9
#define PPU_DISPSIZE_W_MASK 0x1ff
// Field: DISPSIZE_H  Access: WO
#define PPU_DISPSIZE_H_LSB  16
#define PPU_DISPSIZE_H_BITS 9
#define PPU_DISPSIZE_H_MASK 0x1ff0000

/*******************************************************************************
*                              DEFAULT_BG_COLOUR                               *
*******************************************************************************/

// Colour displayed when all blended pixels are transparent, or all
// sprites/backgrounds are disabled.

// Field: DEFAULT_BG_COLOUR  Access: WO
#define PPU_DEFAULT_BG_COLOUR_LSB  0
#define PPU_DEFAULT_BG_COLOUR_BITS 15
#define PPU_DEFAULT_BG_COLOUR_MASK 0x7fff

/*******************************************************************************
*                                     BEAM                                     *
*******************************************************************************/

// Scan coordinates of the next pixel to be blended (read-only)

// Field: BEAM_X  Access: ROV
#define PPU_BEAM_X_LSB  0
#define PPU_BEAM_X_BITS 9
#define PPU_BEAM_X_MASK 0x1ff
// Field: BEAM_Y  Access: ROV
#define PPU_BEAM_Y_LSB  16
#define PPU_BEAM_Y_BITS 9
#define PPU_BEAM_Y_MASK 0x1ff0000

/*******************************************************************************
*                                   POKER_PC                                   *
*******************************************************************************/

// Write to Poker program counter

// Field: POKER_PC  Access: WF
#define PPU_POKER_PC_LSB  0
#define PPU_POKER_PC_BITS 32
#define PPU_POKER_PC_MASK 0xffffffff

/*******************************************************************************
*                                POKER_SCRATCH                                 *
*******************************************************************************/

// Scratch register -- can be written to by poker and read by processor

// Field: POKER_SCRATCH  Access: RW
#define PPU_POKER_SCRATCH_LSB  0
#define PPU_POKER_SCRATCH_BITS 8
#define PPU_POKER_SCRATCH_MASK 0xff

/*******************************************************************************
*                                   BG0_CSR                                    *
*******************************************************************************/

// Control and status register for BG0.

// Field: BG0_CSR_EN  Access: WO
// If not enabled, will continuously output transparent pixels to blender
#define PPU_BG0_CSR_EN_LSB  0
#define PPU_BG0_CSR_EN_BITS 1
#define PPU_BG0_CSR_EN_MASK 0x1
// Field: BG0_CSR_PIXMODE  Access: WO
#define PPU_BG0_CSR_PIXMODE_LSB  1
#define PPU_BG0_CSR_PIXMODE_BITS 3
#define PPU_BG0_CSR_PIXMODE_MASK 0xe
// Field: BG0_CSR_TRANSPARENCY  Access: WO
#define PPU_BG0_CSR_TRANSPARENCY_LSB  4
#define PPU_BG0_CSR_TRANSPARENCY_BITS 1
#define PPU_BG0_CSR_TRANSPARENCY_MASK 0x10
// Field: BG0_CSR_TILESIZE  Access: WO
// 0 -> 8 px tiles. 1 -> 16 px tiles.
#define PPU_BG0_CSR_TILESIZE_LSB  5
#define PPU_BG0_CSR_TILESIZE_BITS 1
#define PPU_BG0_CSR_TILESIZE_MASK 0x20
// Field: BG0_CSR_PFWIDTH  Access: WO
// Playfield width is 2 ** (PFWIDTH + 4) pixels.
#define PPU_BG0_CSR_PFWIDTH_LSB  6
#define PPU_BG0_CSR_PFWIDTH_BITS 3
#define PPU_BG0_CSR_PFWIDTH_MASK 0x1c0
// Field: BG0_CSR_PFHEIGHT  Access: WO
// Playfield height is 2 ** (PFHEIGHT + 4) pixels.
#define PPU_BG0_CSR_PFHEIGHT_LSB  10
#define PPU_BG0_CSR_PFHEIGHT_BITS 3
#define PPU_BG0_CSR_PFHEIGHT_MASK 0x1c00
// Field: BG0_CSR_PALOFFS  Access: WO
// Offset ORed into upper 4 bits of palette index in paletted pixel modes.
#define PPU_BG0_CSR_PALOFFS_LSB  16
#define PPU_BG0_CSR_PALOFFS_BITS 4
#define PPU_BG0_CSR_PALOFFS_MASK 0xf0000

/*******************************************************************************
*                                  BG0_SCROLL                                  *
*******************************************************************************/

// Scroll the screen within the playfield

// Field: BG0_SCROLL_Y  Access: WO
#define PPU_BG0_SCROLL_Y_LSB  16
#define PPU_BG0_SCROLL_Y_BITS 10
#define PPU_BG0_SCROLL_Y_MASK 0x3ff0000
// Field: BG0_SCROLL_X  Access: WO
#define PPU_BG0_SCROLL_X_LSB  0
#define PPU_BG0_SCROLL_X_BITS 10
#define PPU_BG0_SCROLL_X_MASK 0x3ff

/*******************************************************************************
*                                  BG0_TSBASE                                  *
*******************************************************************************/

// Base address for BG0 tileset. Tileset must be naturally aligned.

// Field: BG0_TSBASE  Access: WO
#define PPU_BG0_TSBASE_LSB  8
#define PPU_BG0_TSBASE_BITS 24
#define PPU_BG0_TSBASE_MASK 0xffffff00

/*******************************************************************************
*                                  BG0_TMBASE                                  *
*******************************************************************************/

// Base address for BG0 tilemap. Tilemap must be naturally aligned.

// Field: BG0_TMBASE  Access: WO
#define PPU_BG0_TMBASE_LSB  8
#define PPU_BG0_TMBASE_BITS 24
#define PPU_BG0_TMBASE_MASK 0xffffff00

/*******************************************************************************
*                                   BG1_CSR                                    *
*******************************************************************************/

// Control and status register for BG1.

// Field: BG1_CSR_EN  Access: WO
// If not enabled, will continuously output transparent pixels to blender
#define PPU_BG1_CSR_EN_LSB  0
#define PPU_BG1_CSR_EN_BITS 1
#define PPU_BG1_CSR_EN_MASK 0x1
// Field: BG1_CSR_PIXMODE  Access: WO
#define PPU_BG1_CSR_PIXMODE_LSB  1
#define PPU_BG1_CSR_PIXMODE_BITS 3
#define PPU_BG1_CSR_PIXMODE_MASK 0xe
// Field: BG1_CSR_TRANSPARENCY  Access: WO
#define PPU_BG1_CSR_TRANSPARENCY_LSB  4
#define PPU_BG1_CSR_TRANSPARENCY_BITS 1
#define PPU_BG1_CSR_TRANSPARENCY_MASK 0x10
// Field: BG1_CSR_TILESIZE  Access: WO
// 0 -> 8 px tiles. 1 -> 16 px tiles.
#define PPU_BG1_CSR_TILESIZE_LSB  5
#define PPU_BG1_CSR_TILESIZE_BITS 1
#define PPU_BG1_CSR_TILESIZE_MASK 0x20
// Field: BG1_CSR_PFWIDTH  Access: WO
// Playfield width is 2 ** (PFWIDTH + 4) pixels.
#define PPU_BG1_CSR_PFWIDTH_LSB  6
#define PPU_BG1_CSR_PFWIDTH_BITS 3
#define PPU_BG1_CSR_PFWIDTH_MASK 0x1c0
// Field: BG1_CSR_PFHEIGHT  Access: WO
// Playfield height is 2 ** (PFHEIGHT + 4) pixels.
#define PPU_BG1_CSR_PFHEIGHT_LSB  10
#define PPU_BG1_CSR_PFHEIGHT_BITS 3
#define PPU_BG1_CSR_PFHEIGHT_MASK 0x1c00
// Field: BG1_CSR_PALOFFS  Access: WO
// Offset ORed into upper 4 bits of palette index in paletted pixel modes.
#define PPU_BG1_CSR_PALOFFS_LSB  16
#define PPU_BG1_CSR_PALOFFS_BITS 4
#define PPU_BG1_CSR_PALOFFS_MASK 0xf0000

/*******************************************************************************
*                                  BG1_SCROLL                                  *
*******************************************************************************/

// Scroll the screen within the playfield

// Field: BG1_SCROLL_Y  Access: WO
#define PPU_BG1_SCROLL_Y_LSB  16
#define PPU_BG1_SCROLL_Y_BITS 10
#define PPU_BG1_SCROLL_Y_MASK 0x3ff0000
// Field: BG1_SCROLL_X  Access: WO
#define PPU_BG1_SCROLL_X_LSB  0
#define PPU_BG1_SCROLL_X_BITS 10
#define PPU_BG1_SCROLL_X_MASK 0x3ff

/*******************************************************************************
*                                  BG1_TSBASE                                  *
*******************************************************************************/

// Base address for BG1 tileset. Tileset must be naturally aligned.

// Field: BG1_TSBASE  Access: WO
#define PPU_BG1_TSBASE_LSB  8
#define PPU_BG1_TSBASE_BITS 24
#define PPU_BG1_TSBASE_MASK 0xffffff00

/*******************************************************************************
*                                  BG1_TMBASE                                  *
*******************************************************************************/

// Base address for BG1 tilemap. Tilemap must be naturally aligned.

// Field: BG1_TMBASE  Access: WO
#define PPU_BG1_TMBASE_LSB  8
#define PPU_BG1_TMBASE_BITS 24
#define PPU_BG1_TMBASE_MASK 0xffffff00

/*******************************************************************************
*                                    SP_CSR                                    *
*******************************************************************************/

// Global settings for all sprites

// Field: SP_CSR_PIXMODE  Access: WO
#define PPU_SP_CSR_PIXMODE_LSB  1
#define PPU_SP_CSR_PIXMODE_BITS 3
#define PPU_SP_CSR_PIXMODE_MASK 0xe
// Field: SP_CSR_TILESIZE  Access: WO
// 0 -> all sprites are 8x8 px. 1 -> all are 16x16 px.
#define PPU_SP_CSR_TILESIZE_LSB  5
#define PPU_SP_CSR_TILESIZE_BITS 1
#define PPU_SP_CSR_TILESIZE_MASK 0x20

/*******************************************************************************
*                                  SP_TSBASE                                   *
*******************************************************************************/

// Pointer to tileset used for sprite images. This can be shared with a
// background, provided the pixel format and tile size are the same. Tileset
// pointer must be aligned on tileset size, rounded up to power of two, or on a
// 256 byte boundary -- whichever is larger.

// Field: SP_TSBASE  Access: WO
#define PPU_SP_TSBASE_LSB  8
#define PPU_SP_TSBASE_BITS 24
#define PPU_SP_TSBASE_MASK 0xffffff00

/*******************************************************************************
*                                     SP0                                      *
*******************************************************************************/

// Control register for sprite 0

// Field: SP0_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP0_TILE_LSB  24
#define PPU_SP0_TILE_BITS 8
#define PPU_SP0_TILE_MASK 0xff000000
// Field: SP0_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP0_PALOFFS_LSB  20
#define PPU_SP0_PALOFFS_BITS 4
#define PPU_SP0_PALOFFS_MASK 0xf00000
// Field: SP0_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP0_Y_LSB  10
#define PPU_SP0_Y_BITS 9
#define PPU_SP0_Y_MASK 0x7fc00
// Field: SP0_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP0_X_LSB  0
#define PPU_SP0_X_BITS 9
#define PPU_SP0_X_MASK 0x1ff

/*******************************************************************************
*                                     SP1                                      *
*******************************************************************************/

// Control register for sprite 1

// Field: SP1_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP1_TILE_LSB  24
#define PPU_SP1_TILE_BITS 8
#define PPU_SP1_TILE_MASK 0xff000000
// Field: SP1_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP1_PALOFFS_LSB  20
#define PPU_SP1_PALOFFS_BITS 4
#define PPU_SP1_PALOFFS_MASK 0xf00000
// Field: SP1_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP1_Y_LSB  10
#define PPU_SP1_Y_BITS 9
#define PPU_SP1_Y_MASK 0x7fc00
// Field: SP1_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP1_X_LSB  0
#define PPU_SP1_X_BITS 9
#define PPU_SP1_X_MASK 0x1ff

/*******************************************************************************
*                                     SP2                                      *
*******************************************************************************/

// Control register for sprite 2

// Field: SP2_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP2_TILE_LSB  24
#define PPU_SP2_TILE_BITS 8
#define PPU_SP2_TILE_MASK 0xff000000
// Field: SP2_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP2_PALOFFS_LSB  20
#define PPU_SP2_PALOFFS_BITS 4
#define PPU_SP2_PALOFFS_MASK 0xf00000
// Field: SP2_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP2_Y_LSB  10
#define PPU_SP2_Y_BITS 9
#define PPU_SP2_Y_MASK 0x7fc00
// Field: SP2_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP2_X_LSB  0
#define PPU_SP2_X_BITS 9
#define PPU_SP2_X_MASK 0x1ff

/*******************************************************************************
*                                     SP3                                      *
*******************************************************************************/

// Control register for sprite 3

// Field: SP3_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP3_TILE_LSB  24
#define PPU_SP3_TILE_BITS 8
#define PPU_SP3_TILE_MASK 0xff000000
// Field: SP3_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP3_PALOFFS_LSB  20
#define PPU_SP3_PALOFFS_BITS 4
#define PPU_SP3_PALOFFS_MASK 0xf00000
// Field: SP3_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP3_Y_LSB  10
#define PPU_SP3_Y_BITS 9
#define PPU_SP3_Y_MASK 0x7fc00
// Field: SP3_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP3_X_LSB  0
#define PPU_SP3_X_BITS 9
#define PPU_SP3_X_MASK 0x1ff

/*******************************************************************************
*                                     SP4                                      *
*******************************************************************************/

// Control register for sprite 4

// Field: SP4_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP4_TILE_LSB  24
#define PPU_SP4_TILE_BITS 8
#define PPU_SP4_TILE_MASK 0xff000000
// Field: SP4_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP4_PALOFFS_LSB  20
#define PPU_SP4_PALOFFS_BITS 4
#define PPU_SP4_PALOFFS_MASK 0xf00000
// Field: SP4_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP4_Y_LSB  10
#define PPU_SP4_Y_BITS 9
#define PPU_SP4_Y_MASK 0x7fc00
// Field: SP4_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP4_X_LSB  0
#define PPU_SP4_X_BITS 9
#define PPU_SP4_X_MASK 0x1ff

/*******************************************************************************
*                                     SP5                                      *
*******************************************************************************/

// Control register for sprite 5

// Field: SP5_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP5_TILE_LSB  24
#define PPU_SP5_TILE_BITS 8
#define PPU_SP5_TILE_MASK 0xff000000
// Field: SP5_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP5_PALOFFS_LSB  20
#define PPU_SP5_PALOFFS_BITS 4
#define PPU_SP5_PALOFFS_MASK 0xf00000
// Field: SP5_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP5_Y_LSB  10
#define PPU_SP5_Y_BITS 9
#define PPU_SP5_Y_MASK 0x7fc00
// Field: SP5_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP5_X_LSB  0
#define PPU_SP5_X_BITS 9
#define PPU_SP5_X_MASK 0x1ff

/*******************************************************************************
*                                     SP6                                      *
*******************************************************************************/

// Control register for sprite 6

// Field: SP6_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP6_TILE_LSB  24
#define PPU_SP6_TILE_BITS 8
#define PPU_SP6_TILE_MASK 0xff000000
// Field: SP6_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP6_PALOFFS_LSB  20
#define PPU_SP6_PALOFFS_BITS 4
#define PPU_SP6_PALOFFS_MASK 0xf00000
// Field: SP6_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP6_Y_LSB  10
#define PPU_SP6_Y_BITS 9
#define PPU_SP6_Y_MASK 0x7fc00
// Field: SP6_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP6_X_LSB  0
#define PPU_SP6_X_BITS 9
#define PPU_SP6_X_MASK 0x1ff

/*******************************************************************************
*                                     SP7                                      *
*******************************************************************************/

// Control register for sprite 7

// Field: SP7_TILE  Access: WO
// Select tile from sprite tilemap for this sprite
#define PPU_SP7_TILE_LSB  24
#define PPU_SP7_TILE_BITS 8
#define PPU_SP7_TILE_MASK 0xff000000
// Field: SP7_PALOFFS  Access: WO
// Offset ORed into bits [7:4] of palette index if SP_CSR_PIXMODE is paletted
#define PPU_SP7_PALOFFS_LSB  20
#define PPU_SP7_PALOFFS_BITS 4
#define PPU_SP7_PALOFFS_MASK 0xf00000
// Field: SP7_Y  Access: WO
// Y position of sprite. The hardware adjusts this downward by one sprite
// height, so a value of 0 means fully above screen.
#define PPU_SP7_Y_LSB  10
#define PPU_SP7_Y_BITS 9
#define PPU_SP7_Y_MASK 0x7fc00
// Field: SP7_X  Access: WO
// X position of sprite. The hardware adjusts this downward by one sprite width,
// so a value of 0 means fully off left of screen.
#define PPU_SP7_X_LSB  0
#define PPU_SP7_X_BITS 9
#define PPU_SP7_X_MASK 0x1ff

/*******************************************************************************
*                                  LCD_PXFIFO                                  *
*******************************************************************************/

// Direct write access to the pixel FIFO. Must only be used when the PPU is
// idle.

// Field: LCD_PXFIFO  Access: WF
#define PPU_LCD_PXFIFO_LSB  0
#define PPU_LCD_PXFIFO_BITS 16
#define PPU_LCD_PXFIFO_MASK 0xffff

/*******************************************************************************
*                                   LCD_CSR                                    *
*******************************************************************************/

// Control and status register for the LCD interface

// Field: LCD_CSR_PXFIFO_EMPTY  Access: ROV
#define PPU_LCD_CSR_PXFIFO_EMPTY_LSB  0
#define PPU_LCD_CSR_PXFIFO_EMPTY_BITS 1
#define PPU_LCD_CSR_PXFIFO_EMPTY_MASK 0x1
// Field: LCD_CSR_PXFIFO_FULL  Access: ROV
#define PPU_LCD_CSR_PXFIFO_FULL_LSB  1
#define PPU_LCD_CSR_PXFIFO_FULL_BITS 1
#define PPU_LCD_CSR_PXFIFO_FULL_MASK 0x2
// Field: LCD_CSR_PXFIFO_LEVEL  Access: ROV
#define PPU_LCD_CSR_PXFIFO_LEVEL_LSB  2
#define PPU_LCD_CSR_PXFIFO_LEVEL_BITS 6
#define PPU_LCD_CSR_PXFIFO_LEVEL_MASK 0xfc
// Field: LCD_CSR_LCD_CS  Access: RW
#define PPU_LCD_CSR_LCD_CS_LSB  8
#define PPU_LCD_CSR_LCD_CS_BITS 1
#define PPU_LCD_CSR_LCD_CS_MASK 0x100
// Field: LCD_CSR_LCD_DC  Access: RW
#define PPU_LCD_CSR_LCD_DC_LSB  9
#define PPU_LCD_CSR_LCD_DC_BITS 1
#define PPU_LCD_CSR_LCD_DC_MASK 0x200
// Field: LCD_CSR_TX_BUSY  Access: ROV
#define PPU_LCD_CSR_TX_BUSY_LSB  10
#define PPU_LCD_CSR_TX_BUSY_BITS 1
#define PPU_LCD_CSR_TX_BUSY_MASK 0x400
// Field: LCD_CSR_LCD_SHIFTCNT  Access: RW
// 1 for 16-bit, 0 for 8-bit
#define PPU_LCD_CSR_LCD_SHIFTCNT_LSB  16
#define PPU_LCD_CSR_LCD_SHIFTCNT_BITS 1
#define PPU_LCD_CSR_LCD_SHIFTCNT_MASK 0x10000

/*******************************************************************************
*                                     INTS                                     *
*******************************************************************************/

// Status of interrupt sources. Each source is write-1-clear.

// Field: INTS_VSYNC  Access: RWF
#define PPU_INTS_VSYNC_LSB  0
#define PPU_INTS_VSYNC_BITS 1
#define PPU_INTS_VSYNC_MASK 0x1
// Field: INTS_HSYNC  Access: RWF
#define PPU_INTS_HSYNC_LSB  1
#define PPU_INTS_HSYNC_BITS 1
#define PPU_INTS_HSYNC_MASK 0x2

/*******************************************************************************
*                                     INTE                                     *
*******************************************************************************/

// Interrupt enable mask

// Field: INTE_VSYNC  Access: RW
#define PPU_INTE_VSYNC_LSB  0
#define PPU_INTE_VSYNC_BITS 1
#define PPU_INTE_VSYNC_MASK 0x1
// Field: INTE_HSYNC  Access: RW
#define PPU_INTE_HSYNC_LSB  1
#define PPU_INTE_HSYNC_BITS 1
#define PPU_INTE_HSYNC_MASK 0x2

#endif // _PPU_REGS_H_
