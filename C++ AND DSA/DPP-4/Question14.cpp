/* Q14. Write a program that prints an Inscribed Hollow Diamond pattern. The pattern
consists of a solid rectangle of stars with a hollow diamond shape in the center.
Sample — Input: n = 5 ⇒ Output:
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i =1; i<=((2)*(n)-(1)); i++){
        cout<<"*";
    }
    cout<<endl;
    n--;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }
        for(int j=1; j<=((2)*(i)-(1)); j++){
            cout<<" ";
        }
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=((2)*(n-i)+(1)); j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    n++;
    for(int i=1; i<=((2)*(n)-(1)); i++){
        cout<<"*";
    }
}