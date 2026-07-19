/* Write a function sumFirstAndLast(int n) that extracts the first and the last digit of a
given positive integer and returns their sum. */

#include <iostream>
#include <cmath>
using namespace std;
int sumFirstandLast(int n){
    int last = n%10;int first;
    while(1){
        n/=10;
        if(n==0) break;
        first = n;
    }
    return first+last;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The sum of its first and last digit is: "<<sumFirstandLast(n)<<endl;

    
}