// HW-3 LEC-7
// Take n as input from user and print the following sequence
/* 1
   n
   2
   n-1
   3
   n-2
   ......*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int j = n;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
        cout<<j<<endl;
        
        j--;
        
    }
    return 0;
}
