// CW-2
// CALCULATE SIMPLE INTEREST

#include <iostream>
using namespace std;
int main(){
    float principal, rate, time;
    cout<<"ENTER PRINCIPAL AMOUNT: ";
    cin>>principal;
    cout<<"ENTER RATE OF INTEREST: ";
    cin>>rate;
    cout<<"ENTER RATE OF TIME IN MONTHS: ";
    cin>>time;
    float SI = (principal*rate*time)/100;
    cout<<"THE SIMPLE INTEREST IS "<<SI;
    return 0;
}