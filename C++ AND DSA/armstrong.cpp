#include <iostream>
#include <cmath>
using namespace std;
int power(int base, int exp) {
    int ans = 1;
    for(int i=1; i<=exp; i++){
        ans *= base;
    }
    return ans;
}
bool isArmstrong(int n){
    int sum = 0;
    int digits = 0;
    int rem;
    int x=n; int y = n;
    bool flag;
    while(x!=0){
        x/=10;
        digits++;
    }
    while(y!=0){
        rem = y%10;
        sum+=power(rem,digits);
        y/=10;
    }
    if(sum==n){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(isArmstrong(i)){
            cout<<i<<" ";
        }
    }
    return 0;

}



