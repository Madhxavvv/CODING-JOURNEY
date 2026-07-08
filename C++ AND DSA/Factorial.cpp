//CW-4 LEC-9
// Write a program to print the factorial of a number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    long long fact = 1;
    if(num<0){
        cout<<"Enter a Whole Number Only";
    }
    for(int i = 1; i<=num; i++){
        fact*=i;
    }
    if(num>=0){
        cout<<fact;
    }
    return 0;
}