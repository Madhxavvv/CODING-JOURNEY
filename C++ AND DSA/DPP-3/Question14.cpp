/* Write a program that takes two integers as input and prints all the even numbers located
strictly between them.
Sample 1 — Input: 3 10 ⇒ Output: 4 6 8
Sample 2 — Input: 12 21 ⇒ Output: 14 16 18 20 */

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    for(int i = a+1; i<b; i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;

}