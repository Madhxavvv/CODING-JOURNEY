// CW-7 LEC 5
// TAKE THREE NUMBERS AS INPUT AND PRINT THE GREATEST OF THEM USING NESTED IF-ELSE

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>=b){
        if(a>=c){
            cout<<a<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
    else if(b>=a){
        if(b>=c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<b<<" is greatest";
        }
    }
    return 0;
}