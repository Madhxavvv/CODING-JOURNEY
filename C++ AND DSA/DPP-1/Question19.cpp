/* Take an amount in Rupees (double) and convert it to Dollars, given that 1 Dollar =
100 Rupeess */

#include <iostream>
using namespace std;
int main(){
    float rupees;
    cout<<"Enter INR: ";
    cin>>rupees;
    cout<<"The amount in dollars evaluate to: "<<rupees/100<<endl;
    return 0;
}