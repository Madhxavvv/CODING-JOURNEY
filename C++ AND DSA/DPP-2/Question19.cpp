/* Take three numerical values denoting the side dimensions (a, b, c) of a shape. First, use a vali-
dation structure to test whether these segments can structurally assemble into a valid triangle

(a + b > c, b + c > a, and c + a > b). If valid, further categorize the object as an Equilateral,
Isosceles, or Scalene triangle.
Sample — Input: 5 5 8 ⇒ Output: Isosceles Triangle */

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
        if(a==b && a==c){
            cout<<"Equilateral Triangle";
        }
        else if(a==b || a==c || b==c){
            cout<<"Isosceles Triangle";
        }
        else{
            cout<<"Scalene Triangle";
        }
    }
    return 0;
}