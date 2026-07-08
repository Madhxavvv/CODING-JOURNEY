// CW-1 LEC 9
// Write a Program to Count Digits of A Number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int count = 0;
    if(num==0){
        count++;
    }
    while(num!=0){
        int digit = num%10;
        count++;
        num = num/10;
    }
    cout<<count;
    return 0;

}