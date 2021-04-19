//퀴즈 1-1
/*
#include <iostream>

using namespace std;

inline float sum(float x, float y)
{
	return x + y;
}

inline float substract(float x, float y)
{
	return x - y;
}

inline float multiply(float x, float y)
{
	return x * y;
}

inline float division(float x, float y)
{
	return x / y;
}

int main()
{
	float x, y;
	int num;
	cout << "Input 2 floats : ";
	cin >> x >> y;
	cout << "Select sum - 1, substract - 2, multiply - 3, division - 4: ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << sum(x, y);
		break;
	case 2:
		cout << substract(x, y);
		break;
	case 3:
		cout << multiply(x, y);
		break;
	case 4:
		cout << division(x,y);
		break;
	

	}
		

}
*/
//퀴즈 1-2
//유클리드 호제법...?
/*
#include <iostream>

using namespace std;

int result(int x, int y)
{
	if (x > y)
	{
		if (y == 0)
			return x;
		else 
			return result(y, x % y);
	}
	else
	{
		if (x == 0)
			return y;
		else
			return result(x, y % x);
	}
}

int main()
{
	int x, y;
	cout << "Enter any two numbers to find GCD: ";
	cin >> x >> y;
	
	cout << "GCD of " << x << " and " << y << " = " << result(x,y);
	
}
*/

//퀴즈 2

/*
#include <iostream>

using namespace std;

double pi = 3.14;

double rectangle(double x, double y)
{
	return x * y;
}

double circle(double x)
{
	return x*x * pi;
}

double triangle(double x, double y)
{
	return x*y * 0.5;
}




int main()
{
	double x, y;
	int num;
	cout << "please select shape 1 - rectangle, 2 - circle, 3 - triangle : ";
	cin >> num;

	switch (num)
	{
	case 1:
		cout << "You are select rectangle, please input two integer for length and height: ";
		cin >> x >> y;
		cout << "the area is : " << rectangle(x, y);
		break;
	case 2:
		cout << "You are select circle, please input two integer for radius: ";
		cin >> x;
		cout << "the area is : " << circle(x);
		break;
	case 3:
		cout << "You are select triangle, please input two integer for edge and height: ";
		cin >> x >> y;
		cout << "the area is : " << triangle(x, y);
		break;
	}
}
*/

//퀴즈 3
/*

#include <iostream>
#include <ctime>

using namespace std;



int main()
{
	int user = 1, com, winscore =0, num=0;
	
	srand(time(0));
	
	
	while (1)
	{
		
		cout << "Rock-1, Scissor-2, Paper-3, exit - (-1) ";
		cin >> user;

		if (user == EOF)
			break;

		com = rand() % 3 + 1;

		switch (user)
		{
			case 1:
				if (com == 2)
				{
					winscore++;
					cout << "이김" << endl;
				}
				else if (com == 1)
				{
					cout << "비김" << endl;

				}
				else
				{
					cout << "짐" << endl;
				}
				num++;
				break;
			case 2:
				if (com == 3)
				{
					winscore++;
					cout << "이김" << endl;
				}
				else if (com == 2)
				{
					cout << "비김" << endl;

				}
				else
				{
					cout << "짐" << endl;
				}
				num++;
				break;
			case 3:
				if (com == 1)
				{
					winscore++;
					cout << "이김" << endl;
				}
				else if (com == 3)
				{
					cout << "비김" << endl;

				}
				else
				{
					cout << "짐" << endl;
				}
				num++;
				break;
		}



	}

	cout << "전체 게임 횟수: " << num << endl;
	cout << "이긴 게임 횟수: " << winscore << endl;
}

*/

//퀴즈 4
/*
#include <iostream>

using namespace std;
int num = 1;
int y, z, result = 0;
void binary(int x)
{
	
	y = x % 2;
	z = x / 2;
	result += num * y;
	num *= 10;
	if (z < 1)
	{
		cout << result;

	}
	else
	{
		binary(z);
	}
	
}

int main()
{
	int x;
	cout << "Input decimal num: ";
	cin >> x;
	cout << "to binary : ";
	binary(x);
	
}
*/

//퀴즈 5
/*
#include <iostream>
#include <ctime>

using namespace std;
int main()
{
	char a = 'a', b = 'b', c = 'c', d = 'd';
	int acount = 0, bcount = 0, ccount = 0, dcount = 0;
	int n;
	srand(time(0));
	for (int i = 1; i <= 100; i++)
	{
		n = rand()%4+'a';

		switch (n)
		{
		case 'a':
			acount++;
			break;
		case 'b':
			bcount++;
			break;
		case 'c':
			ccount++;
			break;
		case 'd':
			dcount++;
			break;

		}
	}

	if (acount > bcount)
	{
		if (acount > ccount)
		{
			if (acount > dcount)
			{
				cout << "가장 많이 생성된 알파벳은 a입니다.";
			}
			else
			{
				cout << "가장 많이 생성된 알파벳은 d입니다.";
			}
		}
		else 
		{
			if (ccount > dcount)
			{
				cout << "가장 많이 생성된 알파벳은 c입니다.";
			}
			else
			{
				cout << "가장 많이 생성된 알파벳은 d입니다.";
			}
		}
	}
	else
	{
		if (bcount > ccount)
		{
			if (bcount > dcount)
			{
				cout << "가장 많이 생성된 알파벳은 b입니다.";
			}
			else
			{
				cout << "가장 많이 생성된 알파벳은 d입니다.";
			}
		}
		else
		{
			if (ccount > dcount)
			{
				cout << "가장 많이 생성된 알파벳은 c입니다.";
			}
			else
			{
				cout << "가장 많이 생성된 알파벳은 d입니다.";
			}
		}
	}


}
*/

//퀴즈 6

#include <iostream>
#include <ctime>
#include <windows.h>

using namespace std;

void timer()
{
	int hour;
	int minute;
	int second;
	second = time(0) % 60;
	minute = time(0) / 60 % 60;
	hour = (time(0) / 3600 + 9) % 24;
	cout << hour << " : " << minute << " : " << second << endl;
	
}



int main()
{
	while (1)
	{
		
		timer();
		Sleep(1000); // windows.h 헤더파일에 있는 코드
		
	}
	
}
