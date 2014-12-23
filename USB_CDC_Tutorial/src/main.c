/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# "Insert system clock initialization code here" comment
 * -# Minimal main function that starts with a call to board_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
#include <asf.h>
#include "debug_console.h"

int main (void)
{
	// Insert system clock initialization code here (sysclk_init()).
	sysclk_init();

	board_init();

	// Insert application code here, after the board has been initialized.
	cpu_irq_enable();	//Interrupts must be enabled for USB to work
	
	// Start USB stack
	udc_start();
	
	DebugInit();

	while (true) {
		DebugTask();
	}
}

void my_callback_rx_notify(uint8_t port)
{
	while (udi_cdc_is_rx_ready()) {
		udi_cdc_putc(udi_cdc_getc());
	}
}
