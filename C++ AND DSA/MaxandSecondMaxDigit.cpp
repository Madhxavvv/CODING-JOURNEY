#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long max = -1;
    long long second = -1;
    long long ld;

    while(n!=0){
        ld = n%10;
        if(ld>max){
            second = max;
            max = ld;
        }
        else if(ld>second && ld!=max){
            second = ld;
        }
        n/=10;
    }
    char s;
    if(second==-1){
        s = 'N';
            cout<<max<<" "<<s;
    }
    else{
    cout<<max<<" "<<second;
    }
}