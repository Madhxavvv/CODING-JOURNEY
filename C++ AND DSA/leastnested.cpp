// HW-4 LEC 5
// TAKE THREE NUMBERS AS INPUT AND PRINT THE LEAST OF THEM USING NESTED IF-ELSE

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a<=b){
        if(a<=c){
            cout<<a<<" is least";
        }
        else{
            cout<<c<<" is least";
        }
    }
    else if(b<=a){
        if(b<=c){
            cout<<b<<" is least";
        }
        else{
            cout<<b<<" is least";
        }
    }
    return 0;
}