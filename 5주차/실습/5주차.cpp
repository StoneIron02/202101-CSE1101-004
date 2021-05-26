// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

/*퀴즈 1

void printStar(int x);

int main()
{
	int a = 0;
	cin >> a;
	printStar(a);
}

void printStar(int x) {
	int b = x;
	int j = 1;
	int c = x;

	for (x; x > 0; x--) {
		for (b; b >1; b--) {
			cout << " ";
		}
		for (int c = 1; c <= 2*j-1; c++) {
			cout << "*";
		}
		b = x - 1;
		j++;
		cout << endl;
	}

	x = c;
	j = x-1;
	int k = 1;

	for (x; x > 1; x--) {
		for (int b=1; b <= k; b++) {
			cout << " ";
		}
		for (int c = 1; c <= 2 * j - 1; c++) {
			cout << "*";
		}
		b = x - 1;
		j--;
		cout << endl;
		k++;
	}
	
}

*/

/*퀴즈 1-2 

int factorial(int x);


int main()
{
	int a = 0;
	cin >> a;
	cout << a << "!=" << factorial(a);
}

int factorial(int x) {
	int k = x;
	while (x >= 2) { k = k * (x - 1); x--; }
	
	return k;
}

*/

/*퀴즈 1-2 recurcion 버전 ***************************

int factorial(int x);


int main()
{
	int a = 0;
	cin >> a;
	cout << a << "!=" << factorial(a);
}

int factorial(int x) {
	if (x <= 1)
		return 1;
	else
		return x * factorial(x - 1);
}
*/

/*퀴즈 2는 건너뜀*/

/*퀴즈 3

int main()
{
	int a = 0;
	int c = 0;
	
	char b;
	cout <<"input row:";
	cin >> a;
	c = 1;
	int k = a;

	cout << "input sym:";
	cin >> b;

	for (a; a >= 1; a--) {
		for (c = 1; a + c - 1 <= k;c++) {
			cout << b << setw(2);
		}
		cout << setw(0);
		cout << endl;
	}
}

*/

/*퀴즈 4 with recursion *********************************

int fibonacci(int x);

int main()
{
	int a = 0;
	cout << "Input n-th fibo num:";
	cin >> a;
	cout << "n-th fibo num:" << fibonacci(a);
}

int fibonacci(int x) {
	if (x == 0 || x == 1) return x;
	else
		x = fibonacci(x - 1) + fibonacci(x-2);
	return x;
}

*/

/*퀴즈 4 with out recursion   ***************************
int fibonacci(int x);

int main()
{
	int a = 0;
	cout << "Input n-th fibo num:";
	cin >> a;
	cout << "n-th fibo num:" << fibonacci(a);
}

int fibonacci(int x) {
	int a=0;
	int b{ 1 }, c{ 1 };
	for (int i = 2; i <= x; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}

*/

/*퀴즈 e 구하기 나중에 다시 해보기 ㅠㅠ

double ef(int x);
int factorial(int a);

int main()
{
	int b = 0;
	cout << "input : ";
	cin >> b;
	cout << "cal_exp(" << b << ") : " << ef(b);
}

int factorial(int a) {
	if (a <= 1) {
		return a;
	}
	else
		return a * factorial(a - 1);
}

double ef(int x) {
	const double epsilon = pow(10, -6);
	double res = 0;
	int k = 0;
	while ( pow(x, k) / factorial(k) > epsilon)
	{
		res =res+ (pow(x, k) / factorial(k));
		k++;
	}
	return res;
}

*/

/*퀴즈 파이의 근삿값 구하기 **************

double my_pi(int n);


int main()
{
	int a = 0;
	cout << "Input resolution variable number : ";
	cin >> a;
	cout << "cal_pi(" << a << ") : " << my_pi(a);


}
double my_pi(int n) {
	double pi=0;

	for (int i = 0; i <= n; i++) {
		if (i % 2 !=0) {
			pi -= (1.0 / (2*i+1));
		}
		else {
			pi += (1.0 / (2*i+1));
		}
	}
	return pi*4;
}

*/



// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
