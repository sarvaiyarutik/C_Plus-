

#include <iostream>
using namespace std;

int main()
{

    int str;

    cout << "Enter array size:";
    cin >> str;

    int array[str];

    for (int i = 0; i < str; i++)
    {
        cout << "Enter array element ["<< i << "]: ";
        cin >> array[i];
    }

    for (int i = 0; i < str; i++)
    {
        if (array[i] % 2 == 0)
        {
            cout << array[i] << " ";
        }
    }

    return 0;
}