
#include <iostream>

void callByR(int &var)
{
    std::cout << "Address of var in callByR : " << &var << "\n";
}

void callByV(int var)
{
    std::cout << "Address of var in callByV : " << &var << "\n";
}

int Quiz1()
{
    int var = 10;
    std::cout << "Address of local var : " << &var << "\n";
    callByR(var);
    std::cout << "Address of local var after CallByR : " << &var << "\n";
    callByV(var);
    std::cout << "Address of local var after CallByV : " << &var << "\n";
    return 0;
}


void swap(int& a, int& b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int Quiz2()
{
    int a = 10, b = 12;
    std::cout << "a : " << a << " b : " << b << "\n";
    swap(a, b);
    std::cout << "a : " << a << " b : " << b << "\n";
    return 0;
}


int abs_O(int x)
{
    return x < 0 ? -x : x;
}

double abs_O(double x)
{
    return x < 0 ? -x : x;
}

long int abs_O(long int x)
{
    return x < 0 ? -x : x;
}

template <typename N>
N abs_T(N x)
{
    return x < 0 ? -x : x;
}

int Quiz3()
{
    int a = -10;
    double b = -3.14;
    long int c = -1515461619L;

    std::cout << "a : " << a << " abs(a) : " << abs_O(a) << "\n";
    std::cout << "b : " << b << " abs(b) : " << abs_O(b) << "\n";
    std::cout << "c : " << c << " abs(c) : " << abs_O(c) << "\n";
    std::cout << std::endl;
    std::cout << "a : " << a << " abs_T(a) : " << abs_T(a) << "\n";
    std::cout << "b : " << b << " abs_T(b) : " << abs_T(b) << "\n";
    std::cout << "c : " << c << " abs_T(c) : " << abs_T(c) << "\n";
    return 0;
}


int main1()
{
    Quiz1();
    return 0;
}