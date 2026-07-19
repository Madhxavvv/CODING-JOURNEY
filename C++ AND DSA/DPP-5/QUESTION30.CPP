/* Write a program containing nested functions. Create a function findPermutation(int
n, int r) to calculate nP r =
n!
(n−r)! . This function must internally call another function

getFactorial(int x). Take n and r as inputs from the user.
Sample — Input: n = 5, r = 2 ⇒ Output: 20 */

#include <iostream>
#include <cmath>
using namespace std;
long long getFactorial(int x){
    long long product = 1;
    for(int i = 1; i<=x; i++){
        product*=i;
    }
    return product;
}
long long findPermutation(int n, int r){
    long long a = getFactorial(n);
    long long b = getFactorial(abs(n-r));
    return (float)(a/b);
}
int main(){
    int n,r;
    cout<<"Enter values for n and r respectively: "<<endl;
    cin>>n>>r;
    cout<<"Permutation is: "<<findPermutation(n,r);
}