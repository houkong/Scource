#pragma once
class Sensor{
	pin; //The pin to which the sensor is attached
public:
	Sensor(int _pin):pin(_pin) {
		pinMode(pin, INPUT);
	}
	int Measure() {
		return analogRead(pin);
	}
	void print() {
		int data;
		data = this->Measure();
		Serial.print("Sensor value: ");
		Serial.println(data);
	}
};
