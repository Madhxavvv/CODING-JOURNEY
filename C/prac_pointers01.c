// Write a program to print the address of a variable. Use this address to get the
// value of the variable.

#include <stdio.h>
int main(){
    int i = 72;
    int* j = &i;
    printf("The address of i is %u\n", j);
    printf("The value at address %u is %d \n", j, *j);
    return 0;
}