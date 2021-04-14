// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
#include<cmath>

/*일반 퀴즈*/
/*퀴즈 2
int main()
{
	int a = 0;
	cin >> a;
	if (a >= 0) a = a;
	else a = -a;

	cout << a;
}
*/

/*퀴즈 4
int main()
{
	int num = 0;
	int k = 0;
	int plus = 0;
	int minus = 0;
	int sump = 0;
	int summ = 0;
	for (num = 0; num < 10; num++) {
		cin >> k;
		if (k >= 60) {
			plus++; sump += k;
		}
		else { minus++; summ += k; }
	}
	cout << "60점 이상인 학생의 수는 " << plus << " 명" << "그들의 평균은 " << sump / plus << " 점 입니다." << endl;
	cout << "60점 미만인 학생의 수는 " << minus << " 명" << "그들의 평균은 " << summ / minus << " 점 입니다." << endl;


}*/


/*실습 퀴즈*/
/* 퀴즈 1
int main()
{
	int k = 0;
	int Max = 0;
	int Min = 100;
	int sum = 0;
	for (int num = 0; num < 10; num++) {
		cin >> k;
		sum += k;
		if (Max <= k) Max = k;
		if (Min >= k) Min = k;
	}
	cout << "학생들 점수의 평균은 " << sum / 10 << "점이고, 최고점은 " << Max << "점, 최저점은 " << Min << "점 입니다.";
	
}
*/

/*퀴즈 2
int main()
{
	int a{ 0 }, b{ 0 }, c{ 0 }, Max{ 0 };
	cout << "Enter 3 numbers :";
	cin >> a >> b >> c;
	Max = a;
	if (b > Max) Max = b;
	if (c > Max) Max = c;
	cout << "The largest number is : " << Max;

}
*/

/*퀴즈 3
int main()
{
	int a = 0;
	int b = 0;
	int even = 0;
	int odd = 0;
	cin >> a;
	for (b = 0; b <= a; b++) {
		if (b % 2 == 0)  even += b;
		else odd += b;
	}
	cout << "Sum of all even num 1 to " << a << " : " << even << endl;
	cout << "Sum of all odd num 1 to " << b << " : " << odd << endl;
	

}
*/

/*퀴즈 4
int main()
{
	int a = 0;
	int b = 0;
	cout << "please enter one number : ";
	cin >> a;
	cout << endl;

	while (a >= 0) {
		while (b < a) {
		cout << "*";
		b += 1;
	}
		b = 0;
		cout << endl;
		a -= 1;
	}

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
