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

    void display() override
    {

        Employee::display();

        cout << "Employee Bonus :" << bonus << endl;
    }
};

class PartTimeEmployee : public Employee
{

protected:
    int emp_hours;

public:
    PartTimeEmployee(int id, string name, int age, int salary, int hours) : Employee(id, name, age, salary)
    {

        emp_hours = hours;
    }

    void display() override
    {

        Employee::display();

        cout << "part time employee work hours" << emp_hours << endl;
    };
};

int main()
{

    Employee *employee[100];

    int choice;

    int count = 0;

    do
    {
        cout << "\n Employee Management system" << endl;

        cout << "\n1.Add Employee" << endl;
        cout << "\n2.Display All Employee" << endl;
        cout << "\n3.Delete Employee" << endl;
        cout << "\n4.Exit" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;

        if (choice == 1)
        {
            int menu;

            cout << "FullTime Employee" << endl;
            cout << "PartTime Employee" << endl;

            cin >> menu;

            int id, age, salary;
            string name;

            cout << "\nEnter your Employee ID : " << endl;
            cin >> id;
            cin.ignore();

            cout << "\nEnter your Employee Name : " << endl;
            getline(cin, name);

            cout << "\nEnter your Employee Age : " << endl;
            cin >> age;
            cin.ignore();

            cout << "\nEnter your Employee Salary : " << endl;
            cin >> salary;
            cin.ignore();

            if (menu == 1)
            {

                int bonus;

                cout << "\n Enter your Employee Bonus" << endl;
                cin >> bonus;

                employee[count] = new FullTimeEmployee(id, name, age, salary, bonus);

                count++;
            }

            else if (menu == 2)
            {

                int hours;

                cout << "\n Enter Your PartTime Employee" << endl;
                cin >> hours;

                employee[count] = new PartTimeEmployee(id, name, age, salary, hours);

                count++;
            }
        }

        else if (choice == 2)
        {

            if (count == 0)
            {
                cout << "Employee date found" << endl;
            }

            else
            {

                for (int i = 0; i < count; i++)
                {
                    employee[i]->display();
                }
            }
        }

        else if (choice == 3)
        {

            int index;

            cout << "index to delete (0-" << count - 1 << "): " << endl;
            cin >> index;

            if (index >= 0 && index < count)
            {
                delete employee[index];

                for (int i = index; i < count - 1; i++)
                {
                    employee[i] = employee[i + 1];
                }
                count--;
                cout << "employee data delele" << endl;
            }

            else
            {
                cout << "invailid index to delete " << endl;
            };
        };

    } while (choice != 4);

    for (int i = 0; i < count; i++)
    {
        delete employee[i];

        cout << "memory free" << endl;
    }

    return 0;
}