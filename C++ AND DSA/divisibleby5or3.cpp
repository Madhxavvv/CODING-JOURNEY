//CW-2 LEC 5 
// Write a program to check whether a number is divisible by 5 or 3

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%5==0||num%3==0){
        cout<<"Yes the number is divisible by either 5 or 3";
    }
    else{
        cout<<"No the number is neither divisble by 5 nor by 3";
    }
    return 0;
}