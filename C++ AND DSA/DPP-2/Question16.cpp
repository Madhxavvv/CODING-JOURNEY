/* Take a character input from the keyboard. Write a conditional structure to evaluate whether the
provided letter is an uppercase English alphabet (A-Z), a lowercase alphabet (a-z), a numerical
digit (0-9), or a special symbolic character.
Sample — Input: g ⇒ Output: Lowercase Alphabet */

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"Uppercase Alphabet";
    }
    else if(ch>=97 && ch<=122){
        cout<<"Lowercase Alphabet";
    }
    else if (ch>=48 && ch<=57){
        cout<<"Numerical Character";
    }
    else{
        cout<<"Special Symbols";
    }
    return 0;
}