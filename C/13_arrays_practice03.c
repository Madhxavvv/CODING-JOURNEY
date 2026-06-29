/*  Write a program to create an array of 10 integers and store multiplication table of
5 in it. */

#include <stdio.h>
int main(){
    int table[10];
    int j = 1;
    for(int i = 0; i<10; i++){
        table[i] = 5*j;
        j++;
    }
    for(int i = 0; i<10; i++){
        printf("%d\n", table[i]);
    }
    return 0;
}
