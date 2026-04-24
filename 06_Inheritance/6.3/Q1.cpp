#include <iostream>
using namespace std;

class Employee
{

protected:
    int emp_id;
    string emp_name;
    int emp_age;
    int emp_salary;

public:
    Employee(int id, string name, int age, int salary)
    {

        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_salary = salary;
    }

    virtual void display()
    {

        cout << "Employee ID" << emp_id << endl;
        cout << "Employee Name" << emp_name << endl;
        cout << "Employee Age" << emp_age << endl;
        cout << "Employee Salary" << emp_salary << endl;
    }

    virtual ~Employee()
    {
    }
};

class FullTimeEmployee : public Employee
{

private:
    float bonus;

public:
    FullTimeEmployee(int id, string name, int age, int salary, float bonus) : Employee(id, name, age, salary)
    {

        this->bonus = bonus;
    }

    void display() override {

        Employee::display();  

        cout<<"Employee Bonus :"<<bonus<<endl;
    }
};

int
main()
{

    return 0;
}