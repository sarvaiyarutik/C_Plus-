#include <iostream>
using namespace std;

class Student
{

private:
    int stu_id;
    string stu_name;
    int stu_age;
    string stu_course;
    string stu_city;
    string stu_email;
    string stu_college;

    static int StudentDataTotal;

public:
    void SetStudent()
    {

        cout << "Enter student id:" << endl;
        cin >> stu_id;
        cin.ignore();

        cout << "Enter Student name:" << endl;
        getline(cin, stu_name);

        cout << "Enter student age:" << endl;
        cin >> stu_age;
        cin.ignore();

        cout << "Enter Student course:" << endl;
        getline(cin, stu_course);

        cout << "Enter Student city:" << endl;
        getline(cin, stu_city);

        cout << "Enter Student email:" << endl;
        getline(cin, stu_email);

        cout << "Enter Student college:" << endl;
        getline(cin, stu_college);
    }

    void GetStudent()
    {

        cout << "Student id      :" << stu_id << endl;

        cout << "Student name    :" << stu_name << endl;

        cout << "Student age     :" << stu_age << endl;

        cout << "Student course  :" << stu_course << endl;

        cout << "Student city    :" << stu_city << endl;

        cout << "Student email   : " << stu_email << endl;

        cout << "Student college : " << stu_college << endl;

        StudentDataTotal++;
    }

    static void AllStudent()
    {
        cout << "Total Student :" << StudentDataTotal << endl;
    }
};

int Student::StudentDataTotal;

int main()
{

    int s;

    cout << "Enter student :" << endl;
    cin >> s;

    Student d[s];

    for (int i = 0; i < s; i++)
    {
        d[i].SetStudent();
    }

    for (int i = 0; i < s; i++)
    {
        d[i].GetStudent();
    }

    Student::AllStudent();

    return 0;
}