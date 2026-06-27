//Write a recursive function to calculate the sum of first ‘n’ natural numbers.

#include <stdio.h>
int sum_natural_numbers(int);
int sum_natural_numbers(int n){
    if(n==1){
        return 1;
    }
    return sum_natural_numbers(n-1) + n;
}

int main(){
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    int c = sum_natural_numbers(a);
    printf("The sum of first %d natural numbers is %d\n", a, c);
    return 0;
}

// sum(3) = 1 + 2 + 3  sum(n-1)+n
// sum(2) = 1 + 2
// sum(4) = 1+2+3 