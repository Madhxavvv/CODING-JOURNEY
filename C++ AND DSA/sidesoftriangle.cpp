//CW-3 LEC 5
// WRITE A PROGRAM TO CHECK WHETHER 3 POSITIVE INTEGERS TAKEN AS INPUT CAN BE SIDES OF A TRIANGLE

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if((a+b)>c && (a+c)>b && (b+c)>a){
        cout<<"Yes these three integers can be sides of a triangle";
    }
    else{
        cout<<"Nope these can't be sides of triangle";
    }
    return 0;
}