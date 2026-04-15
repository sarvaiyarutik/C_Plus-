
#include <iostream>

using namespace std;

class A 
{

public:
    void showA()
    {

        cout << "This is a parent class A" << endl;
    }
};

class B : public A
{
    public:
    void ShowB(){
        cout<<"This is a parent class B"<<endl;
    };
};

class C 
{
    public :

    void ShowC(){

        cout<<"This is a parent class C"<<endl;
    }
};

class D : public B, public C
{

    public:

    void ShowD(){

        cout<<"This is a parent class D"<<endl;
    }
};

int main()
{
    D obj;

    obj.showA();
    obj.ShowB();
    obj.ShowC();
    obj.ShowD();


    return 0;
}