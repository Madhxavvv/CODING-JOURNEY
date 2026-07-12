/* Write a program to print an Alternating Row Offset Pattern for a given integer n
as shown below.
Sample — Input: n = 5 ⇒ Output: */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            for(int j=1; j<=n; j++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            for(int j=1; j<=(n-1); j++){
                cout<<" "<<i;
            }
            cout<<endl;
        }
}
}