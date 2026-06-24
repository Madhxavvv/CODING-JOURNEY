// Write a program to determine whether a number is prime or not

#include <stdio.h>
int main(){
    int i;
    i = 2;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    do{
        if(i!=n){
            if(n%i==0){
                printf("NOT PRIME");
                break;
            }
        }
        else{
            printf("PRIME");
        }
        i++;
    }while(i<=n);

    return 0;

}
