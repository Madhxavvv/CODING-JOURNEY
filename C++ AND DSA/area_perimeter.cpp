//HW-2 LEC-4
// TAKE LENGTH AND BREADTH OF RECTANGLE AS INPUT AND WRITE A PROGRAM TO FIND WHETHER THE AREA OF RECTANGLE IS GREATER THAN ITS PERIMETER

#include <iostream>
using namespace std;
int main(){
    float length,breadth;
    cout<<"Enter length: ";
    cin>>length;
    cout<<"Enter breadth: ";
    cin>>breadth;
    float area = length*breadth;
    float perimeter = 2*(length+breadth);
    if(area==perimeter){
        cout<<"AREA IS EQUAL TO PERIMETER";
    }
    else if(area>perimeter){
        cout<<"AREA IS GREATER THAN PERIMETER";
    }
    else if(perimeter>area){
        cout<<"PERIMETER IS GREATER THAN AREA";
    }
    return 0;
}