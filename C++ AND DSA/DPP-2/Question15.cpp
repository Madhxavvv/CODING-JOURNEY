/* Write a menu-driven application using a C++ switch-case structure that accepts an
integer number representing a month (1 to 12). Print the corresponding month’s standard
calendar name. If the input falls outside the standard scope, default cleanly with an error flag
message.
Sample — Input: 2 ⇒ Output: February */

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    switch(num){
        case(1): cout<<"January";break;
        case(2): cout<<"February";break;
        case(3): cout<<"March";break;
        case(4): cout<<"April";break;
        case(5): cout<<"May";break;
        case(6): cout<<"April";break;
        case(7): cout<<"May";break;
        case(8): cout<<"June";break;
        case(9): cout<<"July";break;
        case(10): cout<<"August";break;
        case(11): cout<<"September";break;
        case(12): cout<<"November";break;
        default: cout<<"ERROR!!";




    }
    return 0;
}