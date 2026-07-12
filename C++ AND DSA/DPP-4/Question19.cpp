/* Write a program to print the classic Butterfly Pattern. This layout consists of two
mirrored growing right triangles on the top half, and two mirrored shrinking right triangles on
the bottom half, separated by precise hollow space.
Sample — Input: n = 4 (Half rows) ⇒ Output:
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int nsp = 2*n-2, nsp2 = 0;
    for(int i =1 ;i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        nsp-=2;
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=(n+1-i); j++){
            cout<<"* ";

        }
        for(int j=1; j<=nsp2; j++){
            cout<<"  ";
        }
        nsp2+=2;
        for(int j=1; j<=(n+1-i); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}