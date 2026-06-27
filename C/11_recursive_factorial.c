#include <stdio.h>
int factorial(int);
int factorial(int n){
    if (n==1||n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);
    int c = factorial(a);
    printf("The factorial of %d is %d\n", a, c);
    return 0;
}
