#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j = 1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j = 1; j<2*i; j++){
            cout<<"* ";

        }
        cout<<endl;
    }
    int NEW = n-1;
    for(int i=1;i<=NEW; i++){
        for(int j=1; j<=i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=((2)*(NEW-i)+(1)); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

    // int nsp1 = n-1, nst1 = 1;
    // int nsp2 = 1, nst2 = (2)*(nsp1)-(1);
    // for(int i = 1; i<=n; i++){
    //     for(int j=1; j<=nsp1; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=nst1; j++){
    //             cout<<"* ";


    //     }
    //     nsp1-=1;
    //     nst1+=2;
    //     cout<<endl;
    // }
    // for(int i=1; i<=n-1; i++){
    //     for(int j=1; j<=nsp2; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=nst2; j++){
    //         cout<<"* ";
    //     }
    //     nsp2+=1;
    //     nst2-=2;
    //     cout<<endl;

    // }

    // int nsp = n-1, nst = 1;
    // for(int i=1; i<=((2)*(n)-(1)); i++){
    //     for(int j=1; j<=nsp; j++){
    //         cout<<"  ";
    //     }
    //     for(int j=1; j<=nst; j++){
    //         cout<<"* ";
    //     }
    //     if(i<n){
    //         nsp-=1;
    //         nst+=2;
    //     }
    //     else{
    //         nsp+=1;
    //         nst-=2;
    //     }
    //     cout<<endl;
    // }



