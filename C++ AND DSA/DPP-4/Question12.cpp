/* Take a positive integer n as input. Write a program to print a Repeated Number
Inverted Right Triangle. Each row should display the same number, corresponding to its
current descending row count.
Sample — Input: n = 4 ⇒ Output: */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int nst = n;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=nst; j++){
            cout<<nst;
        }
        nst--;
        cout<<endl;
    }
}