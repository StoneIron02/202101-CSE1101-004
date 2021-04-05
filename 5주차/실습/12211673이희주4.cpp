//write calculator program

#include <iostream>
using namespace std;

void Calculator(float, float, int);

int main() {
	float a, b;
	int k;

	cout << "input 2 floats :";
	cin >> a >> b;
	cout << "Select sum=1, subtract=2, multiply=3, division=4 :";
	cin >> k;

	Calculator(a, b, k);

}

void Calculator(float a, float b, int k) {
	float n = a;
	float m = b;
	int kind = k;


	switch(kind){
	case 1:
		cout << "a+b = " << n + m;
		break;
	case 2:
		cout << "a-b = " << n - m;
		break;
	case 3:
		cout << "a*b = " << n * m;
		break;
	case 4:
		cout << "a/b = " << n / m;
		break;
	}
}
