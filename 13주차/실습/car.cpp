#include<iostream>
using namespace std;

class Car {

private:
	double speed, gear;

public:
	Car();
	void setStat(double, double);
	

	double getS() { return speed; }
	double getG() { return gear; }

	double getD(double t)
	{
		return (t * getS() + (0.5) * t * t * getG());
	}
};

Car::Car()
{
	speed = gear = 0;
}

void Car::setStat(double s, double g)
{
	speed = s;
	gear = g;
}


int main()
{
	Car car1, car2;
	
	car1.setStat(20, 2);
	car2.setStat(15, 3);

	double t = 1.0;
	
	
	while (true)
	{
		if (car1.getD(t)==car2.getD(t))
		{
			cout << endl << "first contact time: " << t << "s";
			break;
		}
		t+=1.0;
	}

	return 0;
}