/* 
* Screen.h
*
* Created: 2018-03-11 12:46:53
* Author: Rodos
*/


#ifndef __SCREEN_H__
#define __SCREEN_H__

#include <avr/io.h>

#include "SSD1306/SSD1306.h"

class Screen {
private:
	SSD1306 sdd1306;

	uint8_t currentLineNumber;
	uint8_t buffer[128];

public:
	Screen() : currentLineNumber(0) {};
	
	void drawTextLine(uint8_t lineNumber, const char * textLine);
	void appendTextLine(const char * textLine);
};

#endif //__SCREEN_H__
