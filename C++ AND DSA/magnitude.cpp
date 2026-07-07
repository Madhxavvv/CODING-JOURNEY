// HW-2 LECTURE-5
// TAKE INTEGER INPUT AND TELL IF ITS MAGNITUDE IS SMALLER THAN 69 OR NOT

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num>0){
        if(num>=69){
            cout<<"THE MAGNITUDE IS NOT SMALLER THAN 69";
        }
        else if(num<69){
            cout<<"THE MAGNITUDE IS SMALLER THAN 69";
        }
    }
    else if(num<0){
        int NUM = -num;
        if(NUM<69){
            cout<<"The magnitude is smaller than 69";
        }
        else if(NUM>=69){
            cout<<"The magnitude is bigger than 69";
        }
    }
    return 0;

}