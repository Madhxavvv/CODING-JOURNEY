// Write a program to print factorial of a number

#include <stdio.h>
int main(){
    int i = 0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int product = 1;
    for(i=n;i;i--){
        product *= i;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;

}
