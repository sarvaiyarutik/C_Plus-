
// #include<iostream>
// using namespace std;

// class Student{

// public:

//    string name;
//    string country;
//    string grade;   


//    void StudentDetail(string n,string c, string g){

//      name = n;
//      country = c;
//      grade = g;
//    }

//    void StudentCheck(){
//     cout<<"\nMy name is "<<name;
//     cout << "\nmy country is "<<country;
//     cout << "\nMy grade is "<<grade;
//    }

// };

// int main(){


//     Student s1;
//     s1.StudentDetail("ruchit","thailand","A++");
//     s1.StudentCheck();

    
//     Student s2;
//     s2.StudentDetail("bago","Brazil","B++");
//     s2.StudentCheck();
    


//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Student{


//   public :


//     string school;
//     string std;
//     string name;

//     void StudentDetail(string s,string d,string n){

//       school = s;
//       std = s;
//       name = n;

//     }

//     void StudentCheck(){

//       cout << "\nMy School is "<<school;
//       cout << "\nI am study "<<std;
//       cout << "\nMy name is "<<name;
      
//     }
// };


// int main(){

//     Student s1;

//     s1.StudentDetail("Model school","12th","Rutik");
//     s1.StudentCheck();


//   return 0;
// }



#include<iostream>
using namespace std;

class Student {

  public : 

  string name;

  string company;

  string location;


  void ManagerDetail(string n, string c, string l){

    name = n;

    company = c;

    location = l;
  }

  void Managercheck(){

    cout << "\nMy name is a " << name;

    cout << "\nMy company is the " << company;

    cout << "\nMy location is a " << location;
  }

};

int main(){


  Student s1;

  s1.ManagerDetail("bago","Pented","Bharatnagar");
  s1.Managercheck();


  return 0;
}