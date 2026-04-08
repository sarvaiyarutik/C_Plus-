

#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "Enter your number:" << endl;
    cin >> number;
    cin.ignore();

    
    string name;

    cout << "Enter your name:" << endl;
    getline(cin, name);

    cout << "My name is  " << name;
    cout << "My number is \n"
         << number;

    return 0;
}