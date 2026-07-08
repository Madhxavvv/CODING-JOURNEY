// CW-3 LEC 7
// DISPLAY THIS AP : 2,5,8,11..... UPTO 'n' terms. Take n as input from user

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int j = 2;
    for(int i = 1; i<=n; i++){
        cout<<j<<endl;
        j+=3;
        


    }
    return 0;
}
