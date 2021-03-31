//과제 1
/*
#include <iostream>

using namespace std;

void PrintSimble(int);

int main()
{
	int a;
	cout << "Please enter one number: ";
	cin >> a;

	PrintSimble(a);


}

void PrintSimble(int n)
{
	for (; n > 0; n--)
	{
		for (int i=n; i > 0; i--)
		{
			cout << "*";
		}
		
		cout << endl;
	}
}
*/

//과제 2

#include <iostream>
#include <cmath>

using namespace std;

double calc_volume(double x)
{
	return (4.0 / 3.0) * pow(x, 3) * 3.14;
}

int main()
{
	double x;
	cin >> x;

	calc_volume(x);

	cout << calc_volume(x);
}


/*
#include <iostream>

using namespace std;

bool prime(int);

int main()
{
	int a;
	cin >> a;

	for (; a > 1; a--)
	{
		prime(a);
		if(prime(a)==1) //false 이면 제외
		cout << a << " ";
	}
}

bool prime(int a) // true 일 때 1, false 일 때 0
{
	if (a == 2)
		return true; //a=2 일 때, 아래 값이 false가 나오게 되므로 따로 true 설정
	for (int n = 2; n < a; n++)
	{
		if (a % n == 0)
			return false; // 2~a-1의 수로 나머지를 구했을때, 0 이 나온다면 소수가 아님.
	}

	return true;
}
*/
