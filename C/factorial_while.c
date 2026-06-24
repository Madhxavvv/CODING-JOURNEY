//Write a program to calculate the factorial of a given number using while loop

#include <stdio.h>
int main(){
    int i;
    i = 1;
    int product = 1;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    while(i<=n){
        product *= i;
        i++;
    }
    printf("factorial is %d",product);
    return 0;
}