#include <iostream>
using namespace std;

class Bank
{

    public:

    virtual void show(){

        cout<<"one number"<<endl;
    }
    
};

class UPI:public Bank{


    public :

    void show(){

        cout<<"too number"<<endl;
    }
};

class Card:public Bank{

    public :

    void show(){

        cout<<"three number"<<endl;
    }
};

int main()
{

    Bank *obj;

    Bank b;
    UPI u;
    Card c;


    obj = &b;
    obj->show();

    obj = &u;
    obj->show();

    obj = &u;
    obj->show();




    

    return 0;
}