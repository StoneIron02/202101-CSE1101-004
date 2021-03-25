//과제 1

/*
#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int n = a;
	while (a > 0)
	{
		for (int b = a; b > 1; b--)
			cout << " ";

		for (int c = (n + 1); c - a > 0; c--)
		{
			cout << "*";
		}

		for (int d = n + 1; d - n <= n + 1 - a; d++)  
		{
			if (d - n > 1)
				cout << "*";

		}
		cout << endl;
		a--;
	}
	
	while (a < n - 1)
	{
		for (int b = 0; b <= a; b++)
			cout << " ";

		for (int c = n; c - (a+1) > 0; c--)
		{
			cout << "*";
		}
		
		for (int d = n ; d - n < n  - a; d++)
		{
			if (d - n > 1)
				cout << "*";

		}
		
		cout << endl;
		a++;
	}
}
*/

//과제 2
/*
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cout << "Please enter an integer: ";
	cin >> a;
	int factorial = 1;
	b = a;
	for (; a > 0; a--)
	{
		factorial *= a;
	}
	cout << b << "! = " << factorial;
}
*/

//과제 3

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, m;
	cout << "input n, m : ";
	cin >> n >> m;
	int a , b=1;
	
	while (b<=m)
	{
		a = 1;
		while (a <= n)
		{
			cout << setw(5) << a << " x " << b << " = " << a * b;
			a++;
			if (a % 6 == 0)
				cout << endl;
		}

		b++;
	}
}



//과제 4
/*
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int n = 1;
	int total = 0;
	while (n <= 100)
	{
		if (n%a == 0 || n%b == 0)
		{
			cout<< setw(5) << n ;
			total++;
			if (total % 5 == 0)
			{
				cout << endl;
			}
		}
		n++;
	}
	cout << "\n" << "total: " << total << endl;
}
*/

//과제 5
/*
#include <iostream>

using namespace std;

int main()
{
	int grade;
	int acount=0; //모음
	int bcount=0; //자음

	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;

	while ((grade = cin.get()) != EOF)
	{
		switch (grade)
		{
		case'A':
		case'a':
		case'E':
		case'e':
		case'O':
		case'o':
		case'I':
		case'i':
		case'U':
		case'u':
			++acount;
			break;

		case '\n':
		case '\t':
		case' ':
			break;

		default:
			++bcount;
			break;

		}

		
	}
	
	cout << "자음개수: " << bcount << endl
		<< "모음개수: " << acount << endl;

}
*/
