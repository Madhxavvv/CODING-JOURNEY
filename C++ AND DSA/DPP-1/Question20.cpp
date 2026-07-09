/* A shopkeeper applies a discount of d% on the marked price m, and then charges a tax of
t% on the discounted price. Take m, d, and t (all doubles) as input and print the final amount
the customer pays.
Discounted Price = m − d
100 × m Final Price = Discounted Price ×

1 + t
100

Sample — Input: m = 1000, d = 10, t = 18 ⇒ Output: 1062
*/

#include <iostream>
using namespace std;
int main(){
    float d,m,t;
    cout<<"Enter the marked price: ";
    cin>>m;
    cout<<"Enter the percentage of discount: ";
    cin>>d;
    cout<<"Enter the percentage of tax: ";
    cin>>t;
    float discounted = (m)-((d/100)*m);
    float final = discounted*(1+(t/100));
    cout<<"The final amount the customer pays is: "<<final;
    return 0;
}