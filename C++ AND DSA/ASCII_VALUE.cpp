//....................................................... ASCII VALUE .........................................................................//
// A = 65 ............. Z = 90
// a = 97................z = 122
// 0 = 48.................9 = 57

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    int x = ch;  // implicit typecasting
    cout<<"The ascii value of "<<ch<<" is "<<x;
    return 0;

}