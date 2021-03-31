#include <iostream>

using namespace std;

float cal_pi(int n) {
	float an = 0;
	for (int i = 0; i <= n; i += 2) {
		an += 1.0 / (2.0 * i + 1.0);
	}
	for (int i = 1; i <= n; i += 2) {
		an -= 1.0 / (2.0 * i + 1.0);
	}
	return 4 * an;
}

int main() {
	int n;
	cout << "Input resolution variable number : ";
	cin >> n;

	cout << "cal_pi(" << n << ") : " << cal_pi(n);
}
