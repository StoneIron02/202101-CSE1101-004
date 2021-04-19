#include<iostream>

using namespace std;

int check = 0;
int GCD(int n1, int n2) {
	if (n1 % check == 0 && n2 % check == 0) {
		return check;
	}
	else {
		check--;
		GCD(n1, n2);
	}
}
int main() {
	int num1, num2;

	cout << "Enter any two numbers to find GCD : ";
	cin >> num1 >> num2;

	if (num1 < num2) check = num1;
	else check = num2;

	cout << "GCD of " << num1 << " and " << num2 << " = " << GCD(num1, num2);

	return 0;
}
