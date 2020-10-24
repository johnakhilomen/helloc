#include <iostream>
#include <vector>
#include <string>
#include "include/Employee.hpp"

using namespace std;
using namespace EmpNamespace;

int main()
{
    cout << "Hello World"<<endl;
    cout << endl;
    Employee mc;
    mc.do_something();
    Employee emp1 = Employee("James Dean", 25, 2783.89);
    cout<<"Emp name: "<<emp1.GetName()<< "Emp salary :"<<emp1.GetSalary()<<endl;
}