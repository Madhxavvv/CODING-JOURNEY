/*Write a function printEven(int start, int end) that prints all even numbers between
start and end (inclusive). Call it from main().*/

#include <iostream>
#include <cmath>
using namespace std;
void printEven(int start, int end){
    int value;
    for(int i = start; i<=end; i++){
        (i%2==0)? cout<<i : cout<<" ";
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    printEven(a,b);
}