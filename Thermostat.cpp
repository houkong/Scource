#include "Thermostat.h"

void Thermostat::setTreshold(int _treshold)
{
	treshold = _treshold;
}

void Thermostat::setTemperature(int _temperature)
{
	*userTemperature = _temperature;
	//TODO: make automatic system. This is a placeholder, as this should be under main.cpp or main.ino
}

void Thermostat::automaticOn() {
	automatic = true;
}

void Thermostat::automaticOff() {
	automatic = false;
};