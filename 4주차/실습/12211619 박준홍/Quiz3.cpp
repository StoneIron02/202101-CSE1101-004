#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num1, num2, i, j, count = 0, check = 1;
	char ch1(42);
	cout << "input N, M : ";
	cin >> num1 >> num2;

	while(check == 1){
		for (j = 1; j <= 9; j++) {
			for (i = 1; i <= num2; i++) {
				if (i + count <= num1) {
					cout << setw(3) << i + count << " " << ch1 << " " << j << " = " << setw(3) << i * j;
				}
				else {
					check = 0;
				}
			}
			cout << "\n";
		}
		cout << "\n";
		count += num2;
	}

	return 0;
}
