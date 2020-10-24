#ifndef EMPLOYEE_HPP // include guard
#define EMPLOYEE_HPP

using namespace std;

namespace EmpNamespace
{
    class Employee
    {
        private:
        string _name;
        int _age;
        double _salary;
    public:
        Employee();
        Employee(string name, int age, double salary);
        void SetName(string name);
        string GetName();
        void SetAge(int age);
        int GetAge();
        void SetSalary(double salary);
        double GetSalary();
        void do_something();
    };
}

#endif /* EMPLOYEE_HPP */