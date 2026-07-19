#include <iostream>
using namespace std;
void minOfTwo(int, int);
void minOfTwo(int a, int b){ // Parameters
    cout<<min(a,b);

}
int main(){
    cout<<"Enter two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"The minimum of the two numbers is: ";
    minOfTwo(a,b); //Arguments
}