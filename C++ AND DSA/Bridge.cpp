#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    //First ROW
    for(int i=1; i<=((2)*(n)-(1)); i++){
        cout<<"* ";
    }
        cout<<endl;

    // ASLI KHEL YAHA HAI
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-1+1-i; j++){
            cout<<"* ";
        }
        for(int j=1; j<=(((2)*(i))-(1)); j++){
            cout<<"  ";
        }
        for(int j=1; j<=n-1+1-i; j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
