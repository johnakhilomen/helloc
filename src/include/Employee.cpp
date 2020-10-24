#include <iostream> // header in standard library
#include "Employee.hpp" // header in local directory

using namespace EmpNamespace;
using namespace std;

Employee::Employee()
{
    _name = "";
    _salary = 0.0;
    _age = 0;
}
Employee::Employee(string name, int age, double salary)
{
    _name = name;
    _age = age;
    _salary = salary;
}
void Employee::do_something()
{
    cout << "Doing something!" << endl;
}
void Employee::SetName(string name)
{
    _name = name;
}
string Employee::GetName()
{
    return _name;
}
void Employee::SetAge(int age)
{
    _age = age;
}
int Employee::GetAge()
{
    return _age;
}
void Employee::SetSalary(double salary)
{
    _salary = salary;
}
double Employee::GetSalary()
{
    return _salary;
}