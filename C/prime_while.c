// Write a program to determine whether a number is prime or not

#include <stdio.h>
int main(){
    int i = 0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int prime = 0;
    i = 2;
    if(n==1){
        printf("1 is not a prime number");
    }

    while(i<=n){
        if(i!=n){
            if(n%i == 0){
                printf("NOT PRIME");
                break;
            }
        }
        else{
            printf("PRIME");
        }
        i++;
    }
    return 0;

}