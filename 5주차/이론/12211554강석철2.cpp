#include <iostream>
#include <cmath>

using namespace std;

void calc_volume(double r) {
	double pi = 3.14;
	cout << 4.0 / 3.0 * pi * pow(r, 2);
}

int main() {
	double r;
	cout << "r = ? : ";
	cin >> r;

	calc_volume(r);
}
