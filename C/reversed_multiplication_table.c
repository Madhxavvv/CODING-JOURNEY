// Write a program to print multiplication table of 10 in reversed order

#include <stdio.h>
int main(){
    int i = 0;
    int n = 10;
    // printf("Enter value of n: ");
    // scanf("%d", &n);
    for(i=10;i;i--){
        int product = n*i;
        printf("%d*%d = %d\n", n, i, product);
    }
    return 0;

}