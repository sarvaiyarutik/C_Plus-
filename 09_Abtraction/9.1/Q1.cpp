#include <iostream>

using namespace std;

class Admin
{

private:
    string comp_name;

protected:
    double manager_salary;
    double emp_salary;
    int total_staff;
    double total_annual_revenue;
    bool can_terminate;

public:
    Admin()
    {

        comp_name = "dada ni vadi";
        manager_salary = 40000;
        emp_salary = 35000;
        total_staff = 100;
        total_annual_revenue = 201000;
        can_terminate = false;
    }

    void company()
    {
        cout << "Company Name :" << comp_name << endl;
    }

    virtual void Access()
    {

        company();
        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Annual Revenue: " << total_annual_revenue << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
    }
};

class Manager : public Admin
{
public:
    void Access() override
    {

        cout << "Manager Salary: " << manager_salary << endl;
        cout << "Total Staff: " << total_staff << endl;
        cout << "Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;

        company();
    }
};

class Employee : public Manager
{
public:
    void Access() override
    {
        cout << "\n=== Employee Access ===\n";

        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Total Staff : " << total_staff << endl;

        company();
    }
};

int main()
{
    Admin a;
    Manager m;
    Employee e;

    a.Access();
    m.Access();
    e.Access();

    return 0;
}