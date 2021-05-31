#include "Employee.h"

std::string Employee::getname()
{
    return name;
}

int Employee::getage()
{
    return age;
}

int Employee::getsalary()
{
    return salary;
}

int Employee::getyears()
{
    return years;
}

void Employee::setname(std::string n)
{
    name = n;
}

void Employee::setage(int a)
{
    age = a;
}

void Employee::setsalary(int s)
{
    salary = s;
}

void Employee::setyears(int y)
{
    years = y;
}


