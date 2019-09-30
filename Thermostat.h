#pragma once
#include "Relay.h"
#include "Termometre.h"

class Thermostat: public Relay, public Thermometre{
	bool automatic = false;
	int* userTemperature = nullptr;
	int treshold = 4; //the deviation the thermometre has to detect before the relay is turned on 
public:
	Thermostat(int pinRelay, int pinThermometre) :
		Relay(pinRelay),
		Thermometre(pinThermometre) {};
	
	void setTreshold();
	void setTemperature();
	void automaticOn();
	void automaticOff();

};