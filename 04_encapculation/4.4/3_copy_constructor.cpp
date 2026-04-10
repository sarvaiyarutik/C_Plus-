

#include <iostream>

using namespace std;

class Student
{

private:
    int Student_roll;
    string Student_name;

public:
    Student(int Student_roll, string Student_name)
    {

        this->Student_roll = Student_roll;
        this->Student_name = Student_name;
    }

    Student(const Student &s)
    {

        Student_roll = s.Student_roll;
        Student_name = s.Student_name;
    }

    void GetStudent()
    {

        cout << "Student Roll no  : " << Student_roll << endl;
        cout << "Student Name     : " << Student_name << endl;
    }
};

int main()
{

    Student s1(1, "alice");
    Student s2 = s1;
    s1.GetStudent();
    s2.GetStudent();

    return 0;
}
