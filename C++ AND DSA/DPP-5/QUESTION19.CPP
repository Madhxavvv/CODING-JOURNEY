/* Write a C++ program to swap two numbers using a function swapNumbers(int* a,
int* b). You must use pointers (pass by address) to perform the swap. */

#include <iostream>
#include <cmath>
using namespace std;
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<a<<" "<<b;
}


