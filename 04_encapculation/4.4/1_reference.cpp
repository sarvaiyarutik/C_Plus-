

#include<iostream>
using namespace std;

int main(){


    int a = 10;

    int &b = a;

    cout<<"\n A value "<<a;
    cout<<"\n B value "<<b;

    b = 20;

    cout<<"\n A value "<<a;

    cout<<"\n B value "<<b;

    return 0;
}