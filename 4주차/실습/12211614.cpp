#include <iostream>
#include <iomanip>

using namespace std;

/*
int main() {
	int n = 0;
	int m;

	cin >> m;

	for (int i = 1; i <= m; i++) {
		for (int k = m; k > i; k--) {
			cout << ' ';
		}
		for (int j = 0; j < (2 * i - 1); j++) {
			cout << '*';
		}
		cout << endl;
	}

	for (int i = m-1; i > 0; i--) {
		for (int k = i; k < m; k++) {
			cout << ' ';
		}
		for (int j = 0; j <= 2*i-2; j++) {
			cout << '*';
		}
		cout << endl;
	}
}
*/														//QUIZ 1


/*
int main() {
	int n;
	int sum = 1;

	cout << "Please enter an integer :";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum *= i;
	}
	cout << n << "! = " << sum;
}
*/														//QUIZ 2


/*
int main() {

	int N, M;
	int j = 1;
	int count = 0;
	int i, k;

	cout << "Input N, M : ";
	cin >> N >> M;

	count = N % M > 0 ? N / M + 1 : N / M;

	while (count) {
		for (i = 1; i <= N; i++) {
			for (k = M * j - M + 1; k <= M * j; k++) {
				cout << k << " x " << i << " = " << setw(2) << k * i << "\t";
				if (k == N)
					break;
			}
			cout << "\n";
		}
		j++;
		cout << "\n";
		count--;
	}

}
*/														//QUIZ 3


/*
int main() {
	int n, m;
	int k = 0;
	int count = 0;

	cin >> n >> m;

	for (int i = 1; i <= 100; i++) {
		if (i % n == 0 || i % m == 0) {
			cout << setw(5);
			cout << i;
			k++;
			count++;
		}
		if (k == 5) {
			cout << endl;
			k = 0;
		}
	}
	cout << "\ntotal : " << count;
}
*/														//QUIZ 4


/*
int main() {
	char ch;
	int n = 0;
	int m = 0;

	while ((ch = cin.get()) != EOF) {
		switch (ch)
		{
		case('a'):
		case('e'):
		case('i'):
		case('o'):
		case('u'):
		case('A'):
		case('E'):
		case('I'):
		case('O'):
		case('U'):
			n++;
			break;

		case('\n'):
		case('\t'):
		case(' '):
			break;

		default:
			m++;
			break;
		}
	}
	cout << "����:" << n << endl;
	cout << "����:" << m;
}
*/														//QUIZ 5
