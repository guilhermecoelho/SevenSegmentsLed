/*
 Name:		SevenSegmentsLed.cpp
 Created:	5/13/2018 6:47:33 PM
 Author:	guilherme-lenovo
 Editor:	http://www.visualmicro.com
*/

#include "Arduino.h"
#include "SevenSegmentsLed.h"


SevenSegmentsLed::SevenSegmentsLed(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDot)
{
	pinMode(pinA, OUTPUT);
	pinMode(pinB, OUTPUT);
	pinMode(pinC, OUTPUT);
	pinMode(pinD, OUTPUT);
	pinMode(pinE, OUTPUT);
	pinMode(pinF, OUTPUT);
	pinMode(pinG, OUTPUT);
	pinMode(pinDot, OUTPUT);

	_pinA = pinA;
	_pinB = pinB;
	_pinC = pinC;
	_pinD = pinD;
	_pinE = pinE;
	_pinF = pinF;
	_pinG = pinG;
	_pinDot = pinDot;
}

void SevenSegmentsLed::NumberZero(int hasDot) {
	WriteDigits(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW, hasDot);
}

void SevenSegmentsLed::NumberOne(int hasDot) {
	WriteDigits(LOW, HIGH, HIGH, LOW, LOW, LOW, LOW, hasDot);
}

void SevenSegmentsLed::NumberTwo(int hasDot) {
	WriteDigits(HIGH, HIGH, LOW, HIGH, HIGH, LOW, HIGH, hasDot);
}

void SevenSegmentsLed::NumberThree(int hasDot) {
	WriteDigits(HIGH, HIGH, HIGH, HIGH, LOW, LOW, HIGH, hasDot);
}

void SevenSegmentsLed::NumberFour(int hasDot) {
	WriteDigits(LOW, HIGH, HIGH, LOW, LOW, HIGH, HIGH, hasDot);
}

void SevenSegmentsLed::NumberFive(int hasDot) {
	WriteDigits(HIGH, LOW, HIGH, HIGH, LOW, HIGH, HIGH, hasDot);
}

void SevenSegmentsLed::NumberSix(int hasDot) {
	WriteDigits(HIGH, LOW, HIGH, HIGH, HIGH, HIGH, HIGH, hasDot);
}

void SevenSegmentsLed::NumberSeven(int hasDot) {
	WriteDigits(HIGH, HIGH, HIGH, LOW, LOW, LOW, LOW, hasDot);
}

void SevenSegmentsLed::NumberEight(int hasDot) {
	WriteDigits(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, hasDot);
}

void SevenSegmentsLed::NumberNine(int hasDot) {
	WriteDigits(HIGH, HIGH, HIGH, HIGH, LOW, HIGH, HIGH, hasDot);
}


void SevenSegmentsLed::WriteDigits(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDot) {
	digitalWrite(_pinA, pinA);
	digitalWrite(_pinB, pinB);
	digitalWrite(_pinC, pinC);
	digitalWrite(_pinD, pinD);
	digitalWrite(_pinE, pinE);
	digitalWrite(_pinF, pinF);
	digitalWrite(_pinG, pinG);
	digitalWrite(_pinDot, pinDot);
}


