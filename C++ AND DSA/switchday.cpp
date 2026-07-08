// CW -4 LEC 6
// Given ith day of week, tell which day is it

#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the count of day: ";
    cin>>day;
    switch(day){
        case(7): cout<<"Sunday";
                 break;
        case(1): cout<<"Monday";
                 break;
        case(2): cout<<"Tuesday";
                 break;
        case(3): cout<<"Wednesday";
                 break;
        case(4): cout<<"Thursday";
                 break;
        case(5): cout<<"Friday";
                 break;
        case(6): cout<<"Saturday";
                 break;
        default: cout<<"Enter correct value";
                 break;
        
    }
    return 0;
}