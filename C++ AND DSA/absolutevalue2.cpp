// CW - 3 (LEC 4)
// TAKE AN INTEGER AS INPUT AND RETURN THE ABSOLUTE VALUE OF IT

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(num==0){
        cout<<0<<endl;
    }
    else if(num>0){
        cout<<num<<endl;
    }
    else if(num<0){
        num = num*(-1);
        cout<<num<<endl;
    }
    cout<<num<<endl;
    return 0;
}