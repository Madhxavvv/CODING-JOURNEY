//CW -5 LEC 5
//TAKE THREE INTEGERS AS INPUT AND PRINT THE GREATEST OF THEM

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three integers: ";
    cin>>a>>b>>c;
    if(a==b&&a==c){
        cout<<"ALL THREE INTEGERS ARE EQUAL";
    }
    else if(a>=b&&a>=c){
        cout<<a<<" is the greatest number among them";
    }
    else if(b>=a&&b>=c){
        cout<<b<<" is the greatest number among them";
    }
    else if(c>=a&&c>=a){
        cout<<c<<" is the greatest number among them";
    }
    return 0;

}