/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
    cout << "가위바위보 게임을 시작합니다." << endl;
    cout << "게임을 종료하길 원하신다면 EOF를 입력해주세요 "
    int c = 0;
    int d = 0;
    srand(time(0));
    while (1)
    {
        string a;
        cout << "가위, 바위, 보 중 선택해주세요 : ";
        cin >> a;
        int b = 1 + rand() % 3;
        if (a == "EOF") {
            break;
        }
        else if (a == "가위" && b == 1) 
        { // 1 : 가위, 2 : 바위, 3 : 보
            printf("비겼습니다. \n");
        }
        else if (a == "가위" && b == 2) 
        {
            printf("졌습니다. \n");
        }
        else if (a == "가위" && b == 3) 
        {
            printf("이겼습니다. \n");
            d++;
        }
        else if (a == "바위" && b == 2) 
        {// 1 : 가위, 2 : 바위, 3 : 보
            printf("비겼습니다. \n");
        }
        else if (a == "바위" && b == 3) 
        {
            printf("졌습니다. \n");
        }
        else if (a == "바위" && b == 1) 
        {
            printf("이겼습니다. \n");
            d++;
        }
        else if (a == "보" && b == 3) 
        { // 1 : 가위, 2 : 바위, 3 : 보
            printf("비겼습니다. \n");
        }
        else if (a == "보" && b == 1) 
        {
            printf("졌습니다. \n");
        }
        else if (a == "보" && b == 2) 
        {
            printf("이겼습니다. \n");
            d++;
        }
        else 
        {
            printf("error.\n");
        }
        c++;
    }
    cout << "게임을 종료합니다. 총 게임 횟수는 : " << c << "이긴 횟수는 : " << d << "입니다.";
    return 0;
}*/