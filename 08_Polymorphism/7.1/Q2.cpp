#include <iostream>
using namespace std;

class Cricket
{

public:
    virtual void GetTotalOver()
    {

        cout << "Cricket Match Over" << endl;
    }
};

class T20Match : public Cricket
{

    public :

    void GetTotalOver()override{

        cout<<"Total over in T20 match = 20"<<endl;
    }
};

class TestMatch:public Cricket{

    public:

    void GetTotalOver(){

        cout<<"Total over in test match = 90"<<endl;
    }
};

int main()
{

    T20Match t1;
    TestMatch t2;

    t1.GetTotalOver();
    t2.GetTotalOver();

    return 0;
}