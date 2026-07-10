#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    if(n>26){
        cout<<"Enter a number less than or equal to 26";
        return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=97; j<=(n+96); j++){
            cout<<(char)j<<" ";
        }
        cout<<endl;
    }
}