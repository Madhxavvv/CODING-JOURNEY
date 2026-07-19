/* Write a program demonstrating Function Overloading. Create two functions named
calculateArea. One should take a single double parameter (radius) and return the area of a
circle. The other should take two double parameters (length, width) and return the area of a
rectangle.
Sample — Input: Circle radius 3 ⇒ Output: 28.26
Input: Rectangle 4 5 ⇒ Output: 20 */

#include <iostream>
#include <cmath>
using namespace std;

double calculateArea(double r){
    return 3.14*r*r;
}
double calculateArea(double l, double b){
    return l*b;
}
int main(){
    double r,l,b;
    cout<<"Enter the radius of circle: ";
    cin>>r;
    cout<<"Enter the length and breadth of rectangle: ";
    cin>>l>>b;
    cout<<"The area of circle is: "<<calculateArea(r)<<endl;
    cout<<"The area of rectangle is: "<<calculateArea(l,b)<<endl;
}