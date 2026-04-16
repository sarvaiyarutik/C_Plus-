
#include <iostream>
using namespace std;

class RBI
{

protected:
    float rate;

public:
    void GetROI()
    {
        cout << "Rate of Inheritance " << rate << " %" << endl;
    }

    RBI()
    {
  
        rate = 9.00;
    }
};

class SBI : public RBI
{

public:
    SBI()
    {
        rate = 10.00;
    }
};

class BOB : public RBI
{

public:
    BOB()
    {

        rate = 11.00;
    }
};

class ICICI : public RBI
{

public:
    ICICI()
    {
        rate = 12.00;
    }
};

int main()
{

    RBI r;
    SBI s;
    BOB b;
    ICICI i;

    r.GetROI();
    s.GetROI();
    b.GetROI();
    i.GetROI();

    return 0;
}