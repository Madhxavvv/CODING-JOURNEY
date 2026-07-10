#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0){
        cout<<"Enter odd number only";
        return 0;
    }
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if((j==i) || (j==(n+1-i))){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
