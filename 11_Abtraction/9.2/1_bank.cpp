
#include<iostream>
using  namespace std;

class Bank{

    public :


    virtual void payment() = 0;


};

class UPI:public Bank{

    public :

    void payment(){

        cout<<"peyment by upi"<<endl;
    }
};

class Card:public Bank{

    public : 

    void payment(){

        cout<<"Payment by Card"<<endl;
    }
};


int main()
{

    Bank *obj;

    UPI u;
    Card c;

    obj = &u;
    obj->payment();

    obj = &c;
    obj->payment();


    return 0;
}