#include <iostream>
#include <cmath>

using namespace std;

class Car
{
public:
	Car(float = 0, float = 0, float = 0 , float = 0);
	void setCar(float, float, float, float);
	void equaltime ();
private:
	float speed1; //시작속도
	float	gear1; // 가속도
	float speed2;
	float gear2;
};

Car::Car(float sp1, float ge1, float sp2, float ge2)
{
	setCar(sp1, ge1, sp2, ge2);
}

void Car::setCar(float sp1, float ge1, float sp2, float ge2)
{
	speed1 = sp1;
	gear1 = ge1;
	speed2 = sp2;
	gear2 = ge2;
}

void Car::equaltime()
{
	for (int t = 0; ; t++)
	{
		if (t == 0)
			continue;

		if (((gear1/2 * pow(t,2)) + speed1*t) == ((gear2/2 * pow(t,2)) + speed2*t))
		{
			cout << "초기속도: " << speed1 << ", 가속도: " << gear1 << "인 자동차와 초기속도: "
				<< speed2 << ", 가속도: " << gear2 << "인 자동차가 동일 출발점에서 출발하여 처음 만나는 시간은 "
				<< t << "초 후이다.";
			break;
		}
	}
}

int main()
{
	Car T (20,2,15,3);
	T.equaltime();
	
	return 0;
}
