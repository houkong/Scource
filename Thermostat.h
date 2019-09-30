#pragma once
#include "Relay.h"
#include "Termometre.h"

class Thermostat: public Relay, public Thermometre{
public:
	Thermostat(int pinRelay, int pinThermometre) :
		Relay(pinRelay),
		Thermometre(pinThermometre) {};
};