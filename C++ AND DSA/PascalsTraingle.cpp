#include <iostream>
using namespace std;
int factorial(int a){
    int product = 1;
    for(int i = 1; i<=a; i++){
        product*=i;
    }
    return product;
}
int nCr(int n, int r){
    int a = (float)factorial(n);
    int b = (float)factorial(r);
    int c = (float)factorial(n-r);
    return a/(b*c);
}
int main(){
    int n;
    
    cout<<"Enter a number: ";
    cin>>n;
    int nsp = n;
    for(int i=0; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp--;
        for(int j=0; j<=i; j++){
                cout<<nCr(i,j)<<"  ";
        }
        cout<<endl;
    }
}
