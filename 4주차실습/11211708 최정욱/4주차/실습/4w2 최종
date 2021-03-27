using namespace std;
#include <iostream>
#include <cmath>
#include <iomanip>

/* 1번문제
int main()
{
	int count1; //줄을 뜻함
	int count2;
	int count3;
	int count4;
	int count5;
	int count6;
	int count7;
	int a;
	cin >> a;

	for (int count1 = 0; count1 < a; ++count1)
	{
		for (int count3 = 0; count3 < a - count1 + 1; ++count3)
		{
			cout << " ";
		}
		for (int count4 = 0; count4 < 2 * count1 - 1; ++count4)
		{
			cout << "*";
		}


		cout << "\n";
	}

	for (int count2 = 0; count2 < a; ++count2)
	{
		cout << " ";
		for (int count6 = 0; count6 < count2 - 1 + 1; ++count6)
		{
			cout << " ";
		}
		for (int count7 = 0; count7 < (a - count2) * 2 - 1; ++count7)
		{
			cout << "*";
		}


		cout << "\n";
	}
}
*/

/* 2번문제
int main()
{
	int a;
	int b;
	int c;
	b = 1;
	c = 1;
	int count1;
	cout << "Please enter an integer : ";
	cin >> a;
	cout << "\n";

	for (count1 = 0; count1 < a; ++count1)
	{
		b = b * (c++);
	}
	cout << a << "! = " << b;
}
*/

// 3번문제
int main()
{
	cout << "Input N, M :";
	int M;
	int N;
	cin >> N >> M;

	int count1;
	int count2;
	int count3;
	int a;
	int b;

	for (int b = 0; b <= 9; b += N) //b는 다음단으로 넘어갈 때 N만큼 넘어가는 역할
	{
		for (int count1 = 1; count1 <= N; ++count1)
		{
			for (count2 = 1, a = 1; count2 <= M; ++count2, ++a)
			{
				if (a + b > 9)
					break;
				cout << a + b << setw(1) << "*" << setw(1) << count1 << setw(3) << "=" << "\t" << (a + b) * count1 << "\t";
				
			}
			cout << "\n";
		}
		cout << "\n";
	}
}

/*

int main()
{
	int count1;
	int N;
	int M;
	cin >> N >> M;

	for (count1 = 1; count1 <= 100; ++count1)
	{
		if(count1 % N || count1 % M == 0)
			cout << count1 << setw(3);
	}

}
*/
