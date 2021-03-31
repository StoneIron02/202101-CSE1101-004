#include <iostream>

using namespace std;

/*
int fibonacci(int x) {
	int n1 = 1, n2 = 1;
	if (x == 1)
		return n1;
	if (x == 2)
		return n2;
	for (int i = 3; i <= x; i++) {
		int num = n1 + n2;
		n1 = n2;
		n2 = num;
	}
	return n2;
}
*/

int fibonacci(int x) {
	if (x <= 1)
		return x;

	return fibonacci(x-1) + fibonacci(x-2);
}

int main() {

	int num;
	cout << "Input n-th fibo num: ";
	cin >> num;

	cout << "n-th fibo num: " << fibonacci(num);
}
