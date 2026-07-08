// CW-5
// Print all alphabets with  their correspondig ASCII values

#include <iostream>
using namespace std;
int main(){
    cout<<"UPPERCASE ALPHABETS: "<<endl;
    for(int i = 65; i<=90; i++){
        cout<<(char)i<<" : "<<i<<endl;
    }
    cout<<endl<<"LOWERCASE ALPHABETS: "<<endl;
    for(int i = 97; i<=122; i++){
        cout<<(char)i<<" : "<<i<<endl;
    }
    return 0;
}
