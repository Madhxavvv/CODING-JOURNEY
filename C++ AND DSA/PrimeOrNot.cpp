//HW-4 LEC-7
// Write a Program to check if a given number is prime or not

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=2; i<=(sqrt(n)); i++){
        if(n%i==0){
            cout<<"The number is composite"<<endl;
            break;
        }
        else{
            cout<<"The number is prime"<<endl;
            break;
        }
        

    }
    return 0;
}
