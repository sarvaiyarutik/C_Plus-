
#include <iostream>
using namespace std;

class X
{

protected:
    int a, b, c;
};

class Y : public X
{

public:
    void SetData()
    {
        cout << "Enter Three Number :" << endl;
        cin >> a >> b >> c;
    }

    void GetData()
    {

        int sum = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "Sum of Cubes :" << sum;
    }
};
int main()
{

    Y o;

    o.SetData();
    o.GetData();

    return 0;
}