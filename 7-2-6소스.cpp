/*
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;
int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int sum = 0;
    srand((unsigned int)time(NULL));
    for(int i = 1; i<= 100; i++)
    {
        int x = 1 + rand() % 4;
        if (x == 1) {
            cout << "a";
            a++;
        }
        else if(x == 2) {
            cout << "b";
            b++;
        }
        else if (x == 3) {
            cout << "c";
            c++;
        }
        else{
            cout << "d";
            d++;
        }
        if (i % 10 == 0) 
        {
            cout << endl;
        }
    }
    cout << endl;
    
    vector<int> vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);
    int len = vec.size();
    int largest = vec[0];
    for (int i = 1; i < len; ++i)
    {
        largest = max(largest, vec[i]);  
    }
    sum = largest;
    if (a == sum)
    {
        cout << "���� ���� ������ ���ĺ��� a �Դϴ�." << endl;
    }
    if (b == sum)
    {
        cout << "���� ���� ������ ���ĺ��� b �Դϴ�." << endl;
    }
    if (c == sum)
    {
        cout << "���� ���� ������ ���ĺ��� c �Դϴ�." << endl;
    }
    if (d == sum)
    {
        cout << "���� ���� ������ ���ĺ��� d �Դϴ�." << endl;
    }
    cout << a << " " << b << " " << c << " " << d << " ";
}
*/