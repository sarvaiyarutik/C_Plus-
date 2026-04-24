
#include <iostream>
using namespace std;

class Employee
{

private:
    string name1;

public:
    void SetName1()
    {

        cout << "Enter Your name 20: ";
        cin >> name1;
    }

    void ShowName1()
    {
        cout << "\nEmployee Name: "
             << name1;
    }
};

class Manager : public Employee
{

protected:
    string name2;

public:
    void SetName2()
    {

        cout << "Enter Your Name : ";
        cin >> name2;
    }

    void ShowName2()
    {
        cout << "\nManager Name : "
             << name2;
    }
};

class people : public Manager
{

protected:
    string name3;

public:
    void SetName3()
    {

        cout << "Enter Your Name : ";
        cin >> name3;
    }

    void ShowName3()
    {

        cout << "\nPeople Name  : " << name3;
    }
};

int main()
{

    people obj;
    obj.SetName1();

    obj.SetName2();

    obj.SetName3();


    cout<<"\n====== output ======\n"<<endl;

    obj.ShowName1();
    obj.ShowName2();
    obj.ShowName3();

    return 0;
}