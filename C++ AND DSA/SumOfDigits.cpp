// CW-2 LEC-9
// Write a program to get sum of digits of a number

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum = 0;
    if(num<0){
        num = num*(-1);
    }
    while(num!=0){
        int digit = num%10;
        sum += digit;
        num = num/10;
        
    }
    cout<<sum;
    return 0;

}