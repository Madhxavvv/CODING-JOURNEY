/* Write a program to compute a
b
(a raised to the power b) where a is a decimal value and
b is an integer (which can be positive, negative, or zero) entered by the user. Do not use the
pow() function from <cmath>.
Sample 1 — Input: 2.0 3 ⇒ Output: 8
Sample 2 — Input: 2.5 -2 ⇒ Output: 0.16
Sample 3 — Input: 5.4 0 ⇒ Output: 1
Sample 4 — Input: 4.0 -1 ⇒ Output: 0.25*/

#include <iostream>
using namespace std;
int main(){
    float a; int b;
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
    float product = 1.0;
    if(b>0){
        for(int i = 1; i<=b; i++){
            product*=a;
        }
        cout<<product;
    }
    else if(b==0){
        cout<<1;
    }
    else if(b<0){
        b = -b;
        for(int i =1; i<=b; i++){
            product*=a;
        }
        cout<<(1.0/product);
    }
}