/* Write a program that accepts an integer input and finds the strictly next prime number
that appears after it. If the user provides an input greater than 500, immediately print "Invalid
Input" and terminate.
Sample 1 — Input: 14 ⇒ Output: 17
Sample 2 — Input: 499 ⇒ Output: 503
Sample 3 — Input: 505 ⇒ Output: Invalid Input */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>500){
        cout<<"Invalid Input";
        return 0;
    }
    bool prime = false;
    for(int i = n+1; i<= 600; i++){
        prime = true;
        for(int j = 2; j<=i-1; j++){
            if(i%j == 0){
                prime = false;
                break;
            }
        }
        if(prime==true){
            cout<<i<<endl;
            break;
        }


    }
}
