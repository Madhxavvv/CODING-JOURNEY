//HW - 1 LEC 9
// Print the sum of a number with its reverse

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int NUM = num;
    int digit;
    int rev = 0;
    while(num!=0){
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }
    cout<<rev+NUM;
    return 0;
        
}