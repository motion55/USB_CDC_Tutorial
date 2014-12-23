/*----------------------------------------------------------*/
/*  Filename :  DEBUG_CONSOLE.H     Created    : 2014-12-23 */
/*  Released :                      Revision # :            */
/*  Author   :  Butch Tabios                                */
/*                                                          */
/*  Routine List:                                           */
/*                                                          */
/*  Update List:                                            */
/*                                                          */
/*  Files needed for linking:                               */
/*                                                          */
/*  Comments:                                               */
/*                                                          */
/*----------------------------------------------------------*/
#ifndef _DEBUG_CONSOLE_H_
#define _DEBUG_CONSOLE_H_

#define debug_char_rdy()	udi_cdc_is_rx_ready()

#define get_debug_char()	udi_cdc_getc()

#define put_debug_char(ch)	udi_cdc_putc(ch)

void DebugInit(void);

void DebugTask(void);

void DebugPrint(const char *format, ...);

#endif	//#ifndef _DEBUG_CONSOLE_H_
