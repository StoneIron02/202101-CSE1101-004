#include <iostream>
#include <cmath>

using namespace std;

void printCmath(double x) {
	cout << "ceil(x) : " << ceil(x) << endl;
	cout << "exp(x) : " << exp(x) << endl;
	cout << "log(x) : " << log(x) << endl;
	cout << "sqrt(x) : " << sqrt(x) << endl;
	cout << "fabs(x) : " << fabs(x) << endl;
	cout << "pow(x,2) : " << pow(x,2) << endl;
}

int main() {

	double x;
	cout << "input x real number : ";
	cin >> x;

	printCmath(x);
}
