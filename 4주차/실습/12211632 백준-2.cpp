#include <iostream>
using namespace std;
int main()
{
	int a;
	int i;
	int total = 1;
	cout << "please enter an integer : ";
	cin >> a;
	for (i=1; i <= a; ++i)
	{
		total = i * total;
	}
	cout << total;
