// Write a program to determine whether a number is prime or not

#include <stdio.h>
int main(){
    int i,j;
    i=0;
    j=0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("The first %d prime numbers are: \n", n);
    int prime = 0;
    for(i=2;i<=n;i++){
        prime = 1;
        for(j=2;j<=n;j++){
            if(i!=j){
                if(i%j==0){
                    prime = 0;
                }
            }
        }
            
        if(prime){
            printf("%d\n", i);
        }

    }


    
    return 0;

}
