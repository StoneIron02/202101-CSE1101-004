#include <iostream>

using namespace std;

void printSymbol(int row, char ch) {
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			cout << ch << ' ';
		}
		cout << endl;
	}
}

int main() {

	int row;
	char ch;

	cout << "input row : ";
	cin >> row;
	cout << "input sym : ";
	cin >> ch;
	cout << endl;

	printSymbol(row, ch);
}
