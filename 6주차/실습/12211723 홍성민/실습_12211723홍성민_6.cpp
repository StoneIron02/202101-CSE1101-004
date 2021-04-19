#include <iostream>
#include <iomanip>

using namespace std;

int main_Quiz6()
{

    int a;

    cout << "input an integer : ";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {
        cout << setw(((static_cast<std::streamsize>(a) - i) * 2 + 1));
        for (int j = i; j > 1; j--)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}