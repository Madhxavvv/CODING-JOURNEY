#include <iostream>
using namespace std;
void countNumbers(int n, int* c){
    int count = 0;
    if(n==0) count = 1;
    while(n!=0){
        count++;
        n/=10;
    }
    *c = count;
}
int main(){
    int n;
    cin>>n;
    int c = 0;
    countNumbers(n, &c);
    cout<<c;
}