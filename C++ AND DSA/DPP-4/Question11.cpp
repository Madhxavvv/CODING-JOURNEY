// Take an odd integer n as input from the user (n ≥ 3). Write a program to print a Plus
// inside Square Boundary pattern.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter an odd number greater than equal to 3: ";
    cin>>n;
    int mid = ((n/2)+1);
    if(n%2==0 || n<3){
        cout<<"PLEASE FOLLOW THE INSTRUCTIONS FOR INPUT";
        return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n ||i==mid || j==mid){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
                 
        }
        cout<<endl;

    }
}
