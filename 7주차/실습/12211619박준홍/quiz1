#include<iostream>

using namespace std;

inline float sum(float n1, float n2) {
	return n1 + n2;
}

inline float substract(float n1, float n2) {
	return n1 - n2;
}

inline float multiply(float n1, float n2) {
	return n1 * n2;
}

inline float division(float n1, float n2) {
	return n1 / n2;
}

int main() {
	float num1, num2;
	int check;

	cout << "input 2 floats : ";
	cin >> num1 >> num2;

	cout << "Select sum - 1 substract - 2 multiply - 3 division - 4 : ";
	cin >> check;
	switch (check) {
	case 1:
		cout << num1 << " + " << num2 << " = " << sum(num1, num2) << endl;
		break;
	case 2:
		cout << num1 << " - " << num2 << " = " << substract(num1, num2) << endl;
		break;
	case 3:
		cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
		break;
	case 4:
		cout << num1 << " / " << num2 << " = " << division(num1, num2) << endl;
		break;
	}
	return 0;
}
