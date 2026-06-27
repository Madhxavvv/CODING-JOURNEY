//Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>
int fibonacci(int);
int fibonacci(int n){
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return fibonacci(n-2)+fibonacci(n-1);
}
int main(){
    int a;
    printf("Enter the element you want to find of fibonacci series: ");
    scanf("%d", &a);
    if(a==0){
        return printf("Kindly enter natural number\n");
    }
    int c = fibonacci(a);
    printf("The %d th element of fibonacci series is %d", a, c);
    return 0;
    
}
