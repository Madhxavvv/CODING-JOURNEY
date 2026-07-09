/* Given the three coordinate points A(x1, y1), B(x2, y2), and C(x3, y3) as floating-point inputs,
write a program to determine if all three points sit sequentially on the same straight line
(collinear points). Use the slope comparison formulation:

(y2 − y1) × (x3 − x2) == (y3 − y2) × (x2 − x1) */

#include <iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,x3,y3;
    cout<<"Enter the coordinates of first point: ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of second point: ";
    cin>>x2>>y2;
    cout<<"Enter the coordinates of third point: ";
    cin>>x3>>y3;
    if((y2-y1)*(x3-x2) == (y3-y2)*(x2-x1)){
        cout<<"Points are Collinear";
    }
    else{
        cout<<"Points are Non-Collinear";
    }
    return 0;
}