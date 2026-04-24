

#include <iostream>
using namespace std;

class A
{

public:
    void show()
    {

        cout << "This is A class" << endl;
    }
};

class B
{

public:
    void show()
    {
        cout << "This ia B class" << endl;
    }
};

class C:public A,public B{

};

int main()
{
    C obj;

    obj.A::show();
    obj.B::show();

    return 0;
}