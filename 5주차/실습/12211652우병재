#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void printStar(int);		// Quiz 1_1

int main(void)
{
	int num;

	cout << "Input an integer : ";
	cin >> num;

	printStar(num);

	system("pause");

	return 0;
}


void printStar(int x)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < (x - i - 1); j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 0; i < x - 1; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2 * (x - i - 1) - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}



int factorial(int);			// Quiz 1_2



int main(void)
{

	int num;

	cout << "Please enter one integer : ";
	cin >> num;

	cout << num << "!= " << factorial(num) << endl;

	system("pause");

	return 0;
}

int factorial(int x)
{
	int total = 1;

	for (int i = x; i > 0; i--)
	{
		total *= i;
	}

	return total;
}


int main(void)			// Quiz 2_1
{
	double num;

	cout << "input x real number : ";
	cin >> num;

	cout << "ceil(x) : " << ceil(num) << endl;
	cout << "exp(x) : " << exp(num) << endl;
	cout << "log(x) : " << log(num) << endl;
	cout << "sqrt(x) : " << sqrt(num) << endl;
	cout << "fabs(x) : " << fabs(num) << endl;
	cout << "pow(x,2) : " << pow(num, 2) << endl;

	system("pause");

	return 0;
}



float sum(float, float);		// Quiz 2_2
float substract(float, float);
float multiply(float, float);
float division(float, float);

int main(void)
{
	float num1, num2;
	int select;

	cout << "input 2 floats : ";
	cin >> num1 >> num2;
	cout << "Select sum - 1, substract - 2, multiply - 3, division - 4 : ";
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "a+b = " << sum(num1, num2);
		break;

	case 2:
		cout << "a-b = " << substract(num1, num2);
		break;

	case 3:
		cout << "a��b = " << multiply(num1, num2);
		break;

	case 4:
		cout << "a/b = " << division(num1, num2);
		break;

	default:
		cout << "Incorrect integer entered.";
		break;

	}

	system("pause");

	return 0;
}


float sum(float x, float y)
{
	float total;
	total = x + y;

	return total;
}

float substract(float x, float y)
{
	float total;
	total = x - y;

	return total;
}

float multiply(float x, float y)
{
	float total;
	total = x * y;

	return total;
}

float division(float x, float y)
{
	float total;
	total = x / y;

	return total;
}


void star(int, char);		// Quiz 3

int main(void)
{
	int num;
	char character;

	cout << "input row : ";
	cin >> num;
	cout << "input sym : ";
	cin >> character;

	star(num, character);

	system("pause");

	return 0;
}

void star(int x, char y)
{
	for (int i = 1; i <= x; i++)
	{
		for (int j = i; j > 0; j--)
		{
			cout << y << " ";
		}
		cout << endl;
	}
}


int fibonacci(int);			// Quiz 4

int main(void)
{
	int input;

	cout << "Input N for fibonacci() : ";
	cin >> input;

	cout << fibonacci(input) << endl;

	system("pause");

	return 0;
}

int fibonacci(int x)
{
	if (x == 1)
		return x;

	int a = 0, b = 1, c = 1;

	for (int i = 1; i < x; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return c;
}



double cal_pi(int);			// Quiz 5_1 ���� �ٻ簪

int main(void)
{
	int num;

	cout << "Input resolution variable number : ";
	cin >> num;

	cout << "cal_pi(" << num << ") : " << cal_pi(num) << endl;

	system("pause");

	return 0;
}

double cal_pi(int x)
{
	double total = 0.0;

	for (int i = 0; i <= x; i++)
	{
		if (i % 2 != 0)
			total -= ((double)1 / (2 * i + 1));
		else
			total += ((double)1 / (2 * i + 1));
	}

	total *= 4;

	return total;
}


int factorial(int);			// Quiz 5_2 Exponential function
double cal_exp(int);

int main(void)
{
	int input;

	cout << "Input N for cal_exp() : ";
	cin >> input;

	cout << "cal_exp(" << input << ") : " << cal_exp(input) << endl;

	system("pause");

	return 0;
}

int factorial(int x)
{
	int total = 1;
	while (x)
		total *= x--;

	return total;
}

double cal_exp(int x)
{
	const double epsilon = pow(10, -6);
	int k = 0;
	double a_pow_n, total = 0;

	while ((a_pow_n = pow(x, k) / factorial(k)) > epsilon)
	{
		total += a_pow_n;
		k++;
	}

	return total;
}
