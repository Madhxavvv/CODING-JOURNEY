/* Write a program to print an Expanding Number Diamond pattern for a given integer
n.
Sample — Input: n = 4 ⇒ Output: */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int a = i;a>(i-1) && a<(2*i); a++){
            cout<<a<<" ";
        }
        if(i>=2){
          for(int b = ((2)*(i)-(2));b>=i; b--){
            cout<<b<<" ";
        }

        }


            

        cout<<endl;
    }
    n--;
    int b = n;
    int c = n;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j = b; j<2*b; j++){
            cout<<j<<" ";
        }
        for(int j = ((2)*(c)-(2)); j>=c; j--){
            cout<<j<<" ";
        }
        b--;
        c--;
        cout<<endl;
    }
}