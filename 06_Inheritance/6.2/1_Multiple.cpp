#include <iostream>
using namespace std;

class Mother
{

public:
    void Cooking()
    {

        cout << "Cooking from Mother" << endl;
    }
};

class Father
{

    public:
    void Driving()
    {

        cout << "Father Driving Car" << endl;
    }
};

class child : public Mother, public Father
{
};

int main()
{
    child obj;

    obj.Cooking();
    obj.Driving();

    return 0;
}