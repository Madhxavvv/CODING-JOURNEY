#include <stdio.h>
int sum(int, int); //Function prototype
int sum(int x, int y){                  //Function definition
    printf("The sum is %d\n", x+y);  
    return x+y; 
}

int main(){
    int a; int b;
    printf("Enter two values: \n");
    scanf("%d %d", &a, &b);
    sum(a,b); //Function call
    return 0;
}