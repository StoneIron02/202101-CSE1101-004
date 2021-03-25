// ConsoleApplication6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
/* 퀴즈 1

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a = 0;
    int k = 1;
    int j;
    int b = 1;
    int c = 0;

    
    cin >> j;

    c = j;


    while (j > 0) {

        while (j - b > 0) {
            cout << " ";
            b += 1;
        }
        b = 1;
        while (a < k) {
            cout << "*";
            a += 1;
        }
        a = 1;
        while (a < k) {
            cout << "*";
            a += 1;
        }
        while (j - b > 0) {
            cout << " ";
            b += 1;
        }
 
        cout << endl;
        k += 1;
        a = 0;
        j -= 1;
        b = 1;
    }
   
    a = 1;
    k = 1;

    while (c > 0) {
        while (b <= k) {
            cout << " ";
            b += 1;
            
        }
        while (c - a > 0) {
            cout << "*";
            a += 1;

        }
        a = 1;
       
        while (c - a > 1) {
            cout << "*";
            a += 1;

        }
        j = b;
        k = j;
        b = 1;
        a = 1;
        cout << endl;
        c -= 1;
        
      
    }





    return 0;
}

*/


/* 퀴즈 2

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a = 0;
    int b = 0;
    cout << "Please enter the integer\n";
    cin >> a;
    b = a;
    while (a > 1 ) {
        a -= 1;
        b = b * a;
        
    }
    cout << b;
}
*/




/* 퀴즈 3

using std::cout;
using std::cin;
using std::endl;
using namespace std;

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



    cout.setf(ios::right);

    while (k <= a){
        for (n = 1; n <= 9; n++) {

            for (c = k, j = 1; j <= b && c <= a; j++, c++) {
                
                cout << setw(3) << c << " X " << n << " = " << c * n;
                
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


using std::cout;
using std::cin;
using std::endl;
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int k = 1;
    int t = 0;
    int j = 0;


    cin >> a >> b;

    while (k < 100) {
        cout.setf(ios::left);
        if (k % a == 0 || k % b == 0) {
            cout << setw(3) << k;
            t += 1;
            j +=1;
        }
        if (j == 5) {
            cout << endl;
            j = 0;
        }
        
        k += 1;

    }
    cout << endl;
    cout << "total : " << t;

}

*/

/* 퀴즈 5
using std::cout;
using std::cin;
using std::endl;


int main()
{
    int a = 0; // 모음 갯수
    int b = 0; // 자음 갯수
    int K; // 입력값


    while ((K = cin.get()) != EOF)

        switch (K) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            ++a;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;

        default:
            ++b;
            break;

        }

    cout << "모음:" << a << endl << "자음:" << b << endl;

    return 0;





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
