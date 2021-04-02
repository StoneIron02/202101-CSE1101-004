//

#include <iostream>
using namespace std;


void PrintTriangle(int, char);


int main() {
	int n;
	char a;

	cout << "input row:";
	cin >> n;
	cout << "input sym:";
	cin >> a;

	PrintTriangle(n,a);
}

void PrintTriangle(int n, char a) {
	int m = n;
	char b = a;

	for (int i = 0; i < m+1; i++) {
		for (int j = 0; j < i; j++) {
			cout << b;
		}
		cout << endl;
	}
}
