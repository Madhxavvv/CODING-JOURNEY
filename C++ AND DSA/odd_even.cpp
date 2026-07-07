// CW-2 (LEC-4)
// TAKE A NUMBER AS INPUT & TELL IF IT IS ODD OR EVEN

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num%2==0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
    return 0;
}