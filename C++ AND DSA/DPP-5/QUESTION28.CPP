/* Create a mini banking application demonstrating Global Variables. Declare a global
variable double balance = 0.0;. Write two functions deposit(double amount) and withdraw(double
amount) that modify this global state. Print the final balance from main().
Sample — deposit(500), withdraw(200) ⇒ Output: Balance: 300 */

#include <iostream>
#include <cmath>
using namespace std;
double balance = 0.0;
void deposit(double n){
    balance += n;
}
void withdraw(double n){
    balance -= n;
}
int main(){
    double dep,with;
    cout<<"WELCOME TO DHANADHAN BANK:"<<endl;
    cout<<"Enter the amount to deposit: "<<endl;
    cin>>dep;
    deposit(dep);
    cout<<"Enter the amount to withdraw: "<<endl;
    cin>>with;
    if(balance-with<0){
        cout<<"TRANSACTION FAILED"<<endl<<"You cannot withdraw more than your balance";
        return 0;
    }
    withdraw(with);
    if(balance<0) balance=0;
    cout<<"Your balance is: "<<balance;

}