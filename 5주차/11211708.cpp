#include <iostream>
#include <cmath>
using namespace std;


/* 1-1
void printstar(int);
int main()
{
	int x;
	cin >> x;
	printstar(x);
}
void printstar(int a)
{
	int count1; //줄을 뜻함
	int count2;
	int count3;
	int count4;
	int count5;
	int count6;
	int count7;

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

/* 1-2
void factorial(int);
int main()
{
	int a;
	cout << "Enter the number" << "\n";
	cin >> a;
	factorial(a);

}
void factorial(int x)
{
	int count1;
	int n;
	for (n = 1, count1 = 1; count1 <= x; ++count1)
	{
		n = n * count1;
	}
	cout << x << "!" << " = " << n;
}
*/

/* 2-1
int main()
{
	double x;


	cout << "Input x the real number : ";
	cin >> x;
	cout << "x" << "\n";

	cout << "ceil(x) = " << ceil( x ) << "\n";
	cout << "exp(x) = " << exp(x) << "\n";
	cout << "log(x) = " << log(x) << "\n";
	cout << "sqrt(x) = " << sqrt(x) << "\n";
	cout << "fabs(x) = " << fabs(x) << "\n";
	cout << "pow(x,2) = " << pow(x,2) << "\n";	
}
*/

/*2-2
float sum(float, float);
float multiply(float, float);
float subtract(float, float);
float division(float, float);

int main()
{
	float a;
	float b;
	int c;
	cout << "input 2 floats : ";
	cin >> a >> b;

	cout << "\n" << "Select		sum_1	subtract_2	multiply_3	division_4 :";
	cin >> c;

	if (c == 1)
		cout << "a + b : " << sum(a,b);
	if (c == 2)
		cout << "a - b : " << subtract(a,b);
	if (c == 3)
		cout << "a * b : " << multiply(a,b);
	if (c == 4)
		cout << "a / b : " << division(a,b);


}
float sum(float x, float y)
{
	return x + y;
}
float multiply(float x, float y)
{
	return x * y;
}
float subtract(float x, float y)
{
	return x - y;
}
float division(float x, float y)
{
	return x / y;
}
*/

/* 3번
void star(int, char);
int main()
{
	int row;
	char sym;
	cout << "input row : ";
	cin >> row;
	cout << "\n" << "input sym : ";
	cin >> sym;

	star(row, sym);

}
void star(int x, char y)
{
	int a;
	int b;
	int c;

	for (int b = 1; b <= x; b++)
	{
		for (int a = 0; a < b; a++)
		{
			cout << y;
		}
		cout << "\n";
	}

}
*/

/* 4
int fibonacci (int);
int main()
{
	int a;
	cin >> a;

	cout << fibonacci(a);
}

int fibonacci (int x)
{
  // 피보나치 수를 계산하기 위해 연속한 두 항의 값을 가지고 있어야 한다. (n, n + 1번째 항) 
	int a = 1; //n번째 항
	int b = 1; //n + 1번째 항
	int c; //루프 안에서 계산할 n + 2번째 항
	int n = 1; //지금 b에 저장된 값은 피보나치 수열의 n번째 항이다.

	while (n != x) //b에 저장된 값이 x번째 피보나치 항일 때까지 반복
	{

		c = a + b; //n + 2번항 계산

		a = b; // 각 변수 업데이트 
		b = c; 
		n++;

	}
	return a;
}
*/
