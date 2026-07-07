// STAR QUESTION
// CW - 4 (LEC-4)
// TAKE A REAL NUMBER AS AN INPUT AND TELL IF IT IS AN INTEGER OR NOT

#include <iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num==((int)num)){
        cout<<"INTEGER";
    }
    else{
        cout<<"NOT INTEGER";
    }
    return 0;
}