#include <iostream>
using namespace std;

class RBI
{

protected:
    float rate;

public:
    void GetROI()
    {
        cout << "Rate of interest " << rate << "%" << endl;
    }
};

class SBI : public RBI
{

public:
    SBI(){
        rate = 6.5;
    }
};

class BOB:public RBI{

    public :

    BOB(){
            rate = 7.0;
    }
};

class ICICI :public RBI{

    public:
    ICICI(){
        rate = 7.5;
    }

};


int main()
{
    SBI s;
    BOB b;
    ICICI i;

    cout<<"SBI   -> ";
    s.GetROI();

    cout<<"BOB   -> ";
    b.GetROI();

    cout<<"ICICI -> ";
    i.GetROI();

    return 0;
}