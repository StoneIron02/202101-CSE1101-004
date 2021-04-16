#include <iostream>

using namespace std;

void toBin(int n) {
    if (n == 0) cout << "0";
    else if (n == 1) cout << "1";
    else
    {
        toBin(n / 2);
        cout << ((n % 2 == 0) ? "0" : "1");
    }
}

int main_Quiz4()
{
    int d;
    cout << "input a decimal number : ";
    cin >> d;
    cout << "to binary : ";
    toBin(d);
    return 0;
}