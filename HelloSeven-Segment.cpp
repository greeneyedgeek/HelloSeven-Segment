/*

	Project:	HelloSeven-Segment
	File:		HelloSeven-Segment.cpp
	Created:	2019-03-30
	Modified:	2019-03-30
	Author:		Gabriel Fontaine-Escobar
	Version:	0.1

	Description:
	Hello world using an ATmega328P and a seven-segment LED display

	The circuit:
	SEVEN-SEGMENT LED DISPLAY:
	--a--
	|   |
	f   b
	|   |
	--g--
	|   |
	e   c
	|   |
	--d--

	PORT D:
	PIN0:	a
	PIN1:	b
	PIN2:	c
	PIN3:	d
	PIN4:	e
	PIN5:	f
	PIN6:	g
	
	Note: Unplug PIN0 and PIN1 before uploading.

 	This code is in the public domain.
	https://github.com/greeneyedgeek/HelloSevenSegments

 	MIT License

	Copyright (c) 2019 Gabriel Fontaine-Escobar

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated
	documentation files (the "Software"), to deal in the Software without restriction, including without limitation
	the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
	and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
	OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
	LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR
	IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include <avr/io.h>
#include <util/delay.h>
#include "Segments.h"
#define F_CPU 8000000UL

void say_hello()
{
	PORTD = LETTER_H;		// Display Letter H
	_delay_ms(1000);		// Wait for 1s
	PORTD = LETTER_E;		// Display Letter E
	_delay_ms(1000);		// Wait for 1s
	PORTD = LETTER_L;		// Display Letter L
	_delay_ms(1000);		// Wait for 1s
	PORTD = NO_LETTER;		// Display No Letter
	_delay_ms(500);			// Wait for 0.5s
	PORTD = LETTER_L;		// Display Letter L
	_delay_ms(1000);		// Wait for 1s
	PORTD = LETTER_O;		// Display Letter O
	_delay_ms(1000);		// Wait for 1s
	PORTD = NO_LETTER;		// Display No Letter
	_delay_ms(2000);		// Wait for 2s
}

int main()
{
	DDRD = 0xFF;		// Configure port D as output
	while(1)
	{
		say_hello();
	}
	return 0;
}
