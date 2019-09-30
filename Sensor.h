#pragma once
class Sensor{
	pin;
public:
	Sensor(int _pin):pin(_pin) {
		pinMode(pin, INPUT);
	}
	int Measure() = 0;

	void print() {
		int data;
		data = this->Measure();
		Serial.print("Sensor value: ");
		Serial.println(data);
	}
};
