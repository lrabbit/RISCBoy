/*******************************************************************************
*                          AUTOGENERATED BY REGBLOCK                           *
*                            Do not edit manually.                             *
*          Edit the source file (or regblock utility) and regenerate.          *
*******************************************************************************/

#ifndef _GPIO_REGS_H_
#define _GPIO_REGS_H_

// Block name           : gpio
// Bus type             : apb
// Bus data width       : 32
// Bus address width    : 16

#define GPIO_OUT_OFFS 0
#define GPIO_DIR_OFFS 4
#define GPIO_IN_OFFS 8
#define GPIO_FSEL0_OFFS 12

/*******************************************************************************
*                                     OUT                                      *
*******************************************************************************/

// Processor GPIO pin write register (FSEL 0)

// Field OUT
#define GPIO_OUT_LSB  0
#define GPIO_OUT_BITS 23
#define GPIO_OUT_MASK 0x7fffff

/*******************************************************************************
*                                     DIR                                      *
*******************************************************************************/

// Processor GPIO output enables (FSEL 0)

// Field DIR
#define GPIO_DIR_LSB  0
#define GPIO_DIR_BITS 23
#define GPIO_DIR_MASK 0x7fffff

/*******************************************************************************
*                                      IN                                      *
*******************************************************************************/

// Processor GPIO pin read values (FSEL 0)

// Field IN
#define GPIO_IN_LSB  0
#define GPIO_IN_BITS 23
#define GPIO_IN_MASK 0x7fffff

/*******************************************************************************
*                                    FSEL0                                     *
*******************************************************************************/

// Function select register 0

// Field FSEL0_P0
#define GPIO_FSEL0_P0_LSB  0
#define GPIO_FSEL0_P0_BITS 1
#define GPIO_FSEL0_P0_MASK 0x1
// Field FSEL0_P1
#define GPIO_FSEL0_P1_LSB  1
#define GPIO_FSEL0_P1_BITS 1
#define GPIO_FSEL0_P1_MASK 0x2
// Field FSEL0_P2
#define GPIO_FSEL0_P2_LSB  2
#define GPIO_FSEL0_P2_BITS 1
#define GPIO_FSEL0_P2_MASK 0x4
// Field FSEL0_P3
#define GPIO_FSEL0_P3_LSB  3
#define GPIO_FSEL0_P3_BITS 1
#define GPIO_FSEL0_P3_MASK 0x8
// Field FSEL0_P4
#define GPIO_FSEL0_P4_LSB  4
#define GPIO_FSEL0_P4_BITS 1
#define GPIO_FSEL0_P4_MASK 0x10
// Field FSEL0_P5
#define GPIO_FSEL0_P5_LSB  5
#define GPIO_FSEL0_P5_BITS 1
#define GPIO_FSEL0_P5_MASK 0x20
// Field FSEL0_P6
#define GPIO_FSEL0_P6_LSB  6
#define GPIO_FSEL0_P6_BITS 1
#define GPIO_FSEL0_P6_MASK 0x40
// Field FSEL0_P7
#define GPIO_FSEL0_P7_LSB  7
#define GPIO_FSEL0_P7_BITS 1
#define GPIO_FSEL0_P7_MASK 0x80
// Field FSEL0_P8
#define GPIO_FSEL0_P8_LSB  8
#define GPIO_FSEL0_P8_BITS 1
#define GPIO_FSEL0_P8_MASK 0x100
// Field FSEL0_P9
#define GPIO_FSEL0_P9_LSB  9
#define GPIO_FSEL0_P9_BITS 1
#define GPIO_FSEL0_P9_MASK 0x200
// Field FSEL0_P10
#define GPIO_FSEL0_P10_LSB  10
#define GPIO_FSEL0_P10_BITS 1
#define GPIO_FSEL0_P10_MASK 0x400
// Field FSEL0_P11
#define GPIO_FSEL0_P11_LSB  11
#define GPIO_FSEL0_P11_BITS 1
#define GPIO_FSEL0_P11_MASK 0x800
// Field FSEL0_P12
#define GPIO_FSEL0_P12_LSB  12
#define GPIO_FSEL0_P12_BITS 1
#define GPIO_FSEL0_P12_MASK 0x1000
// Field FSEL0_P13
#define GPIO_FSEL0_P13_LSB  13
#define GPIO_FSEL0_P13_BITS 1
#define GPIO_FSEL0_P13_MASK 0x2000
// Field FSEL0_P14
#define GPIO_FSEL0_P14_LSB  14
#define GPIO_FSEL0_P14_BITS 1
#define GPIO_FSEL0_P14_MASK 0x4000
// Field FSEL0_P15
#define GPIO_FSEL0_P15_LSB  15
#define GPIO_FSEL0_P15_BITS 1
#define GPIO_FSEL0_P15_MASK 0x8000
// Field FSEL0_P16
#define GPIO_FSEL0_P16_LSB  16
#define GPIO_FSEL0_P16_BITS 1
#define GPIO_FSEL0_P16_MASK 0x10000
// Field FSEL0_P17
#define GPIO_FSEL0_P17_LSB  17
#define GPIO_FSEL0_P17_BITS 1
#define GPIO_FSEL0_P17_MASK 0x20000
// Field FSEL0_P18
#define GPIO_FSEL0_P18_LSB  18
#define GPIO_FSEL0_P18_BITS 1
#define GPIO_FSEL0_P18_MASK 0x40000
// Field FSEL0_P19
#define GPIO_FSEL0_P19_LSB  19
#define GPIO_FSEL0_P19_BITS 1
#define GPIO_FSEL0_P19_MASK 0x80000
// Field FSEL0_P20
#define GPIO_FSEL0_P20_LSB  20
#define GPIO_FSEL0_P20_BITS 1
#define GPIO_FSEL0_P20_MASK 0x100000
// Field FSEL0_P21
#define GPIO_FSEL0_P21_LSB  21
#define GPIO_FSEL0_P21_BITS 1
#define GPIO_FSEL0_P21_MASK 0x200000
// Field FSEL0_P22
#define GPIO_FSEL0_P22_LSB  22
#define GPIO_FSEL0_P22_BITS 1
#define GPIO_FSEL0_P22_MASK 0x400000

#endif // _GPIO_REGS_H_
