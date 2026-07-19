/* Write a function updateValues(int *a, int *b). The function should update the
value of a to the sum of a and b, and update the value of b to the absolute difference of their
original values. (Hint: Store actual values in temp variables first!) */

#include <iostream>
#include <cmath>
using namespace std;
void updateValues(int *a, int *b){
    int sum = *a+*b;
    int diff = abs(*a-*b);
    *a = sum;
    *b = diff;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    updateValues(&a,&b);
    cout<<a<<" "<<b;
}