// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
#include<cmath>

/* 퀴즈 1(자체변형)

int main()
{
	for (int b = 1; b <= 9; b++) {
		for (int a = 2; a <= 5; a++) {
			cout << a << " x " << b << " = " << a * b << "\t";

		}
		cout << endl;
	}
	cout << endl << endl;
	for (int b = 1; b <= 9; b++) {
		for (int a = 6; a <= 9; a++) {
			cout << a << " x " << b << " = " << a * b << "\t";

		}
		cout << endl;
	}


}

*/ 


/* 퀴즈 4

int main()
{
	int n = 0;
	int int_min = 0;
	while (n <= 0) {
		n = n - 1;
		if (n < 0) int_min = n;
	}
	cout << "minimum of int:" << int_min;

}

*/

/* 퀴즈 5
int main()
{
	int a;
	double b;
	char c;
	float d;
	short e;
	long f;

	cout << sizeof(a) << "\t" << sizeof(b) << "\t" << sizeof(c) << "\t" << sizeof(d) << "\t" << sizeof(e) << "\t" << sizeof(f) << "\t";
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
