// CW-6 (LEC 5)
// TAKE A POSITIVE INTEGER AS INPUT AND PRINT 
// KARTIKEY IF INTEGER IS DIVISIBLE BY 5 ONLY
// SAKSHI IF INTEGER IS DIVISIBLE BY 3 ONLY
// ANUJ IF INTEGER IS DIVISIBLE BY 5 & 3 BOTH
// HITESH IF INTEGER IS DIVISIBLE BY 5 OR 3

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a positive integer: ";
    cin>>num;
    if(num%5!=0&&num%3!=0){
        cout<<"HITESH";
    }
    else if(num%5==0 && num%3==0){
        cout<<"ANUJ";
    }
    else if(num%3==0){
        cout<<"SAKSHI";
    }
    else if(num%5==0){
        cout<<"KARTIKEY";
    }
    return 0;
    
}