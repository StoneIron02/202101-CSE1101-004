#pragma once

#include <string>

class Employee
{
private:
	std::string name;
	int age;
	int salary;
	int years;

public:
	std::string getname();
	int getage();
	int getsalary();
	int getyears();

	void setname(std::string);
	void setage(int);
	void setsalary(int);
	void setyears(int);
};

