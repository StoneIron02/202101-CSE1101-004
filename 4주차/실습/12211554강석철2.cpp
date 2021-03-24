#include <iostream>

using namespace std;

int main() {

	int num, tot = 1;

	cout << "Please enter an Integer: ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		tot *= i;
	}

	cout << num << "! = " << tot;
}