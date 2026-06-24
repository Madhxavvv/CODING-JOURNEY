// Write a program to sum first ten natural numbers using do-while loop

#include <stdio.h>
int main(){
    int i = 1;
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    int sum = 0;
    do{
        sum += i;
        i++;
    }while(i<=n);
    printf("Sum of first %d natural numbers is %d", n, sum);

    return 0;

}