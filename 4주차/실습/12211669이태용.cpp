#include <iostream>
#include <iomanip>
using namespace std;

//1번

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
			cout << " ";

		for (int k = 0; k < i + 1; k++)
			cout << "*";

		for (int b = 0; b < i; b++)
			cout << "*";

		cout << endl;
	}

	for (int x = 0; x < n-1; x++) {

		for (int y = 0; y < x + 1; y++)
			cout << " ";

		for (int a = 0; a < n - (x+1); a++)
			cout << "*";

		for (int t=0; t<n-2-x; t++)
			cout << "*";

		cout << endl;
	}


	return 0;
}

//2번


int main()
{
	int num1, factorial, factorial2;
	cout << "Please enter an integer : ";
	cin >> num1;
	factorial = num1;

	factorial2 = factorial;


	for (int i = 1; i < num1; i++)
		factorial2 *= (factorial - i);

	cout << num1 << "!" << "=" << factorial2;
}


//3번


int main()
{

	int N, M, mul;

	cout << "Input N,M :";
	cin >> N >> M;
	//     9    5
	//     7    3

	//i는 건드릴 것 없다.


	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < M + 1; j++)
			cout << j << "*" << i << "=" << j * i << "\t";

		cout << endl;
	}
	cout << endl;

	for (int i = 1; i < N + 1; i++)
		//            < 10
		//            < 8
	{
		for (int j = 1; j < M; j++)
			//              < 6
			//              < 4
			cout << j + M << "*" << i << "=" << (j + M) * i << "\t";
		//            10
		//            6
		cout << endl;
	}




	return 0;

}



//4번

int main()
{
	int n, m, count, i;
	cin >> n >> m;

	count = 0;
	for (int i = 1; i < 101; i++)
	{
		if (i % n == 0 || i % m == 0)
		{
			count++;
			cout << setw(3) << i << setw(3);
			if (count % 5 == 0)
				cout << endl;
		}


	}




	cout << endl;


	cout << "total : " << count;
	return 0;
}
