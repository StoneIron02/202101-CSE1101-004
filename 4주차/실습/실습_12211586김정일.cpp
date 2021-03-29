#include <iostream>

#include<iomanip>

using namespace std;

// quiz 1
/*
int main()
{
	int i, j, a;
	cin >> a;

	for (i = 1; i <= a; i++)
	{
		for (j = a; j >= 1; j--)
		{
			if (j <= i)
				cout << "*";
			else
				cout << " ";
		}

		for (j = 2; j <= a; j++)
		{
			if (j <= i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
		{
			if (j <= i)
				cout << " ";
			else
				cout << "*";
		}
		
		for (j = a -1; j >= 2; j--)
		{
			if (j <= i)
				cout << " ";
			else
				cout << "*";
		}
		
		cout << endl;
	}
	return 0;
}
*/

//quiz 2
/*
int main()
{
	int a, b{ 1 };
	cout << "Please enter an integer : ";
	cin >> a;

	for (int i = 1; i <=a; i++)
	{
		b = b * i;
	}
	
	cout << a << "!" << "=" << b;
	
	return 0;
}
*/

//quiz 3
/*
int main()
{
	int N, M;
	cout << "Input N, M :";
	cin >> N >> M;
	
	int b{ 0 };
	
	for (int a = 1; a <= N / M + 1; a++)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= M; j++)
			{
				if (j + M * b > N)
					break;
				cout << setw(2) << j + M * b << " x " << setw(2) << i 
					<< " = " << setw(2) << (j + M * b) * i << "\t";
			}
			cout << endl;
		}
		cout << endl;
		b += 1;
	}
}
*/


//quiz 4
/*
int main()
{
	int M, N;
	cin >> M >> N;
	int a{ 0 }, b{ 0 }, c{ 0 };
	cout << endl;


	for (int i = 1; i <= 100; i++)
	{
		cout << setw(3);
		if (i % M == 0)
		{
			cout << i << " ";
			a = a + 1;
			if ((a + b) % 5 == 0)cout << "\n";
		}
		else if (i % N == 0)
		{
			cout << i << " ";
			b = b + 1;
			if ((a + b) % 5 == 0)cout << "\n";
		}
	}

	cout << "\ntotal : " << (a + b) << endl;
}
*/

//quiz 5
/*
int main()
{
	int a{ 0 }, b{ 0 };

	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input" << endl;

	char ch;
	while ((ch = cin.get()) != EOF)
	{
		switch(ch)
		{
		case'A':
		case'a':
			++b;
			break;

		case'B':
		case'b':
			++a;
			break;

		case'C':
		case'c':
			++a;
			break;

		case'D':
		case'd':
			++a;
			break;

		case'E':
		case'e':
			++b;
			break;

		case'F':
		case'f':
			++a;
			break;

		case'G':
		case'g':
			++a;
			break;

		case'H':
		case'h':
			++a;
			break;

		case'I':
		case'i':
			++b;
			break;

		case'J':
		case'j':
			++a;
			break;

		case'K':
		case'k':
			++a;
			break;

		case'L':
		case'l':
			++a;
			break;

		case'N':
		case'n':
			++a;
			break;

		case'M':
		case'm':
			++a;
			break;

		case'O':
		case'o':
			++b;
			break;

		case'P':
		case'p':
			++a;
			break;

		case'Q':
		case'q':
			++a;
			break;

		case'R':
		case'r':
			++a;
			break;

		case'S':
		case's':
			++a;
			break;

		case'T':
		case't':
			++a;
			break;

		case'U':
		case'u':
			++b;
			break;

		case'V':
		case'v':
			++a;
			break;

		case'W':
		case'w':
			++a;
			break;

		case'X':
		case'x':
			++a;
			break;

		case'Y':
		case'y':
			++a;
			break;

		case'Z':
		case'z':
			++a;
			break;




		case'\n':
		case'\t':
		case' ':
			break;

		default:
			cout << "Incorrect letter grade entered."
				<< "Enter a new grade." << endl;
			break;
			
		}
	}

	cout << "\n\n"
		<< "\n vowel" << b
		<< "\n consonant" << a
		<< endl;

	return 0;
}
*/
