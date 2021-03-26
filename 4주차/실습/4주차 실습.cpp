// 4주차 실습.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{




    int n, m;
    ////실습수업 
    ////문제 1번
    //
    //cout << "Please enter a number";
    //cin >> n;
    //for (int i = 1; i <= n; ++i) {
    //    cout << setw(n-i+1);
    //    for (int j = 1; j <= 2*i-1; j++) {
    //        cout << "*";
    //    }
    //    cout << endl;
    //}
    //for (int i = (n - 1); i >= 1; --i) {
    //    cout << setw(n - i + 1);
    //    for (int j = 1; j <= 2 * i - 1; j++) {
    //        cout << "*";
    //    }
    //    cout << endl;
    //}


    ////문제2번
    //cout << "Please Enter a integal";
    //cin >> n;
    //int result = 1;
    //for (int i = 2; i <= n; i++) {
    //    result *= i;
    //}
    //cout << n << "!= " << result << endl;


    ////문제 3번
    //
    cout << "Please Enter N,M: ";
    cin >> n >> m;
    for (int k = 1; k <= 9 / m + 1; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = m * (k - 1) + 1; j <= m * (k - 1) + m; j++) {
                if (j == 10) {
                    break;
                }

                cout << j << setw(1)<< " X" <<setw(1)<< i << " = " << setw(4)<<j * i<<setw(4);

            }
            cout << "" << endl;
        }
        cout << "" << endl;
    }
//

//문제4번
     //cout << "N과 M을 입력해주세요";
     //
     //cin >> n >> m;
     //int count = 0;
     //for (int i = 1; i <= 100; i++) {
     //    if (i % n == 0 || i % m==0) {
     //        cout << i <<"   ";
     //        count++;
     //        if (count % 5 == 0) {
     //            cout << endl;
     //        }
     //    }

     //}
     //cout << endl<< "total: "<<count;

////문제 5번
//    char ch;
//    int voc = 0 ,coc = 0;
//    while ((ch = cin.get()) != EOF) {
//        cout << "비교" << endl;
//        switch (ch) {
//            
//        case 'A':
//            coc++;
//            //break;
//        case 'a':
//            coc++;
//            break;
//        case 'E':
//            coc++;
//            break;
//        case 'e':
//            coc++;
//            break;
//        case 'I':
//            coc++;
//            break;
//        case 'i':
//            coc++;
//            break;
//        case 'O':
//            coc++;
//            break;
//        case 'o':
//            coc++;
//            break;
//        case 'u':
//            coc++;
//            break;
//        case 'U':
//            coc++;
//            break;
//        case '\n':
//            break;
//        default:
//            cout << "자음\n";
//            voc++;
//            break;
//        
//        }
//    }
//    
//    cout << "모음: " << coc << endl;
//    cout << "자음: " << voc;
//


}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
