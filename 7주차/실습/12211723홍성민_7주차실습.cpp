
#include <iostream>
#include <cstdlib>

#include <windows

#define PI 3.141592F

using namespace std;

inline float sum(float a, float b) { return a + b; }
inline float multiply(float a, float b) { return a * b; }
inline float subtract(float a, float b) { return a - b; }
inline float division(float a, float b) { return a / b; }

void Quiz1()
{
    float a, b;
    int opr;

    cout << "input two floats : ";
    cin >> a >> b;

    cout << "Select sum -> 1, substract -> 2, multiply -> 3, division -> 4 : ";
    cin >> opr;

    switch (opr)
    {
    case 1:
        cout << "a + b = " << sum(a, b) << endl;
        break;
    case 2:
        cout << "a - b = " << subtract(a, b) << endl;
        break;
    case 3:
        cout << "a * b = " << multiply(a, b) << endl;
        break;
    case 4:
        cout << "a / b = " << division(a, b) << endl;
        break;
    default:
        cout << "Invalid input!" << endl;
    }
}



int gcd_re(int a, int b, int div)
{
    //cout << a << " " << b << " " << min << endl;
    if (!(div - 1)) return 1;
    return (!(a % div) && !(b % div)) ? div : gcd_re(a, b, div - 1);
}

int gcd(int a, int b)
{
    return gcd_re(a, b, (a < b) ? a : b);
}
void Quiz1_re()
{
    int a, b;
    cout << "Enter two integers : ";
    cin >> a >> b;
    //cout << a << " " << b << endl;
    cout << "gcd of " << a << " and " << b << " : " << gcd(a, b) << endl;
}


inline int rec(int a, int b)
{
    return a * b;
}

inline float tri(int a, int b)
{
    return 0.5F * a * b;
}

inline float cir(float x)
{
    return PI * x * x;
}

void Quiz_2()
{
    int select, a, b;
    float c;
    cout << "Select Rectangle - 1, Triangle - 2, Circle - 3 : ";
    cin >> select;

    switch (select)
    {
    case 1:
        cout << "You selected Rectangle! please input two number for length and height : ";
        cin >> a >> b;
        cout << "the area is : " << rec(a,b);
        break;
    case 2:
        cout << "You selected Triangle! please input two number for length and height : ";
        cin >> a >> b;
        cout << "the area is : " << tri(a, b);
        break;
    case 3:
        cout << "You selected Circle! please input one number for radius : ";
        cin >> c;
        cout << "the area is : " << cir(c);
        break;
    default:
        cout << "Wrong number!";
    }
}

void Quiz_3()
{
    char in;
    int com, total = 0, winning = 0;

    cout << "Input (Rock - r, Sissor - s, Paper - p) : ";

    srand(time(NULL));
    while (true)
    {
        com = 1 + (rand() % 3);
        in = cin.get();

        if (in == ' ' || in == '\n') continue;
        if (in == EOF) break;
        switch (in)
        {
        case 'r':
            if (com == 2) {
                cout << "win!\n";
                winning++;
            }
            else if (com == 3)
            {
                cout << "lost!\n";
            }
            else
            {
                cout << "draw!\n";
            }
            break;
        case 's':
            if (com == 1) {
                cout << "lost!\n";
                winning++;
            }
            else if (com == 2)
            {
                cout << "draw!\n";
            }
            else
            {
                cout << "win!\n";
            }
            break;
        case 'p':
            if (com == 1) {
                cout << "win!\n";
                winning++;
            }
            else if (com == 2)
            {
                cout << "lost!\n";
            }
            else
            {
                cout << "draw!\n";
            }
            break;

        default:
            cout << "Wrong number!";
        }
        total++;
        cout << "Input (Rock - r, Sissor - s, Paper - p) : ";
    }

    cout << "total : " << total << " wins : " << winning << endl;
}

void toBin(int n) {
    if (n == 0) cout << "0";
    else if (n == 1) cout << "1";
    else
    {
        toBin(n / 2);
        cout << ((n % 2 == 0) ? "0" : "1");
    }
}

void Quiz_4()
{
    int n;
    cout << "input decimal : ";
    cin >> n;
    cout << "to binary : ";
    toBin(n);
    cout << endl;
}

void Quiz_5()
{
    char ca;
    int a=0, b=0, c=0, d=0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        ca = 97 + rand() % 4;
        switch (ca)
        {
        case 'a':
            a++;
            break;
        case 'b':
            b++;
            break;
        case 'c':
            c++;
            break;
        case 'd':
            d++;
            break;
        }
        cout << ca;
    }

    cout << endl;
    cout << "a : " << a << "번\n";
    cout << "b : " << b << "번\n";
    cout << "c : " << c << "번\n";
    cout << "d : " << d << "번\n";

    cout << "가장 많이 나온 알파벳 : ";
    if (a > b)
    {
        if (a > c)
        {
            if (a > d) cout << "a";
            else cout << "d";
        }
        else
        {
            if (c > d) cout << "c";
            else cout << "d";
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d) cout << "b";
            else cout << "d";
        }
        else
        {
            if (c > d) cout << "c";
            else cout << "d";
        }
    }
    cout << endl;
}

void Quiz_6()
{
    while(true){
    time_t t = time(NULL);
    cout << "현재시간 : " << ((t / 3600L) % 24) + 9 << "시 " << (t / 60) % 60 << "분 " << (t % 60) << "초" << endl;
    sleep(1000);
    }
}

int main()
{
    Quiz_6();
}