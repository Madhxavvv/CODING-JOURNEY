// HW -4 LEC-6
// Print all the odd numbers between 1 to 100 which is divisible by 3

#include <iostream>
using namespace std;
int main(){
    for(int i=0; i<=100; i++){
        if(i%2!=0 && i%3 ==0){
            cout<<i<<endl;
        }
    }
    return 0;
}