//CW-3 LEC-9
// Write a Program to print Reverse of a number taken as input

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int digit;
    int rev = 0;
    while(num!=0){
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }
    cout<<rev;
    return 0;

        
}
