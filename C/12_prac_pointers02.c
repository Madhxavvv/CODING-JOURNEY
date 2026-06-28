/*  Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why? */

#include <stdio.h>
void display(int);
void display(int a){
    printf("The address of a is %u\n", &a);
}
int main(){
    int i;
    printf("The address of i is %u\n", &i);
    display(i);
    return 0;
}

// No the address is not same as we passed the value not the address to the function so a copy of variable i is passed to the function (CALL BY VALUE)
