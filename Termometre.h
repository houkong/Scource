#pragma once
#include "Sensor.h"
class Thermometre: public Sensor{
public:
	Thermometre(int pin) :Sensor(pin) {}
	long getTemp() {
		int data = this->Measure();
		long temp = map(data, 1, 1024, 0, 255);
		return temp;
	}
};