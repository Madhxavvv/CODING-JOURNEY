/* Write a program to take a number as input and compute the product of all its individual
digits.
Sample 1 — Input: 413 ⇒ Output: 12
Sample 2 — Input: 520 ⇒ Output: 0 */

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    int product = 1;
    cin>>num;
    while(num!=0){
        int digit = num%10;
        product *= digit;
        num = num/10;
    }
    cout<<product;
    return 0;
    
}