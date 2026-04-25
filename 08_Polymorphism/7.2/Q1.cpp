#include <iostream>
using namespace std;

class Number
{

public:
    int num;

    Number(int n)
    {

        num = n;
    };

    bool operator>(Number j)
    {

        if (num > j.num)
        {
            return true;
        }

        else
        {
            return false;
        }
    };
};

int main()
{

    Number n1(300);
    Number n2(200);

    if (n1 > n2)
    {
        cout << "N1 is greater than N2" << endl;
    }

    else
    {

        cout << "N2 is greater than N2" << endl;
    }

    return 0;
}