//******************************************************************************
//! @file $RCSfile: config.h,v $
//!
//! Copyright (c) 2007 Atmel.
//!
//! Use of this program is subject to Atmel's End User License Agreement.
//! Please read file license.txt for copyright notice.
//!
//! @brief Configuration file for the following project:
//!             - can_sensor_node_example_gcc
//!
//! This file can be parsed by Doxygen for automatic documentation generation.
//! This file has been validated with AVRStudio-413528/WinAVR-20070122.
//!
//! @version $Revision: 3.20 $ $Name: jtellier $
//!
//! @todo
//! @bug
//******************************************************************************

#ifndef _CONFIG_H_
#define _CONFIG_H_

//_____ I N C L U D E S ________________________________________________________
#include "compiler.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include "at90can_drv.h"
#include "dvk90can1_board.h"

//_____ M A C R O S ____________________________________________________________

//_____ D E F I N I T I O N S __________________________________________________

    // -------------- MCU LIB CONFIGURATION
#define FOSC           8000        // 8 MHz External crystal
#define F_CPU          (FOSC*1000) // Need for AVR GCC

    // -------------- CAN LIB CONFIGURATION
#define CAN_BAUDRATE   500       // in kBit


    // -------------- MISCELLANEOUS
    // Using TIMER_2 as RTC
#define USE_TIMER8       TIMER8_2
//#define RTC_TIMER        2      // See "board.h"
//#define RTC_CLOCK        32     // See "board.h"

#define USE_UART UART_1
#define UARTBaudrate 0x000C

//_____ D E C L A R A T I O N S ________________________________________________

#endif  // _CONFIG_H_


