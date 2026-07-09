/* Write a program that takes a positive integer representing a year (e.g., 2024) and checks whether
it is a leap year or not. Your logical conditions must accurately check for standard four-year
intervals while handling century-year bounds correctly (100 and 400 rules).
Sample — Input: 1900 ⇒ Output: Not a Leap Year */

#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year: ";
    cin >> year;
    if(year%4==0 && year%100!=0 || year%400 == 0){
        cout<<"This is a leap year";
    }
    else{
        cout<<"Not a Leap Year";
    }

}