#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>26){
        cout<<"Enter a number less than 26";
        return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=97; j<=(n+97-i); j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}