#include <iostream>
using namespace std;
void sumOfThree(int, int, int);
void sumOfThree(int a, int b, int c){
    cout<<"The sum of three numbers is "<<a+b+c<<endl;
}
int main(){
    cout<<"Enter three numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    sumOfThree(a,b,c);

}