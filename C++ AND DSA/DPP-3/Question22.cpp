/* Write a program that prints all integers from 1 to 500 that contain the digit 2, the digit
7, or both, anywhere within their numerical representation.
Sample — Output includes: 2, 7, 12, 17, 20, 21, 22, ... */

#include <iostream>
using namespace std;
int main(){
    int digit;
    for(int i = 1; i<=500; i++){
        int num = i;
        while(num!=0){
            digit = num%10;
            if(digit==2||digit==7){
                cout<<i<<" ";
                break;
            }
            num = num/10;
        }

    }
    return 0;
}
