#define _CRT_SECURE_NO_WARNINGS // Ȥ�� localtime_s�� ���
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
        timer = time(NULL); // 1970�� 1�� 1�� 0�� 0�� 0�ʺ��� �����Ͽ� ��������� ��
        t = localtime(&timer); // �������� ���� ����ü�� �ֱ�
        cout << t->tm_hour << "�� ";
        cout << t->tm_min << " �� ";
        cout << t->tm_sec << " ��" << endl;
        Sleep(1000);
    }
}