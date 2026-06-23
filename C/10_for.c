//Write a program to print first n natural number using for loop

#include <stdio.h>
int main(){
    int i;
    i = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        printf("%d\n", i);
    }
    return 0;
}
