#pragma once
class Relay {
	int pin; //The pin to which the relay is attached
	bool on;
public:
	Relay(int _pin) :pin(_pin), on(false) {
		pinMode(pin, OUTPUT);
	}
	void turnOn() {
		digitalWrite(pin, HIGH);
	}
	void turnOff() {
		digitalWrite(pin, LOW);
	}
};
