
#include <iostream>
using namespace std;

class A
{

protected:
    int NumberA;

public:
    A(int a)
    {
        NumberA = a;
    }
};

class B : public A
{

protected:
    int NumberB;

public:
    B(int a, int b) : A(a)
    {

        NumberB = b;
    }
};

class C
{

protected:
    int NumberC;

public:
    C(int c)
    {

        NumberC = c;
    }
};

class D : public B, public C
{

    int NumberD;

public:
    D(int e, int a, int b, int c) : B(a, b), C(c)
    {
        NumberD = e;
    }

    void sum()
    {

        int total = NumberA + NumberB + NumberC + NumberD;
        cout<<"sum of a numbers = "<<total;

    }
};



int
main()
{

    D obj(10,10,10,10);
    obj.sum();

    return 0;
}