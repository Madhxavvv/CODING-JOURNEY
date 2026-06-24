// Write a program to get sum of a multiplication of a number n

#include <stdio.h>
int main(){
    int i = 0;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int product = 0;
    int sum = 0;
    for(i=1;i<=10;i++){
        product = n*i;
        
        printf("%d*%d = %d\n", n, i, product);
        sum += product;
    
    }
    printf("The sum of multiplication table of %d is %d", n, sum);
    return 0;

}