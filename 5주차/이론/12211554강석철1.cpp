#include <iostream>

using namespace std;

void PrintSimble(int num, char ch) {
	for (int i = num; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << ch;
		}
		cout << endl;
	}
}

int main() {
	
	int num;
	char ch;

	cout << "please enter one number : ";
	cin >> num;
	cout << "please enter one symbol : ";
	cin >> ch;
	cout << endl;

	PrintSimble(num, ch);
}
