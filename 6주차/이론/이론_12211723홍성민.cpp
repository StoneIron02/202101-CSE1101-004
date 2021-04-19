// Week6.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

static int correct;

void giveQuiz()
{
    int a, b, in;
    a = 2 + rand() % 8;
    b = 2 + rand() % 8;

    std::cout << a << " * " << b << " = ";
    std::cin >> in;
    if (in != a * b)
    {
        std::cout << "정답은 " << a * b << "입니다!\n";
    }
    else
    {
        correct++;
    }
}

int main1()
{
    int i;
    double timeUsed;

    srand(time(0));

    std::cout << "구구단 시험을 시작합니다.\n";
    std::cout << "시작하려면 엔터를 누르세요." << std::endl;
    getchar();

    system("cls");
    clock_t start = clock();
    for (i = 0; i < 10; i++)
    {
        giveQuiz();
    }
    clock_t end = clock();

    timeUsed = (double)(end - start) / CLOCKS_PER_SEC;

    std::cout << "\n결과 : (" << correct << "/" <<  10 << ")\n";
    std::cout << "걸린 시간 : " << timeUsed << "\n";
    std::cout << "점수 : " << (int)(10 * correct * (10 / (timeUsed-4.0))) << "점"<< std::endl;
    return 0;
}
