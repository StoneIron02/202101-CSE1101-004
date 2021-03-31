#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

void printStar(int x)
{

    for (int i = 1; i <= x; i++)
    {
        cout << setw((static_cast<std::streamsize>(x) - i + 1));
        for (int j = i * 2 - 1; j >= 1; j--)
        {
            cout << "*";// << " ";
        }
        cout << "\n";
    }

    for (int i = x - 1; i >= 1; i--)
    {
        cout << setw((static_cast<std::streamsize>(x) - i + 1));
        for (int j = i * 2 - 1; j >= 1; j--)
        {
            cout << "*";// << " ";
        }
        cout << "\n";
    }

    cout << "\n"; cout << endl;
}


long factorial(int n)
{
    long sum = 1;

    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    return sum;
}

void printCmath(double x)
{
    cout << "ceil(x) : " << ceil(x) << "\n";
    cout << "exp(x) : " << exp(x) << "\n";
    cout << "log(x) : " << log(x) << "\n";
    cout << "sqrt(x) : " << sqrt(x) << "\n";
    cout << "fabs(x) : " << fabs(x) << "\n";
    cout << "pow(x,2) : " << pow(x,2) << endl;
}


float sum(float a, float b) { return a + b; }
float multiply(float a, float b) { return a * b; }
float subtract(float a, float b) { return a - b; }
float division(float a, float b) { return a / b; }

void calculator()
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

void symbolPyramid(int row, char symbol)
{
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++) cout << symbol << " ";
        cout << "\n";
    }
}

void cal_pi(int n)
{
    double pi = 0;

    for (int i = 0; i <= n; i++)
    {
        pi += ((i % 2 == 0) ? 1.0 : -1.0) / (2*i + 1);
    }

    cout << "cal_pi(" << n << ") = " << pi * 4;
}

int fibonacci(int n)
{
    return (n == 1 || n == 2) ? 1 : fibonacci(n - 1) + fibonacci(n - 2); //O(2^n)
}

void cal_exp(int x)
{
    double an = 1.0, result = 0.0;
    int  i = 0;

    while ((an = pow(x, i) / factorial(i)) > pow(10, -6))
    {
        // cout << pow(x, i) <<"/"<< factorial(i) << endl; //for log
        result += an;
        i++;

    }

    cout << "cal_exp(" << x << ") = " << result << endl;
}

int main()
{
    //cout << fibonacci(1);
    return 0;
}