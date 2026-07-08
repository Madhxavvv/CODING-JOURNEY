// CW-1 LEC-6
//TAKE A POSITIVE INTEGER AS INPUT AND CHECK WHETHER IT IS ODD OR EVEN USING TERNARY OPERATOR

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    (num%2==0)?cout<<"EVEN":cout<<"ODD";
    return 0;
}