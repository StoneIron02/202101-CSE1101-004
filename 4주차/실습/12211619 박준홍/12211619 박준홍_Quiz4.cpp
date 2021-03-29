#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num1, num2, i, count = 0, c = 0;

	cin >> num1 >> num2;

	for (i = 1; i <= 100; i++) {
		if (i % num1 == 0) {
			cout << setw(5) << i;
			count += 1;
			c = 0;
		}
		else if (i % num2 == 0) {
			cout << setw(5) << i;
			count += 1;
			c = 0;
		}
		if (count % 5 == 0 && c == 0) {
			cout << endl;
			c = 1;
		}
	}
	cout << "\ntotal : " << setw(3) << count;
}
