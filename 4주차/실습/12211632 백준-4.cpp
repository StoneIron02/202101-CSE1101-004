#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b;
	c = 0;
	d = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % a == 0 || i % b == 0)
		{
			cout << setw(3) << i;
			++c;
			++d;
			if (c % 5 == 0)
			{
				cout << endl;
			}
		}
	}
	cout << endl << "total : " << d;
}
