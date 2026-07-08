// Write a program to print all the factors of a given number

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Factors of "<<n<<" are: "<<endl;
    for(int i=1; i<=(sqrt(n)); i++){
        if(n%i==0){
            cout<<i<<endl;
            if(i!= n/i) {cout<<n/i<<endl;}
        }
    }
    return 0;
}