//HW-2 LEC 5
// TAKE THEREE POSITIVE INTEGERS AS INPUT AND PRINT THE LEAST OF THEM

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three positive integers: ";
    cin>>a>>b>>c;
    if(a==b&&b==c){
        cout<<"ALL THREE ARE EQUAL";
    }
    else if(a<=b&&a<=c){
        cout<<a<<" is the smallest";
    }
    else if(b<=a && b<=c){
        cout<<b<<" is the smallest";
    }
    else if(c<=a && c<=b){
        cout<<c<<" is the smallest";

    }
    return 0;
}