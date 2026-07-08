// CW-5 LEC-9
// Write a program to print the value of a raise to the power b

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int product = 1;
    if(a==0 && b==0){
        cout<<"INDETERMINATE FORM";
    }
    else if(b>0){
    for(int i = 1; i<=b; i++){
        if(a==0 || a==1) break;
        product*=a;
    }
    cout<<product;
    }
    else if(b==0){
        cout<<1;
    }
    else if(b<0){
        int c = -b;
        for(int i = 1; i<=c; i++){
            if(a==0 || a==1) break;
            product*=a;
        }
        cout<<(1.0/product);
    }
    
    return 0;
}