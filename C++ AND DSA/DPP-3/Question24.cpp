/* Write a program that takes two positive integers as input and prints all the prime
numbers that lie strictly between them.
6



Sample 1 — Input: 10 20 ⇒ Output: 11 13 17 19
Sample 2 — Input: 20 30 ⇒ Output: 23 29 */

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    bool prime = false;
    for(int i=a+1; i<b; i++){
        prime = true;

        for(int j = 2; j<=i-1; j++){
            if(i%j==0){
                prime = false;
                break;
            }


        }
        if(prime==true){
                cout<<i<<endl;
        }

    }
}
