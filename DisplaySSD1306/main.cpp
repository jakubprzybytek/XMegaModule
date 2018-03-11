/*
 * DisplaySSD1306.cpp
 *
 * Created: 2018-02-03 21:47:39
 * Author : Rodos
 */ 

#include <avr/io.h>
#include <util/delay.h>

#include <stdio.h>

#include "Screen.h"

#define LED_INIT PORTC.DIR = PIN3_bm;
#define LED_TOGGLE PORTC.OUTTGL = PIN3_bm;

int main(void) {

	char buffer[20];

	LED_INIT

	Screen screen;
	screen.appendTextLine("Hello World!");

	for (uint16_t i = 0; i < 200; i++) {
		LED_TOGGLE

		sprintf(buffer, "i=%d", i);
		screen.appendTextLine(buffer);

		_delay_ms(100);
	}
	screen.appendTextLine("I am done.");

	return 0;
}
