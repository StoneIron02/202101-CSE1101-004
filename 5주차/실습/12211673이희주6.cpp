//fibonacci program

#include <iostream>
using namespace std;

int Fibonacci(int);

int main() {
	int a;

	cout << "Input n-th fibo num:";
	cin >> a;
	cout << "n-th fibo num:" << Fibonacci(a);
}

int Fibonacci(int a) {
	int n = a;
	int result1 = 1;
	int result2 = 2;
	int result;

	if (a < 3) {
		result = 1;
	}
	else if (a == 3) {
		result = 2;
	}
	else if (a > 3) {
		for (int i = 1; i < a/2 ; i++) {
			result1 = result1 + result2;
			result2 = result1 + result2;
			if (a % 2 == 0) {
				result = result1;
			}
			if (a % 2 != 0) {
				result = result2;
			}
		}
	}
	return result;
}
