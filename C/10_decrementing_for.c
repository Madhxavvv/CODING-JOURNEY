//Write a C program to print n natural numbers in reverse order

#include <stdio.h>
int main(){
    int i;
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);
    for (i=n; i ;i--){
            printf("%d\n", i);
    }
        
    return 0;
}
