/*
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void)
{
    cout << "���������� ������ �����մϴ�." << endl;
    cout << "������ �����ϱ� ���ϽŴٸ� EOF�� �Է����ּ��� "
    int c = 0;
    int d = 0;
    srand(time(0));
    while (1)
    {
        string a;
        cout << "����, ����, �� �� �������ּ��� : ";
        cin >> a;
        int b = 1 + rand() % 3;
        if (a == "EOF") {
            break;
        }
        else if (a == "����" && b == 1) 
        { // 1 : ����, 2 : ����, 3 : ��
            printf("�����ϴ�. \n");
        }
        else if (a == "����" && b == 2) 
        {
            printf("�����ϴ�. \n");
        }
        else if (a == "����" && b == 3) 
        {
            printf("�̰���ϴ�. \n");
            d++;
        }
        else if (a == "����" && b == 2) 
        {// 1 : ����, 2 : ����, 3 : ��
            printf("�����ϴ�. \n");
        }
        else if (a == "����" && b == 3) 
        {
            printf("�����ϴ�. \n");
        }
        else if (a == "����" && b == 1) 
        {
            printf("�̰���ϴ�. \n");
            d++;
        }
        else if (a == "��" && b == 3) 
        { // 1 : ����, 2 : ����, 3 : ��
            printf("�����ϴ�. \n");
        }
        else if (a == "��" && b == 1) 
        {
            printf("�����ϴ�. \n");
        }
        else if (a == "��" && b == 2) 
        {
            printf("�̰���ϴ�. \n");
            d++;
        }
        else 
        {
            printf("error.\n");
        }
        c++;
    }
    cout << "������ �����մϴ�. �� ���� Ƚ���� : " << c << "�̱� Ƚ���� : " << d << "�Դϴ�.";
    return 0;
}*/