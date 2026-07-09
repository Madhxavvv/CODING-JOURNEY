/* Take a positive integer input from the user and print its prime factors.
Sample — Input: 60 ⇒ Output: 2 2 3 5 */



#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int i = 2;
    while(n>1){
        if(n%i==0){
            cout<<i<<endl;
            n/=i;
        }
        else{
            i++;
        }
    }
}