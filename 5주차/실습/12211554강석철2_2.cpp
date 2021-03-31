#include <iostream>

using namespace std;

float sum(float, float);
float subtract(float, float);
float multiply(float, float);
float division(float, float);

int main() {

	float a, b;
	int type;
	cout << "input 2 floats : ";
	cin >> a >> b;
	cout << "Select sum - 1, subtract - 2, multiply - 3, division - 4 : ";
	cin >> type;

	switch (type) {
		case 1:
			cout << "a+b = " << sum(a, b);
			break;
		case 2:
			cout << "a-b = " << subtract(a, b);
			break;
		case 3:
			cout << "a*b = " << multiply(a, b);
			break;
		case 4:
			cout << "a/b = " << division(a, b);
			break;
	}
}

float sum(float a, float b) {
	return a + b;
}

float subtract(float a, float b) {
	return a - b;
}

float multiply(float a, float b) {
	return a * b;
}

float division(float a, float b) {
	return a / b;
}
