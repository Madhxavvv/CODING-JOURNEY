// Write a program to print 1 to 100 except multiples of 4

#include <iostream>
using namespace std;
int main(){
    for(int i = 1; i<=100; i++){
        if(i%4==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}