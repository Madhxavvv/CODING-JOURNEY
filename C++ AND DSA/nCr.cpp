#include <iostream>
using namespace std;
long long factorial(long long a){
    long long product = 1;
    for(long long i = 1; i<=a; i++){
        product*=i;
    }
    return product;
}
int main(){
    long long n,r;
    cout<<"Enter n and r";
    cin>>n>>r;
    long long a = (float)(factorial(n));
    long long b = (float)(factorial(r));
    long long c = (float)(factorial(n-r));
    cout<<(a/(b*c));
}