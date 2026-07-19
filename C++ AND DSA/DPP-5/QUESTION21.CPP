/* Write a program to calculate the hypotenuse of a right-angled triangle given its base
and perpendicular. Write a function that accepts these two values and uses the inbuilt sqrt()
library function to return the hypotenuse.
Sample — Input: 3 4 ⇒ Output: 5 */

#include <iostream>
#include <cmath>
using namespace std;
double hypotenuse(double base, double perpendicular){
    return sqrt((base*base)+ (perpendicular*perpendicular));
}
int main(){
    int b,p;
    cout<<"Enter base and perpendicular: ";
    cin>>b>>p;
    cout<<"The hypotenuse of the triangle is: "<<hypotenuse(b,p)<<endl;
}