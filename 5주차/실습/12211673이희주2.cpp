//function factorial(x)

#include <iostream>
using namespace std;

int FunctionFactorial(int);

int main() {

	int a;

	cin >> a;

	cout << a << "!=" << FunctionFactorial(a);
}

int FunctionFactorial(int a) {

	int n = a;
	int result=1;

	for (n = 1; n < a + 1; n++) {
		result *= n;
	}
	return result;
}
