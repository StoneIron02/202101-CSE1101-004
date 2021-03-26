////// Quiz 1 ///////
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int temp{ 0 };

	int i = 0;
	while (temp < n)
	{
		int j = n - temp;
		while (j > 0)
		{
			cout << " ";
			j -= 1;
		}

		int k = 0;
		while (k < 2*i + 1)
		{
			cout << "*";
			k++;
		}
		cout << "\n";

		i++;
		temp++;
	}

	
	int y = n;
	int tem{ 1 };
	while (tem < n)
	{
		cout << " ";
		int j = 0;
		while (j < tem)
		{
			cout << " ";
			j++;
		}

		int k = 2;
		while (k < 2*y - 1)
		{
			cout << "*";
			k++;
		}

		cout << "\n";
		tem++;
		y--;
	}
	
	return 0;
}

////// Quiz 2 ///////
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please enter an integer : \n";
	cin >> n;
	cout << n;

	if (n == 0) cout << "! = 1";
	else
	{
		int fac = n;
		while (n > 1)
		{
			fac = fac * (n - 1);
			n--;
		}
		cout << "! = " << fac;
	}
	
	return 0;
}

////// Quiz 3 ///////
#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "input n, m : ";
	cin >> n >> m;
	
	int p = 1;
	int i, k;
	while (p <= n/m + 1)
	{
		int j = 1;
		while (j <= n)
		{
			i = 1 + (p - 1) * m;
			k = p * m;
			while (i <= k)
			{
				cout << i << " x " << j << " = " << j * i << "\t";
				i++;
				if (i > n) break;
			}
			cout << "\n";
			j++;
		}
		p++;
		cout << "\n";
	}
	return 0;
}

///// Quiz 4 /////
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, m;
	int tot = 0;
	cin >> n >> m;
	
	int i = 1;
	while (i <= 100)
	{
		if (i % n == 0 || i % m == 0)
		{
			cout << i << setw(7);
			tot += 1;
			if (tot % 5 == 0) cout << "\n";
		}
		i++;
	}

	cout << "\n";
	cout << "total : " << tot;
	return 0;
}
