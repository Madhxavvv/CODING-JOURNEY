//CW-2 LEC 7
// PRINT NUMBER FROM n to 1

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = n; i ; i--){
        cout<<i<<endl;
    }
    return 0;
}