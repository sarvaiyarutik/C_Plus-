

#include<iostream>
using namespace std;

void changevalue(int &num){

    num = 50;

    
}



int main(){

    int num = 10;

    cout<<"\nnum value "<< num;

    changevalue(num);

    cout<<"\nnum value "<< num;


    return 0;
}