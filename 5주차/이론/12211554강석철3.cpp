#include <iostream>

using namespace std;

bool prime(int);

int main() {
	int num;

	cout << "enter the integer : ";
	cin >> num;
	cout << endl;

	cout << "the number that smaller or same than " << num << " is:" << endl;
	for (int i = 2; i <= num; i++) {
		if (prime(i)) {
			cout << i << " ";
		}
	}
}

bool prime(int i) {
	for (int j = 2; j < i; j++) {
		if (i % j == 0)
			return false;
	}
	return true;
}
