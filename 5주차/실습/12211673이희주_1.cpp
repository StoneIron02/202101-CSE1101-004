//print * diamond with given height x

#include <iostream>
using namespace std;

void PrintDiamond(int);

int main() {

	int n;

	cin >> n;

	PrintDiamond(n);
}

void PrintDiamond(int n) {

	int x = n;


	for (int i = 0; i < x; i++) {
		for (int p = x-i; p > 0; p--) {
			cout << " ";
		}
		for (int q = 0; q < 2*i-1; q++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = x + 1; i < 2 * x; i++) {
		for (int p = 0; p < i - x; p++) {
			cout << " ";
		}
		for (int q = (2 * x - i)*2-1; q > 0; q--) {
			cout << "*";
		}
		cout << endl;
	}
}
