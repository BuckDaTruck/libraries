/*All the configuration for including/excluding evive features. (Pin Configuration are defined in "EvivePins.h".)
 *Developed by Dhrupal R Shah for the evive platform https://evive.cc .
 *Last editted : 20180208
 *Last editted by: Dhrupal R Shah
 *
 *Note: Work in progress to make it modular and reudce features as per user needs
*/

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

/* DEBUG MODE: comment this line to disable debugging messages over serial console*/
//#define __DEBUG__

#define SENSING

#define SCREEN

//Uncomment/Comment the INCLUDE_EXAMPLES to exclued/include examples in menu
#ifndef INCLUDE_EXAMPLES
#define INCLUDE_EXAMPLES
#endif

#define BAUDRATE 250000
#define SERIAL_TIME_OUT 10

//////////macros////////////////
// Macros to support option testing
#define _CAT(a, ...) a ## __VA_ARGS__
#define SWITCH	_ENABLED_0 0
#define SWITCH_ENABLED_1 1
#define SWITCH_ENABLED_  1
#define ENABLED(b) _CAT(SWITCH_ENABLED_, b)
#define DISABLED(b) (!_CAT(SWITCH_ENABLED_, b))

//Min time between simultaneous process
#define MIN_TIME1 	100
#define MIN_TIME1_5 150
#define MIN_TIME2 	200
//#define MIN_TIME3 	300
#define MIN_TIME5 	500

// Macros for bit masks
#define BIT(b) (1<<(b))
#define TEST(n,b) (((n)&BIT(b))!=0)
#define SET_BIT(n,b,value) (n) ^= ((-value)^(n)) & (BIT(b))

// Macros for maths shortcuts
//#define RADIANS(d) ((d)*M_PI/180.0)
//#define DEGREES(r) ((r)*180.0/M_PI)
//
//#define COUNT(a) (sizeof(a)/sizeof(*a))

// Define various ADC prescaler (Used to speed up ADC read action)
//const unsigned char PS_16 = (1 << ADPS2);
const unsigned char PS_32 = (1 << ADPS2) | (1 << ADPS0);
//const unsigned char PS_64 = (1 << ADPS2) | (1 << ADPS1);
const unsigned char PS_128 = (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);

//TFT and Menu related macros
#ifndef ROW_HEIGHT
#define ROW_HEIGHT      10
#endif
#ifndef CHAR_HEIGHT
#define CHAR_HEIGHT     8
#endif
#ifndef CHAR_WIDTH
#define CHAR_WIDTH      6
#endif
#ifndef LEFT_MARGIN
#define LEFT_MARGIN     2
#endif
#ifndef RIGHT_MARGIN
#define RIGHT_MARGIN    2
#endif
#ifndef TOP_MARGIN
#define TOP_MARGIN      14
#endif
#ifndef BOTTOM_MARGIN
#define BOTTOM_MARGIN   2
#endif
#ifndef TFT_HEIGHT
#define TFT_HEIGHT      128
#endif
#ifndef TFT_WIDTH
#define TFT_WIDTH       160
#endif
#ifndef TFT_WIDTH_BY_2
#define TFT_WIDTH_BY_2  80
#endif

#endif

