/* Write a program to check if a given number is a Palindrome. A palindrome number
reads the same forwards and backwards.
Sample 1 — Input: 121 ⇒ Output: Palindrome
Sample 2 — Input: 145 ⇒ Output: Not a Palindrome */

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rev = 0;
    int digit;
    while(num!=0){
        digit = num%10;
        rev = rev*10+digit;
        num = num/10;
    }
    if(rev==num){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    return 0;
}