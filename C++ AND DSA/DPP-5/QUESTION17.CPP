/* Write a program containing a function findMaximum(int a, int b, int c) that uses
the inbuilt max() function to return the largest of three numbers. Call this function in main(). */

#include <iostream>
#include <cmath>
using namespace std;
int findMaximum(int a, int b, int c){
    return (max(max(a,b),c));
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"The largest number among the three is: "<<findMaximum(a,b,c)<<endl;
    
}