//Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to 0

#include <stdio.h>
int main(){
    int i;
    i = 0;
    int n = 10;
    while(i<11){
        printf("%d\n", n);
        n++;
        i++;
    }
    return 0;
}
