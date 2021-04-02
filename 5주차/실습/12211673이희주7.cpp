//파이의 근사

#include <iostream>
#include <cmath>
using namespace std;

float CalPi(int);

int main() {
	int n = 0;

	cout << " Input resolution variable number : ";
	cin >> n;
	cout << "cal_pi(" << n << ") : " << CalPi(n);
}

float CalPi(int n) {
	int a = n;
	float result=1;

	for (int i = 1; i < a + 1; i++) {
		result += pow(-1, i) / (2 * i + 1);
	}

	return 4 * result;
}
