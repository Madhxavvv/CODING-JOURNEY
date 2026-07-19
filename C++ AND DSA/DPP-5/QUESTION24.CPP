/* Write a program to print Pascal’s Triangle up to N rows. You MUST create a helper
function factorial(int x) and a combination function nCr(int n, int r) to calculate the
values in the triangle.
Sample — Input: 4 ⇒ Output: */

#include <iostream>
#include <cmath>
using namespace std;
long long factorial(int x){
    long long product = 1;
    for(long long i = 1; i<=x; i++){
        product*=i;
    }
    return product;
}
long long nCr(int n, int r){
    long long a = factorial(n);
    long long b = factorial(r);
    long long c = factorial(abs(n-r));
    return (float)(a/(b*c));
}
int main(){
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i,j)<<" ";

        }
        cout<<endl;
    }
}
