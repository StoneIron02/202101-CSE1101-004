#include <iostream>
#include <iomanip>
using namespace std;

/*
int main() //quiz 1
{
	int n;
	cout << "Enter the number : ";
	cin >> n;

	for (int j = 0; j < n; j++) {
		for (int k = n - 1; k > j; k--) {
			cout << " ";
		}

		for (int k = 0; k < 2 * j + 1; k++) {
			cout << "*";
		}
		cout << endl;
		
	}

	for (int j = 1; j < n; j++) {
		for (int k = 0; k < j; k++) {
			cout << " ";
		}

		for (int k = 2 * n - 1; k > 2 * j; k--) {
			cout << "*";

		}
		cout << endl;
	}
	return 0;
}


int main() //quiz 2
{
	int num, i;
	int factorial = 1;

	cout << "Enter the number : ";
	cin >> num;

	for (i = 1; i <= num; i++) {
		factorial *= i;
	}
	cout << num << "!" << "=" << factorial;

	return 0;
}


int main() //quiz 3
{
	int i, j, n,m;
	cout << "Input N,M : ";
	cin >> i >> j;

	for (int k = 1; k <= i; k += j) {
		for (n = 1; n <= i; n++) {
			for (m = k; m < k+j; m++) {
				cout << m << setw(2) << "x" << setw(2) << n << setw(2) << "=" << setw(3) << n * m << setw(5) ;

				if (m >= i)
					break;

			}
			cout << "\n";
		}
		cout << endl;
	}

}



int main() //quiz 4
{
	int n1, n2, count{0};
	cout << "Enter the number : ";
	cin >> n1 >> n2;

	for (int i = 1; i <= 100; i++) {
		if ((i % n1 == 0) || (i % n2 == 0)) {
			count++;
			cout << setw(3) << i;
		}
		if (count % 5 == 0) {
			cout << "\n";
		}
	}


	cout << "\n";

	cout << "total : " << count;
	return 0;
}


int main() //quiz 5
{
	int grade;
	int aCount = 0;
	int eCount = 0;
	int iCount = 0;
	int oCount = 0;
	int uCount = 0;
	int dCount = 0;

	cout << "Enter the letter : " << endl
		<< "Enter the EOF character to end input." << endl;

	while ((grade = cin.get()) != EOF) {
		switch (grade) {

		case 'A':
		case 'a':
			++aCount;
			break;

		case 'E':
		case 'e':
			++eCount;
			break;

		case 'I':
		case 'i':
			++iCount;
			break;

		case 'O':
		case 'o':
			++oCount;
			break;

		case 'U':
		case 'u':
			++uCount;
			break;

		case '\n':
		case '\t':
		case ' ':
			break;

		default:
			++dCount;
			break;
		}
	}
	cout << "\n����: " << aCount + eCount + iCount + oCount + uCount << endl;
	cout << "\n����: " << dCount << endl;

	return 0;
}
*/


