//HW-3 LEC 5
// Given a point (x,y) WRITE A PROGRAM TO FIND OUT IF IT LIES IN THE 1ST QUADRANT , 2ND QUADRANT , 3RD QUADRANT , 4TH QUADRANT, ON THE X-AXIS, ON THE Y-AXIS OR AT THE ORIGIN

#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the x and y coordinates of the point: ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point lies at the origin";
    }
    else if(x>0&&y>0){
        cout<<"The point lies in the 1st quadrant";
    }
    else if(x<0 && y>0){
        cout<<"The point lies in the 2nd quarant";
    }
    else if(x<0 && y<0){
        cout<<"The point lies in the 3rd quadrant";
    }
    else if(x>0 && y<0){
        cout<<"The point lies in the 4th quadrant";
    }
    else if(y==0){
        cout<<"The point lies at the x axis";
    }
    else if(x==0){
        cout<<"The point lies at the y axis";
    }
    return 0;
}
