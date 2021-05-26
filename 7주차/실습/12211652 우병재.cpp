#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

inline double sum(float num1, float num2)			// Quiz 1
{
	return num1 + num2;
}

inline double substract(float num1, float num2)
{
	return num1 - num2;
}

inline double multiply(float num1, float num2)
{
	return num1 * num2;
}

inline double division(float num1, float num2)
{
	return num1 / num2;
}

int main()
{
	float num1, num2;
	int chosen;
	cout << "Input 2 floats : ";
	cin >> num1 >> num2;
	cout << "Select sum - 1, substract - 2, multiply - 3, division - 4 : ";
	cin >> chosen;

	switch (chosen)
	{
	case 1:
		cout << sum(num1, num2);
		break;

	case 2:
		cout << substract(num1, num2);
		break;

	case 3:
		cout << multiply(num1, num2);
		break;

	case 4:
		cout << division(num1, num2);
		break;
	}

}




int GCD(int, int);			// Quiz 2

int main()
{
	int num1, num2;
	cout << "Enter any two numbers to fid GCD : ";
	cin >> num1 >> num2;

	cout << "GCD of " << num1 << " and " << num2 << " = " << GCD(num1, num2);
}

int GCD(int x, int y)
{
	if (y > x)
		GCD(y, x);

	int temp = x % y;

	if (temp == 0)
		return y;

	x = y;
	y = temp;
	GCD(x, y);
}



void rectangle(void);			// Quiz 3
void circle(void);
void triangle(void);


int main()
{
	int select;
	cout << "Please select shape 1 - rectangle, 2 - circle, 3 - triangle : ";
	cin >> select;

	switch (select)
	{
	case 1:
		rectangle();
		break;

	case 2:
		circle();
		break;

	case 3:
		triangle();
		break;
	}
}


void rectangle()
{
	double num1, num2;
	cout << "You select rectangle, please input two integer for length and height : ";
	cin >> num1 >> num2;

	double result = num1 * num2;

	cout << "The area is : " << result;
}


void circle()
{
	double num1;
	cout << "You select circle, please input one integer for radius : ";
	cin >> num1;

	double result = num1 * num1 * 3.14;

	cout << "The area is : " << result;
}


void triangle()
{
	double num1, num2;
	cout << "You select triangle, please input two integer for edge and height : ";
	cin >> num1 >> num2;

	double result = num1 * num2 / 2;

	cout << "The area is : " << result;
}



void binary(int n)			// Quiz 5
{
	if (n == 0)
		return;

	binary(n / 2);
	cout << n % 2;
}

int main()
{
	int num;
	cout << "Input decimal num : ";
	cin >> num;
	cout << "to binary.. : ";
	binary(num);

	return 0;
}



int main()			// Quiz 6
{
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;

	for (int i = 0; i < 100; i++)
	{
		int temp = rand() % 4 + 1;

		switch (temp)
		{
		case 1:
			cout << "a ";
			aCount++;
			break;

		case 2:
			cout << "b ";
			bCount++;
			break;

		case 3:
			cout << "c ";
			cCount++;
			break;

		case 4:
			cout << "d ";
			dCount++;
			break;
		}
	}

	cout << endl;
	cout << "count of a : " << aCount << endl;
	cout << "count of b : " << bCount << endl;
	cout << "count of c : " << cCount << endl;
	cout << "count of d : " << dCount << endl;

	int most = aCount;
	if (bCount > most)
		most = bCount;
	if (cCount > most)
		most = cCount;
	if (dCount > most)
		most = dCount;

	cout << endl;
	cout << "���� ���� ������ ���ĺ��� : " << most << " �Դϴ�." << endl;
}



int main()			// Quiz 7
{
	srand(time(NULL));
	cout << "Enter�� ������ ������ ���۵˴ϴ�. ";
	char input = 0;
	int total = 0;
	int win = 0;

	while ((input = cin.get()) != EOF)
	{
		int computer = rand() % 3 + 1;
		string coms;
		total++;

		switch (computer)
		{
		case 1:
			coms = "����";

		case 2:
			coms = "����";

		case 3:
			coms = "��";

		}

		string chosen;
		cout << "���� ���� �� ���� �Է� : ";
		cin >> chosen;

		switch (computer)
		{
		case 1:
			if (chosen == "����")
			{
				cout << "�����ϴ�." << endl;
			}

			if (chosen == "����")
			{
				cout << "�̰���ϴ�." << endl;
				win++;
			}

			if (chosen == "��")
			{
				cout << "�����ϴ�." << endl;
			}

			break;

		case 2:
			if (chosen == "����")
			{
				cout << "�����ϴ�." << endl;
			}

			if (chosen == "����")
			{
				cout << "�����ϴ�." << endl;
				win++;
			}

			if (chosen == "��")
			{
				cout << "�̰���ϴ�." << endl;
				win++;
			}

			break;

		case 3:
			if (chosen == "����")
			{
				cout << "�̰���ϴ�." << endl;
				win++;
			}

			if (chosen == "����")
			{
				cout << "�����ϴ�." << endl;
				win++;
			}

			if (chosen == "��")
			{
				cout << "�����ϴ�." << endl;
			}

			break;
		}
	}

	cout << endl;
	cout << "��ü ���� Ƚ�� : " << total << endl;
	cout << "�̱� ���� Ƚ�� : " << win << endl;
}
