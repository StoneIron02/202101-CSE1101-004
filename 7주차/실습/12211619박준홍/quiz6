#include<iostream>

using namespace std;

int main() {
	int al, a = 0, b = 0, c = 0, d = 0;
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		al = rand() % 4 + 1;
		switch (al) {
		case 1:
			cout << "a" << endl;
			a++;
			break;
		case 2:
			cout << "b" << endl;
			b++;
			break;
		case 3:
			cout << "c" << endl;
			c++;
			break;
		case 4:
			cout << "d" << endl;
			d++;
			break;
		}
	}
	cout << "a : " << a << " b : " << b << " c : " << c << " d : " << d << endl;
	if (a >= b && a >= c && a >= d) {
		cout << "가장 많이 생성된 알파벳은 a";
		if (a == b) cout << " b";
		if (a == c) cout << " c";
		if (a == d) cout << " d";
	} else if (b >= a && b >= c && b >= d) {
		cout << "가장 많이 생성된 알파벳은 b";
		if (b == a) cout << " a";
		if (b == c) cout << " c";
		if (b == d) cout << " d";
	} else if (c >= a && c >= b && c >= d) {
		cout << "가장 많이 생성된 알파벳은 c";
		if (c == a) cout << ", a";
		if (c == b) cout << ", b";
		if (c == d) cout << ", d";
	}
	else {
		cout << "가장 많이 생성된 알파벳은 d";
		if (d == a) cout << ", a";
		if (d == b) cout << ", b";
		if (d == c) cout << ", c";
	}
	cout << " 입니다." << endl;
	return 0;
}
