// HW-4 LEC-7
// WRITE A PROGRAM TO CHECK IF A NUMBER IS PRIME OR NOT

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool composite = 0;
    for(int i = 2; i<= (sqrt(n)); i++){
        if(n%i == 0){
            composite = 1;
            break;
        }
    }
    if(composite==1){
        cout<<"COMPOSITE";
    }
    else if(composite==0){
        cout<<"PRIME";
    }
}
