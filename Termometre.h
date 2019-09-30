#pragma once
#include "Sensor.h"
class Termometre: public Sensor{
	long getTemp() {
		int data = this->Measure();
		long temp = map(data, 1, 1024, 0, 255);
		return temp;
	}
};