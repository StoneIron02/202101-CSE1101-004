#define _CRT_SECURE_NO_WARNINGS // 혹은 localtime_s를 사용
#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main() {
    int ch;
    while (1)
    {
        time_t timer;
        struct tm* t;
        timer = time(NULL); // 1970년 1월 1일 0시 0분 0초부터 시작하여 현재까지의 초
        t = localtime(&timer); // 포맷팅을 위해 구조체에 넣기
        cout << t->tm_hour << "시 ";
        cout << t->tm_min << " 분 ";
        cout << t->tm_sec << " 초" << endl;
        Sleep(1000);
    }
}