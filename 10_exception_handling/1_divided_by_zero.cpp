
#include<iostream>
using namespace std;

int main(){

    int A = 10;

    int B = 20;


    try
    {
        if (B == 0)
        {
            throw "Cannot divided by zero";
        }
        cout<<"Result :"<< A / B <<endl;
    }
    catch(const char* smg)
    {
            cout<<smg<<endl;
    }
    

    return 0;
}