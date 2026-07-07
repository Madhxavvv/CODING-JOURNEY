//CW-4 LEC 5
// TAKE ALPHABET AS INPUT AND PREDICT IF ITS CAPITAL OR NOT BY WRITING A PROGRAM

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(65<=ch && ch<=90){
        cout<<ch<<" is a capital alphabet";
    }
    else if(97<=ch && ch<=122){
        cout<<ch<<" is a lowercase alphabet";
    }
    else{
        cout<<ch<<" is not even an alphabet";
    }
    return 0;
}