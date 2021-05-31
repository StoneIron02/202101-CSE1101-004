#include "Car.h"

Car::Car(int s, int g)
{
	speed = s;
	gear = g;
}

int Car::getSpeed()
{
	return speed;
}
int Car::getGear()
{
	return gear;
}
void Car::setSpeed(int newSpeed)
{
	speed = newSpeed;
}
void Car::setGear(int newGear)
{
	gear = newGear;
}