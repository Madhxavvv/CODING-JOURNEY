// HW-1 (LEC 4)
// TAKE A POSITIVE INTEGER AS INPUT AND TELL IF IT IS DIVISBLE BY 5 OR NOT

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%5==0){
        cout<<"The number is divisible by 5"<<endl;
    }
    else{
        cout<<"The number is not divisible by 5"<<endl;
    }
}