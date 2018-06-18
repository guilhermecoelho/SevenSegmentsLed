/*
 Name:		SevenSegmentsLed.h
 Created:	5/13/2018 6:47:33 PM
 Author:	guilherme-lenovo
 Editor:	http://www.visualmicro.com
*/


#ifndef _SevenSegmentsLed_h
#define _SevenSegmentsLed_h

#include "Arduino.h"

class SevenSegmentsLed {
public:
	SevenSegmentsLed(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDot);
	void NumberZero(int hasDot);
	void NumberOne(int hasDot);
	void NumberTwo(int hasDot);
	void NumberThree(int hasDot);
	void NumberFour(int hasDot);
	void NumberFive(int hasDot);
	void NumberSix(int hasDot);
	void NumberSeven(int hasDot);
	void NumberEight(int hasDot);
	void NumberNine(int hasDot);

private:
	int _pinA;
	int _pinB;
	int _pinC;
	int _pinD;
	int _pinE;
	int _pinF;
	int _pinG;
	int _pinDot;

	void WriteDigits(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDot);


};

#endif
