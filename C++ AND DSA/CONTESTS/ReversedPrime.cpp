/* Given two positive integers  and , write a program to perform the following operations:

Reverse the digits of integer .
Reverse the digits of integer .
Find the absolute difference between the two reversed numbers (i.e., subtract the smaller reversed number from the larger reversed number).
Determine whether this final difference is a prime number.
Input Format

A single line containing two space-separated integers,  and .
Constraints

Output Format

Print Prime if the absolute difference of their reversed values is a prime number.
Print Not Prime if it is not. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long A,B;
    cin>>A>>B;
    long long digit,rev;
    long long diff;
    rev = 0;
    
   long long rev2, digit2;
    rev2 = 0;
    bool flag = true;
    while(A){
        digit = A%10;
        rev = rev*10 + digit;
        A = A/10;
    }
    while(B){
        digit2 = B%10;
        rev2 = rev2 * 10 + digit2;
        B = B/10; 
    }
    if(rev2>=rev){
        diff = rev2 - rev;
    }
    else{
        diff = rev - rev2;
    }
    if(diff<2){
        cout<<"Not Prime";
        return 0;
    }
    if(diff==2){
        cout<<"Prime";
        return 0;
    }
    for(long long i=2; i*i<=diff; i++){
        if(diff%i==0){
            flag = false;
            break;
        }
    }
    
    
    if(flag){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}
