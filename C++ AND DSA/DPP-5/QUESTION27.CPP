/* Create a program that demonstrates Double Pointers. Write a function changeTarget(int**
ptr, int* newAddress) that makes a pointer in main point to a completely different variable’s
address. */

#include <iostream>
#include <cmath>
using namespace std;
void changeTarget(int** ptr, int* newAddress){
    *ptr = newAddress;
}
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<"Pointer points to: "<<*ptr<<endl;
    changeTarget(&ptr, &b);
    cout<<ptr<<endl;
    cout<<"Pointer points to: "<<*ptr;

}