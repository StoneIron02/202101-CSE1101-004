#include <iostream>
#include <cmath>

using namespace std;

long factorial(int x) {
	int num = 1;
	for (int i = 1; i <= x; i++)
		num *= i;
	return num;
}

double cal_exp(int x) {
	double an = 0;
	int k = 0;
	while (true) {
		if ((pow(x, k) / factorial(k)) <= pow(10, -6))
			return an;
		an += pow(x, k) / factorial(k);
		k++;
	}
	return an;
}

int main() {
	int x;
	cout << "input : ";
	cin >> x;

	cout << "cal_exp(" << x << ") : " << cal_exp(x);
}
