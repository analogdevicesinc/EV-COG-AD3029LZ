/*
 **
 ** Source file generated on March 4, 2019 at 16:01:04.	
 **
 ** Copyright (C) 2011-2019 Analog Devices Inc., All Rights Reserved.
 **
 ** This file is generated automatically based upon the options selected in 
 ** the Pin Multiplexing configuration editor. Changes to the Pin Multiplexing
 ** configuration should be made by changing the appropriate options rather
 ** than editing this file.
 **
 ** Selected Peripherals
 ** --------------------
 ** SPI0 (SCLK, MOSI, MISO, CS_2)
 ** SPI1 (SCLK, MISO, MOSI, CS_3)
 ** SPI2 (SCLK, MISO, MOSI)
 ** I2C0 (SCL0, SDA0)
 ** UART0 (Tx, Rx)
 ** SYS_WAKEUP (sys_wake2)
 **
 ** GPIO (unavailable)
 ** ------------------
 ** P0_00, P0_01, P0_02, P0_04, P0_05, P0_10, P0_11, P0_13, P1_02, P1_03, P1_04, P1_06,
 ** P1_07, P1_08, P1_10, P2_08
 */

#include <sys/platform.h>
#include <stdint.h>

#define SPI0_SCLK_PORTP0_MUX  ((uint16_t) ((uint16_t) 1<<0))
#define SPI0_MOSI_PORTP0_MUX  ((uint16_t) ((uint16_t) 1<<2))
#define SPI0_MISO_PORTP0_MUX  ((uint16_t) ((uint16_t) 1<<4))
#define SPI0_CS_2_PORTP2_MUX  ((uint32_t) ((uint32_t) 2<<16))
#define SPI1_SCLK_PORTP1_MUX  ((uint16_t) ((uint16_t) 1<<12))
#define SPI1_MISO_PORTP1_MUX  ((uint16_t) ((uint16_t) 1<<14))
#define SPI1_MOSI_PORTP1_MUX  ((uint32_t) ((uint32_t) 1<<16))
#define SPI1_CS_3_PORTP1_MUX  ((uint32_t) ((uint32_t) 3<<20))
#define SPI2_SCLK_PORTP1_MUX  ((uint16_t) ((uint16_t) 1<<4))
#define SPI2_MISO_PORTP1_MUX  ((uint16_t) ((uint16_t) 1<<6))
#define SPI2_MOSI_PORTP1_MUX  ((uint16_t) ((uint16_t) 1<<8))
#define I2C0_SCL0_PORTP0_MUX  ((uint16_t) ((uint16_t) 1<<8))
#define I2C0_SDA0_PORTP0_MUX  ((uint16_t) ((uint16_t) 1<<10))
#define UART0_TX_PORTP0_MUX  ((uint32_t) ((uint32_t) 1<<20))
#define UART0_RX_PORTP0_MUX  ((uint32_t) ((uint32_t) 1<<22))
#define SYS_WAKEUP_SYS_WAKE2_PORTP0_MUX  ((uint32_t) ((uint32_t) 1<<26))

int32_t adi_initpinmux(void);

/*
 * Initialize the Port Control MUX Registers
 */
int32_t adi_initpinmux(void) {
    /* PORTx_MUX registers */
    *((volatile uint32_t *)REG_GPIO0_CFG) = SPI0_SCLK_PORTP0_MUX | SPI0_MOSI_PORTP0_MUX
     | SPI0_MISO_PORTP0_MUX | I2C0_SCL0_PORTP0_MUX | I2C0_SDA0_PORTP0_MUX
     | UART0_TX_PORTP0_MUX | UART0_RX_PORTP0_MUX | SYS_WAKEUP_SYS_WAKE2_PORTP0_MUX;
    *((volatile uint32_t *)REG_GPIO1_CFG) = SPI1_SCLK_PORTP1_MUX | SPI1_MISO_PORTP1_MUX
     | SPI1_MOSI_PORTP1_MUX | SPI1_CS_3_PORTP1_MUX | SPI2_SCLK_PORTP1_MUX
     | SPI2_MISO_PORTP1_MUX | SPI2_MOSI_PORTP1_MUX;
    *((volatile uint32_t *)REG_GPIO2_CFG) = SPI0_CS_2_PORTP2_MUX;

    return 0;
}

