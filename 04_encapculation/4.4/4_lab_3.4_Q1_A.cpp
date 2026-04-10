

#include <iostream>
using namespace std;

class Student
{

private:
    string stu_name;
    int stu_roll;
    float stu_GPA;

public:
    Student()
    {
        stu_name = "not set";
        stu_roll = 0;
        stu_GPA = 0.0;

        cout << "\nDefault constructor\n" << endl;
    }

    Student(string n, int r, float g)
    {

        stu_name = n;
        stu_roll = r;
        stu_GPA = g;

        cout << "\nParameterized constructor\n" << endl;
    }

    Student(const Student &s)
    {

        stu_name = s.stu_name;
        stu_roll = s.stu_roll;
        stu_GPA = s.stu_GPA;

        cout << "\ncopy constructor\n" << endl;
    }

    string GetName() const
    {
        return stu_name;
    };

    int GetRoll() const
    {
        return stu_roll;
    };

    float GetGPA() const
    {
        return stu_GPA;
    }

    void Display()
    {

        cout << "\nName    :" << stu_name;
        cout << "\nRoll No :" << stu_roll;
        cout << "\nGPA     :" << stu_GPA;
    }

    ~Student(){

        cout<<"\ncalled object destroyed\n"<<endl;

    }
};

int main(){

    Student s1("alice",1,10.10);
    s1.Display();

     Student s2("Jon",2,34.12);
    s2.Display();

    return 0;
}