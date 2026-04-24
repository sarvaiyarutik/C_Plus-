

#include <iostream>
using namespace std;
#include <vector>

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

    }

    Student(string n, int r, float g)
    {

        stu_name = n;
        stu_roll = r;
        stu_GPA = g;

    }

    Student(const Student &s)
    {

        stu_name = s.stu_name;
        stu_roll = s.stu_roll;
        stu_GPA = s.stu_GPA;

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

    ~Student()
    {

        cout << "\ncalled object destroyed\n"
             << endl;
    }
};

class StudentManager
{

private:
    vector<Student> Students;

public:
    void addStudent(const Student &obj)
    {

        Students.push_back(obj);
        cout << "Student add" << endl;
    }

    void DisplayStudent()
    {

        if (Students.empty())
        {
            cout << "No Student" << endl;
        }

        else
        {
            for (int i = 0; i < Students.size(); i++)
            {
                Students[i].Display();
            }
        }
    }

    void SearchRoll(int stu_roll)
    {

        for (int i = 0; i < Students.size(); i++)
        {
            if (Students[i].GetRoll() == stu_roll)
            {
                cout << "Student found" << endl;
                Students[i].Display();

                return;
            }
        }

        cout << "Student not found roll no" << endl;
    }
};

int main()
{

    Student s1("alice", 1, 10.10);
    Student s2("Jon", 2, 34.12);

    StudentManager Admin;

    Admin.addStudent(s1);
    Admin.addStudent(s2);

    cout << "Student all data" << endl;

    Admin.DisplayStudent();

    cout << "finding  roll no " << endl;

    Admin.SearchRoll(2);

    return 0;
}

// #include <iostream>
// using namespace std;
// #include <vector>

// class Student
// {            

// private:
//     string name;
//     int roll;
//     float GPA;

// public:
//     Student()
//     {

//         name = "not set";
//         roll = 0;
//         GPA = 0.0;
//     }

//     Student(string stu_name, int stu_roll, float stu_GPA)
//     {

//         name = stu_name;
//         roll = stu_roll;
//         GPA = stu_GPA;
//     }

//     Student(const Student &s)
//     {

//         name = s.name;
//         roll = s.roll;
//         GPA = s.GPA;
//     }

//     string GetName() const
//     {
//         return name;
//     }

//     int GetRoll() const
//     {
//         return roll;
//     }

//     float GetGPA() const
//     {
//         return GPA;
//     }

//     void StudentDisplayData()
//     {

//         cout << "Student Name    : " << name << endl;

//         cout << "Student ROll No : " << roll << endl;

//         cout << "Student GPA     : " << GPA << endl;
//     }

//     ~Student()
//     {

//         cout << "\nStudent object destroyed\n"
//              << endl;
//     }
// };

// class RecordManagerSystem
// {

// private:
//     vector<Student> Students;

// public:
//     void AddNewStudent(const Student &obj)
//     {

//         Students.push_back(obj);
//         cout << "Add new student" << endl;
//     }

//     void DisplayStudent()
//     {

//         if (Students.empty())
//         {
//             cout << "no Student data found" << endl;
//         }

//         else
//         {
//             for (int i = 0; i < Students.size(); i++)
//             {
//                 Students[i].StudentDisplayData();
//             }
//         }
//     }

//     void findStudentData(int roll)
//     {

//         for (int i = 0; i < Students.size(); i++)
//         {
//             if (Students[i].GetRoll() == roll)
//             {
//                 cout << "Student found" << endl;
//                 Students[i].StudentDisplayData();

//                 return;
//             }
//         }
//         cout << "Student not found with roll number" << endl;
//     }
// };

// int main()
// {

//     Student s1("alice", 1, 20.2);

//     Student s2("jonsan", 2, 30.2);

//     RecordManagerSystem admin;

//     admin.AddNewStudent(s1);
//     admin.AddNewStudent(s2);

//     cout << "All Student data" << endl;

//     admin.DisplayStudent();

//     cout << "Find by roll number" << endl;

//     admin.findStudentData(10);

//         return 0;
// }

// #include <iostream>
// using namespace std;

// #include <vector>

// class Student
// {

// private:
//     string stu_name;
//     int stu_roll;
//     float stu_GPA;

// public:
//     Student()
//     {

//         stu_name = "not set";
//         stu_roll = 0;
//         stu_GPA = 0.0;
//     }

//     Student(string name, int roll, float GPA)
//     {

//         stu_name = name;
//         stu_roll = roll;
//         stu_GPA = GPA;
//     }

//     Student(const Student &s)
//     {

//         stu_name = s.stu_name;
//         stu_roll = s.stu_roll;
//         stu_GPA = s.stu_GPA;
//     }

//     string GetName() const
//     {

//         return stu_name;
//     }

//     int GetRoll() const
//     {

//         return stu_roll;
//     }

//     float GetGPA() const
//     {

//         return stu_GPA;
//     }

//     void StudentDataDisplay()
//     {

//         cout << "Student Name    : " << stu_name << endl;

//         cout << "Student Roll no : " << stu_roll << endl;

//         cout << "Student GPA    : " << stu_GPA << endl;
//     }

//     ~Student()
//     {

//         cout << "Student object destroyed" << endl;
//     }
// };

// class RecordManagerSystem
// {

// private:
//     vector<Student> students;

// public:
//     void addnewStudent(const Student &obj)
//     {

//         students.push_back(obj);
//         cout << "ADD new Student" << endl;
//     }

//     void DisplayStudent()
//     {

//         if (students.empty())
//         {
//             cout << "no Student found" << endl;
//         }
//         else
//         {
//             for (int i = 0; i < students.size(); i++)
//             {
//                 students[i].StudentDataDisplay();
//             }
//         }
//     }

//     void FindStudentRoll(int stu_roll) 
//     {

//         for (int i = 0; i< students.size(); i++)
//         {
//             if (students[i].GetRoll() == stu_roll)
//             {
//                 cout << "Student data found" << endl;

//                 students[i].StudentDataDisplay();

//                 return;
//             }
//         }   
//     }
// };

// int main()

// {

//     Student obj1("alice", 1, 12.2);
//     Student obj2("john", 2, 22.2);

//     RecordManagerSystem print;

//     print.addnewStudent(obj1);
//     print.addnewStudent(obj2);

//     cout << "All Student Data" << endl;

//     print.DisplayStudent();

//     cout << "Find the roll no" << endl;

//     print.FindStudentRoll(1);

//     return 0;
// }
