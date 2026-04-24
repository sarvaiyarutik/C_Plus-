<<<<<<< HEAD
    #include <iostream>
    using namespace std;

    class Mother
    {

    public:
        void Cooking()
        {

            cout << "My mother cooking " << endl;
        }
    };

    class Father
    {

        public:
        void Driving()
        {
            cout << "My father driving a car" << endl;
        }
    };

    class Child : public Mother, public Father{

    };


    int  main()
    {
        Child c;

        c.Cooking();
        c.Driving();


        return 0;
    }
=======
#include <iostream>
using namespace std;

class Mother
{

public:
    void Cooking()
    {

        cout << "My mother cooking " << endl;
    }
};

class Father
{

    public:
    void Driving()
    {
        cout << "My father driving a car" << endl;
    }
};

class Child : public Mother, public Father{

};


int  main()
{
    Child c;

    c.Cooking();
    c.Driving();


    return 0;
}
>>>>>>> e0017ae5b4627263fdb670d048f0d87fe3c6aade
