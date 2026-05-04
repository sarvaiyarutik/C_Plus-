
#include <iostream>
using namespace std;

class Bank
{

private:
    int balance;

public:
    Bank(int b)
    {
        balance = b;
    }

    void deposit(int amount)
    {

        balance += amount;
    }

    void withdraw(int amount)
    {

        if (amount > balance)
        {
           cout<<"Balance insufficient"<<endl;
        }
        else{
            balance -= amount;
            cout<<amount<<" has been account"<<endl;
        }
    }

    void cheackBalance(){

        if (balance <= 0 )
        {
            cout<<"Bank Balance"<<endl;
        }

        else{
            cout<<"Your bank balance is "<< balance<<endl;
        }

        
    }
};

int main()
{

    Bank obj(5000);

    obj.cheackBalance();
    obj.deposit(10000);
    obj.withdraw(12);


    return 0;
}