// HOLLOW DIAMOND

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int nsp1 = n-1, nst1 = 1;
    int nsp2 = 1, nst2 = (2)*(nsp1)-(1);
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=nsp1; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst1; j++){
            if(j==1 || j==nst1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }

        }
        nsp1-=1;
        nst1+=2;
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=nsp2; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst2; j++){
            if(j==1 || j==nst2){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        nsp2+=1;
        nst2-=2;
        cout<<endl;

    }


}