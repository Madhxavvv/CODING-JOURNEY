// Write a program to calculate the Volume of a Sphere given radius r. Use pi = 3.14

#include <iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter radius of the sphere: ";
    cin>>r;
    cout<<"The volume of the sphere is: "<<(4.0/3.0)*3.14*r*r*r<<endl;
    return 0;
}