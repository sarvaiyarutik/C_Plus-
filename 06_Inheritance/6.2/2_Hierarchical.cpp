
#include <iostream>
using namespace std;

class Parent
{

public:
    string task = " esy to end";

    void show()
    {
        cout << "parent class" << task << endl;
    }
};

class child1 : public Parent
{

public:
    string task = " esy to end";

    void show()
    {
        cout << "Child1 class" << task << endl;
    }
};

class child2 : public Parent
{
};

int main()
{

    child1 c1;
    child2 c2;

    c1.show();
    c2.show();

    return 0;
}