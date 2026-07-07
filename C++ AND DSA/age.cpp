// CW -1 (LEC 4)
// TAKE AGE AS INPUT AND TELL IF THE USER CAN DRIVE OR NOT

#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=40){
        cout<<"YOU ARE AN ELDER PERSON AND CAN DRIVE "<<endl;
    }
    else if(age>=18){
        cout<<"YOU CAN DRIVE"<<endl;
    }
    else{
        cout<<"YOU CANNOT DRIVE"<<endl;
    }
    return 0;
}