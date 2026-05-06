
#include <iostream>
using namespace std;

int main()
{

    string password;
    bool uppercase = false;

    cout << "Enter your password" << endl;
    cin >> password;

    try
    {
        for (int i = 0; i < password.length(); i++)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
            {
                uppercase = true;
                break;
            }
        }

        if (!uppercase)
        {
            throw "Password must contain at least one uppercase letter!";
        }

        cout<<"Password is valid"<<endl;
    }
    catch (const char* s)
    {
       cout<<s<<endl;
    }

    return 0;
}