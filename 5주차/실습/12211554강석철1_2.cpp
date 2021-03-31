#include <iostream>

using namespace std;

int factorial(int x) {
	int num = 1;
	for (int i = 1; i <= x; i++)
		num *= i;
	return num;
}

int main() {

	int num;

	cin >> num;

	cout << num << "!=" << factorial(num);
}
