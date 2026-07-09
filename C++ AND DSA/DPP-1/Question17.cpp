//  Take two integers a and b (b̸ = 0) as input. Print the result of ceiling integer division
//of a by b.
// Ceiling division always rounds up — e.g., ⌈7/2⌉ = 4, whereas normal integer division gives 3.
//Hint - Formula for positive integers: (a + b − 1) / b.
// Sample — Input: 7 2 ⇒ Output: 4

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(b==0){
        cout<<"second number cannot be zero";
    }
    else if(a==0){
        cout<<0<<endl;
    }
    else if(a>0 && b>0){
        cout<<(a+b-1)/b<<endl;
    }
    else if(a<0 && b<0){
        cout<<(a+b+1)/b<<endl;
    }
    else if(a<0 || b<0){
        cout<<a/b<<endl;
    }
    return 0;
        
    }
