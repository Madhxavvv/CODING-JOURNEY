// CW-1 & HW-1 LECTURE-5
// TAKE AN INTEGER AS INPUT AND TELL IF IT IS A 4 DIGIT NUMBER OR NOT

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        if(1000<=num && num<=9999){
            cout<<"The number is a 4 digit number";
        }
        else{
            cout<<"No the number is not a 4 digit number";
        }
    }
    else if(num<0){
        if(-1000>=num && num>=-9999){
            cout<<"The number is a 4 digit negative number";
        }
        else{
            cout<<"The number is not a 4 digit number";
        }
    }
    return 0;

}