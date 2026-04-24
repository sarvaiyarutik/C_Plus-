

#include <iostream>
using namespace std;

int main()
{

    int start, end;

    cout << "Enter your first year:";
    cin >> start;

    cout << "Enter your last  year:";
    cin >> end;

    int array[100], count = 0;

    for (int i = start; i < end; i++)
    {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
        {
            array[count] = i;

            count++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << array[i];

        if (i != count - 1)
        {
            cout<<", ";
        }
    }

    return 0;
}