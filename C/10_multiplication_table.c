// Write a program to print multiplication table of a number

#include <stdio.h>
int main(){
    int i = 0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(int i = 1; i<=10; i++){
        int product = n*i;
        printf("%d\n", product);
    }
    return 0;

}
