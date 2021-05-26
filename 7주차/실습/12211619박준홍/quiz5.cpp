#include<iostream>

using namespace std;
int Bi = 0, i = 0;
int toBinary(int n) {
	if (n / 2 < 1) {
		Bi += pow(10, i);
		return Bi;
	}
	else {
		Bi += n % 2 * pow(10, i++);
		toBinary(n / 2);
	}
}
int main() {
	int num;
	cout << "Input decimal number : ";
	cin >> num;

	cout << "to binary..: " << toBinary(num) << endl;
	return 0;
}
