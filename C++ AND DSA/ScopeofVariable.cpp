#include <iostream>
using namespace std;
int main(){
    int i; // IF DECLARATION IS OUTSIDE LOOP THEN WE CAN USE i outside loop
    for(i=1; i<=4; i++){
        cout<<"Good Morning"<<endl;
    }
    cout<<i; 
//     for(int i=1; i<=4; i++){ //here i cannot be used outside loop
//         cout<<"Good Morning";
//     }
//     cout<<i;
// 
}

