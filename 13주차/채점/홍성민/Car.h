#pragma once
class Car
{
public:
	Car(int, int);
	int getSpeed();
	int getGear();
	void setSpeed(int);
	void setGear(int);
private:
	int speed;
	int gear;
};

