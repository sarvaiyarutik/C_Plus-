
#include <iostream>
using namespace std;

class Child1
{

public:
    string task1 = "Gaming Task ";

    void call1()
    {

        cout << "Creat a " << task1 << endl;
    }
};

class child2 : public Child1
{

public:
    string task2 = "Surat";

    void call2()
    {

        cout << "I am going to " << task2 << endl;
    }
};

class Result : public Child1
{
};

int main()
{

    Child1 c1;
    child2 c2;

    c1.call1();
    c2.call2();

    return 0;
}