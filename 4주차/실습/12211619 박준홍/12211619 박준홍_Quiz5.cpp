#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int count1 = 0, count2 = 0;
	char ch;

	while ((ch = cin.get()) != EOF) {
		switch (ch) {
		case('A'):
		case('a'):
		case('E'):
		case('e'):
		case('I'):
		case('i'):
		case('O'):
		case('o'):
		case('U'):
		case('u'):
			count1 += 1;
			break;
		case('B'):
		case('b'):
		case('C'):
		case('c'):
		case('D'):
		case('d'):
		case('F'):
		case('f'):
		case('G'):
		case('g'):
		case('H'):
		case('h'):
		case('J'):
		case('j'):
		case('K'):
		case('k'):
		case('L'):
		case('l'):
		case('M'):
		case('m'):
		case('N'):
		case('n'):
		case('P'):
		case('p'):
		case('Q'):
		case('q'):
		case('R'):
		case('r'):
		case('S'):
		case('s'):
		case('T'):
		case('t'):
		case('V'):
		case('v'):
		case('W'):
		case('w'):
		case('X'):
		case('x'):
		case('Y'):
		case('y'):
		case('Z'):
		case('z'):
			count2 += 1;
			break;
		}
	}

	cout << "모음:" << count1 << endl;
	cout << "자음:" << count2 << endl;
	return 0;
}
