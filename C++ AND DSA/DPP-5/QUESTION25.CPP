/* Write a function reverseNumber(int n) that takes an integer, reverses its digits math-
ematically, and uses the return keyword to give back the reversed integer to main(). */

#include <iostream>
#include <cmath>
using namespace std;
int reverseNumber(int n){
    int rev = 0;
    int digit;
    while(n!=0){
        digit = n%10;
        rev = rev*10 + digit;
        n /= 10;
    }
    return rev;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of the number is: "<<reverseNumber(n);
}