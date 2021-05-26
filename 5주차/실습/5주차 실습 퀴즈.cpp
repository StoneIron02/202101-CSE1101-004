// 5주차 실습 퀴즈.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int printStar(int x) {
    for (int i = 1; i <= x; i++) {
        cout << setw(x -i+1);
        for (int j = 1; j <= 2*i-1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = x - 1; i >= 1; i--) {
        cout << setw(x -i+1);
        for (int j = 2 * i - 1; j >= 1; j--) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int factorial(int x) {
    int a = 1;
    for (int i = 2; i <= x; i++) {
        a = a * i;
    }
    return a;
}
int printCmath(double x) {
    cout <<"ceil(x): "<< ceil(x)<<endl;
    cout <<"exp(x): " << exp(x) << endl;
    cout << "log(x): " << log(x) << endl;
    cout << "sqrt(x): " << sqrt(x) << endl;
    cout << "fabs(x): " << fabs(x) << endl;
    cout << "pow(x,2): " <<pow(x,2) << endl;
    return 0;
}
float sum(float x, float y) {
    return (x + y);
}
float multiply(float x, float y) {
    return (x * y);
}
float substract(float x, float y) {
    return (x - y);
}
float division(float x, float y) {
    return (x / y);
}
float printSymbol(int a, string b) {
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << b<<" ";
        }
        cout << endl;
    }
    return 0;
}
int fibo(int x) {
    int a = 1, b = 1, pocket=0;
    for (int i = 1; i <= x-2; i++) {
        pocket = b;
        b = a + b;
        a = pocket;
        cout << " " << b;
    }
    return b;
}
double cal_pi(int n) {
    double sum = 1;
    int count = 1;
    for (double i = 1; i <= n; i++) {
        if (count % 2 == 0) {
            
            sum +=  (1.0 / (2*i+1));
        }
        else {
            sum -= double (1.0 / (2*i+1));
        }
        count++;
    }
    return (4 * sum);
}
double exp(int n) {
    double sum = 1, a=1;
    int count = 1;
    while (a > pow(10, -6)) {
        a = pow(double(n),count) / double(factorial(count));
        if (a> pow(10,-6)){
            sum += a;
            count += 1;
        }

    }
    return sum;
}
int main()
{
    int x;
    int result;
   
    //cin >> x;
    //printStar(x);
     
    //result = factorial(x);
    //cout << result;
    //double y;
    //cout<<"input x real number: ";
    //cin >> y;
    //printCmath(y);
    
    
    //double a;
    //double b;
    //cout << "input 2 floats :";
    //cin >> a >> b;
    //cout << "Select sum - 1, substract - 2, multiply - 3, division - 4: ";
    //cin >> x;
    //if (x == 1) { cout << "a+b= " << sum(a,b); }
    //if (x == 2) { cout << "a-b= " << substract(a, b); }
    //if (x == 3) { cout << "a*b= " << multiply(a, b); }
    //if (x == 4) { cout << "a/b= " << division(a, b); }


    //cout << "input row: ";
    //cin >> x;
    //string sym;
    //cout << "input sym";
    //cin >> sym;
    //printSymbol(x, sym);

    //cout << "inpt n-th fibo num: ";
    //cin >> x;
    //if (x <= 2) {
    //    cout << "n-th fibo num: " << 1;

    //}
    //else {
    //    cout << "n-th fibo num: " << fibo(x);
    //}
    // 
    //cout << "input resolution variable number: ";
    //cin >> x;
    //cout << cal_pi(x);


    //cout << "input: ";
    //cin >> x;
    //cout << "cal_exp(" << x << ")" << exp(x);
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
