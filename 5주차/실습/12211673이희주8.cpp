//exponential function

#include <iostream>
#include <cmath>
using namespace std;

float cal_exp(int);
int factorial(int);

int main() {

	int x=0;

	cout << "input : ";
	cin >> x;
	cout << "cal_exp(" << x << ") : " << cal_exp(x);

}

float cal_exp(int x) {
	int n = x;
	int i=1;
	float exp=1;

	while (pow(n, i) / factorial(i) > pow(10, -6)) {
		exp += pow(n, i) / factorial(i);
		i++;
	}
	return exp;
}

int factorial(int i) {

	int n = i;
	int result = 1;

	for (int j = 1; j < n + 1; j++) {
		result *= j;
	}
	return result;
}
