#include <iostream>
using namespace std;

class Number
{

public:
    int num;

    Number(int n)
    {

        num = n;
    }
};

int main()
{

    Number n1(100);

    Number n2(200);

    // this will not work and will give error because in class you can't do operation using operators for that we have to use operator overloading
    cout << "Total Sum" << n1 + n2 << endl;

    return 0;
}