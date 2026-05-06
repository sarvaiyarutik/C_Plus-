#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enetr your age : " << endl;
    cin >> age;

    try
    {

        if (age < 18)
        {

            cout << "not eligible to vote !";
        }
        cout << "you can vote" << endl;
    }
    catch (int a)
    {

        cout << "not eligible to vote ! Age is :" << a << endl;
    }

    return 0;
}