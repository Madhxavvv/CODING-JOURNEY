// Write a program to determine whether a number is prime or not

#include <stdio.h>
int main(){
    int i = 0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int prime = 0;
    if(n=1){
        printf("1 is not a prime number");
    }
    for(i=2;i<=n;i++){
        if(n!=i){
            if((n%i==0)){
                printf("The number %d is not a prime number", n);
                break;
            }
        }
    
       else{
        printf("Prime number");
       }
    }
    return 0;

}