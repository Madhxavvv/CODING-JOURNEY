#include <iostream>
using namespace std;
void starTriangle(int);
void starTriangle(int a){
    for(int i=1; i<=a; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter three numbers: ";
    int a,b,c;
    cin>>a>>b>>c;
    starTriangle(a);
    starTriangle(b);
    starTriangle(c);
}