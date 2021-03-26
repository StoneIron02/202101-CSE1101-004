#include <iostream>
#include<iomanip>
using namespace std;

/* quiz1
int main()
{
	int a = 0;
	cin >> a;

	for (int counter = 1; counter <= a; counter++)
	{
		for (int temp = 0; temp <= a - counter; temp++)
		{
			cout << " ";
		}

		for (int b = 1; b <= counter; b++)
		{
			cout << "*";
		}
		for (int b = counter - 1; b > 0; b--)
		{
			cout << "*";
		}
		
		cout << endl;
	}

	for (int counter = a-1; counter >0; counter--)
	{

			for (int temp = 0; temp <= a - counter; temp++)
			{
				cout << " ";
			}

			for (int b = 1; b <= counter; b++)
			{
				cout << "*";
			}
			for (int b = counter - 1; b > 0; b--)
			{
				cout << "*";
			}

			cout << endl;
		
	}
}
*/



/* quiz 2
int main()
{
	int a=0;
	int b = 1;
	int counter=1;


	cout << "Please enter an interger :";
	cin >> a;

	for (int counter = a; counter >0; counter--)
	{
		b = b * counter;
	}
	cout << a << "! = " << b << endl;
	return 0;
}
*/



/* quiz 3
int main()
{
	int n = 0;
	int m = 0;
	int a = 0;
	int i = 0;
	int c = 0;

	cout << "Input N, M : ";
	cin >> n >> m;

	for (int b = 0; b <=n; b+=m)
	{
		for (int a = 1; a <= n; a++)
		{
			for (int i = 1; i <= m; i++)
			{
				if (i + b <= n)
				{
					c = a * (i + b);
					cout << (i + b) << setw(2) << "*" << setw(2) << a << setw(2) << "=" << setw(4) << c << "\t";
				}

			}

			cout << "\n";
		}

		cout << "\n";
	}
}
*/



/* quiz 4
int main()
{
	int a = 0;
	int b = 0;
	int total = 0;
	cin >> a >> b;

	for (int i = 1; i <= 100; i++)
	{
		if (i % a == 0 || i % b == 0)
		{
			cout << setw(5)<< i << setw(5);
			total += 1;
			if (total % 5 == 0)
				cout << "\n";
		}
		
	}

	cout <<"\n"<< "total : " << total << endl;
}
*/



/* qiuz 5
int main()
{
	int acount = 0;
	int bcount = 0;
	char ch;
	while ((ch = cin.get()) != EOF)
	{
		switch (ch)
		{
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
			++acount;
			break;

		  default:
			++bcount;
			break;
		}
	}
	cout << "���� : " << acount << "\n" << "���� : " << bcount << endl;
}
*/
