// CW-4 LEC-7
// DISPLAY THIS GP : 1,2,4,8....... UPTO 'n' TERMS . TAKE n as user input

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int j = 1;
    for(int i=1;i<=n;i++){
        cout<<j<<endl;
        j*=2;
    }
    return 0;
}