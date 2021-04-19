// ConsoleApplication2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

#include <iomanip>

/* 퀴즈 1

int main()
{
    int a = 0;
    int k=0;
    int c;
    cin >> a;
    c=a;
    int j = 1;
    int b = 0;

    for (k; k <= a; k++) {
    
        for (j; j < a; j++) {
        cout << " ";
    }

        for (b; b<=c-a; b++) {
            cout << "*";
        }
    b = 1;
        for (b; b <= c - a; b++) {
        cout << "*";
    }
    
    
    b = 0;
    j = 1;
    a -= 1;
    k = 0;
    cout << endl;
    }
    a = c-1;

    for (k; k <= a; k++) {

        for (j; j <= c- a; j++) {
            cout << " ";
        }
        for (b; b < a; b++) {
            cout << "*";
        }
        b = 1;
        for (b; b < a; b++) {
            cout << "*";
        }
    
        b = 0;
        j = 1;
        k = 0;
        cout << endl;
        a -= 1;
    }

}
*/

/* 퀴즈 2
int main()
{
    int k = 0;
    int a = 0;
    int c = 0;
    cout << "Please enter an integer : ";
    cin >> k;
    a = k;
    c = a;
    while (k - 1 > 0) { 
        k -= 1; 
        a *= k;
    }

    cout << c << "! = " << a;
    
}
*/

/* 퀴즈 3 ************************** 중요!!
int main()
{
    int a = 0;
    int b = 0;
    int n = 1;
    int k = 1;
    int c = 1;
    int j = 1;
    int d = 1;

    cout << "input N, M : \n";
    cin >> a >> b;

    while (k <= a) {
        for (n = 1; n <= 9; n++) {

            for (c = k, j = 1; j <= b && c <= a; j++, c++) {

                cout << setw(5) << c << " X " << n << " = " << setw(2)<<c * n;

            }

            cout << endl;
        }


        cout << endl;
        k = d * b + 1;
        d += 1;




    }

}

*/

/* 퀴즈 4
int main()
{
    int a, b,j{ 0 };
    int k = 0;
   

    cin >> a >> b;

    for (int c = 1; c <= 100; c++) {
        if (c % 7 == 0 || c % 9 == 0) {
            cout << setw(4) << c;
            k += 1;
            j += 1;
            if (k == 5) {
                cout << endl;
                k = 0;
            }

         }
    
    
    }

    cout <<endl << "total  :  " << j;


}

*/
    
/*퀴즈5
int main()
{
    char ch;
    int counta{0};
    int countb{0};

    while ((ch = cin.get()) != EOF) {
        switch (ch) {
        case 'a':
        case'A':
        case'e':
        case'E':
        case'O':
        case'o':
        case'i':
        case'I':
        case'U':
        case'u':
            ++counta;
            break;
        case'\n':
        case'\t':
        case' ':
            break;

        default:
            ++countb;
            break;
        }
    }

    cout << "모음" << counta << endl << "자음" << countb;
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
