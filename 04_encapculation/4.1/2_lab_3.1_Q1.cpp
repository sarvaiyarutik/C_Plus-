#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id, stu_age;
    string stu_name, stu_course, stu_city, stu_email, stu_college;

public:
    void SetStudent()
    {
        cout << "Enter student id :" << endl;
        cin >> stu_id;

        cout << "Enter student Name :" << endl;
        cin >> ws;
        getline(cin, stu_name);

        cout << "Enter student Age :" << endl;
        cin >> stu_age;

        cout << "Enter student Course :" << endl;
        cin >> ws;
        getline(cin, stu_course);

        cout << "Enter student City :" << endl;
        cin >> ws;
        getline(cin, stu_city);

        cout << "Enter student Email :" << endl;
        cin >> ws;
        getline(cin, stu_email);

        cout << "Enter student College :" << endl;
        cin >> ws;
        getline(cin, stu_college);
    }

    void GetStudent()
    {
        cout << "\nStudent ID       : " << stu_id;
        cout << "\nStudent Name     : " << stu_name;
        cout << "\nStudent Age      : " << stu_age;
        cout << "\nStudent Course   : " << stu_course;
        cout << "\nStudent City     : " << stu_city;
        cout << "\nStudent Email    : " << stu_email;
        cout << "\nStudent College  : " << stu_college << endl;
    }
};

int main()
{
    Student s[2];

    for (int i = 0; i < 2; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].SetStudent();
    }

    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent " << i + 1 << " Details:" << endl;
        s[i].GetStudent();
    }

    return 0;
}