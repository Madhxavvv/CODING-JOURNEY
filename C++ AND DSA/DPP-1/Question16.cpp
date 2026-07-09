// Take an integer n as input. Print the minimum non-negative integer that must be added to n to make it exactly divisible by 7. Use the modulus operator.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rem = n%7;
    cout<<(7-rem)%7<<endl;
    return 0;
}