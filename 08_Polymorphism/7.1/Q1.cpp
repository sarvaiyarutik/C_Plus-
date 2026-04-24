#include <iostream>
using namespace std;

class Calculator
{

public:
    virtual void Program()
    {

        cout << "base class of operator" << endl;

        return;

    }
};

class Calculate : public Calculator
{

public:
    void calculate(int a, int b)
    {

        int result = a / b;

        cout << "Division Result: " << result << endl;
    }

    void calculate(int a, int b, int c)
    {

        int result = a - b - c;

        cout << "Subtraction Result: " << result << endl;
    }

    void calculate(int a, int b, int c, int d)
    {

        int result = a * b * c * d;

        cout << "Multification Result: " << result << endl;
    }

    void calculate(int a, int b, int c, int d, int e)
    {

        int result = a + b + c + d + e;

        cout << "Addition Result: " << result << endl;
    }
};

int main()
{

    Calculate obj;

    obj.Program();

    obj.calculate(50, 20);
    obj.calculate(50,12,13);

    obj.calculate(10,10,10,10);

    obj.calculate(10,10,10,10,10);

    return 0;
}