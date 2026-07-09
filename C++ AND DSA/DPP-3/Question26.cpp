/* Take an integer as input and mathematically subtract 293 from it. Compute and print
the reversed value of this new resulting integer. Ensure your logic correctly handles negative
results.
Sample 1 — Input: 183 ⇒ Math: 183 − 293 = −110 ⇒ Output: -11
Sample 2 — Input: 400 ⇒ Math: 400 − 293 = 107 ⇒ Output: 701
Sample 3 — Input: 293 ⇒ Math: 293 − 293 = 0 ⇒ Output: 0 */

#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int num2;
    if(num>=293){
        num2 = num - 293;

    }
    else{
        num2 = -293+num;
    }
    cout<<num2<<endl;
    int rev = 0;
    while(num2!=0){
        int digit = num2%10;
        rev = rev*10+digit;
        num2 = num2/10;
    }
    cout<<rev<<endl;

}