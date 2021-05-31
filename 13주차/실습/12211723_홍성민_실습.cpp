
#include <iostream>
#include "Car.h"
#include "Employee.h"

void quiz1()
{
    
    Car a{ 20, 2 };
    Car b{ 15, 3 };
    
    double posA{ 0.0 }, posB{ 0.0 };
    int sec{ 1 };

    while (true) //consider iterating each second
    {

        posA = a.getSpeed() * sec + 0.5 * a.getGear() * sec * sec;
        posB = b.getSpeed() * sec + 0.5 * b.getGear() * sec * sec;

        if (posA == posB) break;

        sec++;
    }

    std::cout << "cars meet after : " << sec << "seconds" << std::endl;
}

void printEmployee(Employee* arr, int num)
{
    Employee temp;
    for (int i = 0; i < num; i++)
    {
        temp = *(arr + i);
        std::cout << "\nname : " << temp.getname();
        std::cout << "\nage : " << temp.getage();
        std::cout << "\nsalary : " << temp.getsalary();
        std::cout << "\nyears : " << temp.getyears();
        std::cout << std::endl;
    }
}

void quiz2()
{
    Employee a, b;
    Employee arr[2];
    
    a.setage(35);
    a.setname("John  Doe");
    a.setsalary(50000);
    a.setyears(10);

    b.setage(45);
    b.setname("Jane Doe");
    b.setsalary(70000);
    b.setyears(20);

    arr[0] = a;
    arr[1] = b;

    printEmployee(arr, 2);

}

 int main()
{
     quiz1();
}
