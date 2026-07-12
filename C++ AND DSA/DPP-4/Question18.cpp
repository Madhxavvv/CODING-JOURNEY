/* Q18. Design a program to generate a geometric Hollow Star Diamond. (Assume n defines
the number of rows in the top half including the center).
Sample — Input: n = 3 ⇒ Output:
 */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=((2)*(i)-(1)); j++){
            if(j==1 || j==((2)*(i)-(1))){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    n--;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=1; j<=((2)*(n)-(2)*(i)+(1)); j++){
            if(j==1 || j==((2)*(n)-(2)*(i)+1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

}