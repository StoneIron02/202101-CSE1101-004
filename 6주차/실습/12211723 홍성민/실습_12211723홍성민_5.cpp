#include <iostream>

using namespace std;

int reverse(int n)
{
	int result = 0, remainder;

	while (n > 0)
	{
		remainder = n % 10;
		result = result * 10 + remainder;
		n /= 10;
	}
	return result;
}

int main_Quiz5()
{
	int n;
	cout << "input an integer : ";
	cin >> n;
	cout << n << "을 거꾸로 출력하면 " << reverse(n) << endl;
	return 0;
}