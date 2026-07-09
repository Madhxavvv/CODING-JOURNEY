/* Take an integer N as input and print the Fibonacci series up to N terms. (0, 1, 1, 2, 3, 5, . . .)
Sample — Input: 6 ⇒ Output: 0 1 1 2 3 5*/

#include <iostream>
using namespace std;
int main(){
    int N;
    cout<<"Enter an integer: ";
    cin>>N;
    int a = 0, b = 1, c;
    for(int i = 0; i<N; i++){
        if(i==0){
            cout<<0<<" ";
        }
        if(i==1){
            cout<<1<<" ";
        }
        c = a+b;
        cout<<c<<" ";
        a =b;
        b = c;

        
    }
}