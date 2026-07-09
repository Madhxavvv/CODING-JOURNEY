// A circle of radius r is inside a square of side a (the circle always sits completely inside the square without touching its edges). Find the area of the shaded region - the part inside the square but outside the circle. Use pi = 3.14

#include <iostream>
using namespace std;
int main(){
    int a, r;
    cout<<"Enter side of the square: ";
    cin>>a;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    float square = a*a;
    float circle = 3.14*r*r;
    cout<<"The area of the shaded region is: "<<square-circle<<endl;
    return 0;
}