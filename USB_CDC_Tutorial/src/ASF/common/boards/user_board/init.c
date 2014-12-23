/**
 * \file
 *
 * \brief User board initialization template
 *
 */

#include <asf.h>
#include <board.h>
#include <conf_board.h>

void board_init(void)
{
	/* This function is meant to contain board-specific initialization code
	 * for, e.g., the I/O pins. The initialization can rely on application-
	 * specific board configuration, found in conf_board.h.
	 */
	ioport_init();	//This must be called before any other ioport function.
	
	ioport_set_pin_dir(BLINK_LED, IOPORT_DIR_OUTPUT);	//make pin an output
}
