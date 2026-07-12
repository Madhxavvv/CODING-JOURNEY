/* Write a program to construct an Alphabet Palindrome Pyramid. For a given n, each
row should print letters sequentially increasing to a peak character, and then symmetrically
decreasing back to ’A’. Use precise spacing to center the pyramid.
Sample — Input: n = 4 ⇒ Output:
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<(char)(j+64);
        }
        for(int j = i-1; j; j--){
            cout<<(char)(j+64);
        }
        cout<<endl;
    }
}