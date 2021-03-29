/* 1번퀴즈


#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int line_Size = 0;
	int no_Count = 0;
	int count = 0;

	cin >> a;

	line_Size = a * 2 - 1;
	no_Count = a - 1;
	count = 1;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < line_Size; j++)
		{
			if (count > no_Count && count <= line_Size - no_Count)
				cout << "*";
			else
				cout << " ";

			count = count + 1;
		}

		no_Count = no_Count - 1;
		count = 1;
		cout << endl;

		if (no_Count == 0)
			break;
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < line_Size; j++)
		{
			if (count > no_Count && count <= line_Size - no_Count)
				cout << "*";
			else
				cout << " ";

			count = count + 1;
		}

		no_Count = no_Count + 1;
		count = 1;
		cout << endl;
	}
}


*/

/*2번퀴즈



#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int a = 0;
	int factorial = 1;

	cout << "Please enter an integer :";
	cin >> num;
	a = num;

	for (int i = 0; i < num; i++)
	{
		factorial = factorial * a;

		a = a - 1;
	}

	cout << num << "! = " << factorial;


}



*/


/* 3번퀴즈



#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int num_Size, width_Size, line_Size;   //순서대로 N, M, 출력해야하는 line길이
	int column_count = 0;   //열 카운트

	cout << "Input N, M :";
	cin >> num_Size >> width_Size;

	if (num_Size % width_Size == 0) //출력해야하는 line 계산
		line_Size = num_Size * (num_Size / width_Size);
	else
		line_Size = num_Size * (num_Size / width_Size + 1);

	if (num_Size >= width_Size)
	{
		for (int i = 1; i <= line_Size; i++)
		{
			for (int j = 1; j <= width_Size; j++)
			{
				if (j + column_count * width_Size > num_Size)
					continue;

				cout << setw(5) << j + (column_count * width_Size) << " * " << i - (column_count * num_Size) << " = " << (j + (column_count * width_Size)) * (i - (column_count * num_Size));
			}

			if (i % num_Size == 0)
			{
				column_count++;
				cout << endl;
			}
			cout << endl;
		}
		cout << "**********" << line_Size;
	}

	else
		cout << "N은 M보다 커야합니다.";
}


*/



/* 4번퀴즈



#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	int a, b;
	int count = 0;

	cin >> a >> b;

	for (int i = 1; i <= 100; i++)
	{
		if (i % a == 0 || i % b == 0)
		{
			cout << setw(3) << i;
			count++;
		}
	}
	cout << endl;
	cout << "total : "<< count;
}



*/
