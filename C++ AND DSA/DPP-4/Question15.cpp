/* Q15. Write a program to print a symmetric Cross Alphabet Pattern for a given integer n.
Sample — Input: n = 4 ⇒ Output:
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>26){
        cout<<"Please enter a number less than or equal to 26";
        return 0;
    }
    int nsp = ((2)*(n)-(2));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==i){
                cout<<(char)(i+64)<<" ";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp-=2;
        for(int j = 1; j<=n; j++){
            if(j==1){
                cout<<(char)(i+64);
            }
        }
        cout<<endl;
    }
    n--;
    int a = n;
    int b = n;
    int nsp2 = 2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n+1-i); j++){
            if(j==(n+1-i)){
                cout<<(char)(a+64);
            }
            else{
                cout<<" ";
            }
        }
        a--;
        for(int j=1; j<=nsp2; j++){
            cout<<" ";
        }
        nsp2+=2;
        for(int j=1; j<=n; j++){
            if(j==1){
                cout<<(char)(b+64);
            }
        }
        b--;
        cout<<endl;

    }
}