/*Q1
#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;


	//(n)행까지 점점 커지는 이등변 삼각형, (n+1)행부터 (2n-1)행까지 점점 작아지는 이등변 삼각형

	for (int i = 1; i < n + 1; i++) {
		for (int j = n-i; j > 0; j--) {
			cout << " ";
		}
		for (int k = 1; k < 2 * i; k++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n + 1; i < 2*n; i++){
		for (int j = 0; j < i - n; j++) {
			cout << " ";
		}
		for (int k = (2 * n - i)*2-1; k > 0; k--) {
			cout << "*";
		}
		cout << endl;
	}
}
*/


/*Q2

#include <iostream>
using namespace std;

int main() {

	int n;
	int f{ 1 };

	cout << "Please enter an integer :";
	cin >> n;

	for (int i = 1; i < n+1; i++) {
		f = f * i;
	}
	cout << n << "! = " << f;


}
*/


/*Q3

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n{ 0 }, m{ 0 };
	int p;

	cout << "Input N, M : ";
	cin >> n >> m;

	p = n;

	while (true) {

		for (int i = 1; i < n + 1; i++) {
			for (int j = n-p+1; j < n-p+m+1; j++) {
				cout << j << " X " << i << " = " << setw(5) << i * j<<setw(7);
			}
			cout << endl;

		}

		p = p- m;

		cout << endl << endl;

		if (p < m) {
			for (int i = 1; i < n + 1; i++) {
				for (int j = n - p + 1; j < n+1; j++) {
					cout << j << " X " << i << " = " << setw(5) << i * j << setw(7);
				}
				cout << endl;

			}
			break;
		}

	}
}
*/


/*Q4

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, m;
	int num{ 0 };
	int numCounter{ 0 };

	cin >> n >> m;

	while (num < 101) {
		++num;
		if (num % n == 0 || num % m == 0) {
			cout <<setw(5)<< num;
			numCounter++;
			if (numCounter % 7 == 0) {
				cout << endl;
			}

		}
	}
	cout << endl << "Total :" << numCounter;
}
*/


/*Q5

#include <iostream>
using namespace std;

int main() {
	char ch;
	int m{ 0 }, j{ 0 };

	while ((ch = cin.get()) != EOF)
	{	cin >> ch;

		switch (ch) {
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				++m;
				break;

			default:
				++j;
				break;
		}
	}

	cout << "모음:" << m << endl << "자음:" << j;
}
*/
