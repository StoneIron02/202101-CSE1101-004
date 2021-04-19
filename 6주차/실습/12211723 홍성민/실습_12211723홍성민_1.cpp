#include <iostream>
using namespace std;

static int prime = 1;

bool isPrimeNumber(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

int getNextPrime()
{
	
	while (isPrimeNumber(++prime) == false);
	
	return prime;
	
}
int main_Quiz1()
{
	for (int i = 0; i < 10; i++)
	{
		cout << getNextPrime() << endl;
	}
	return 0;
}