//WRITE A C PROGRAM TO CHECK WHETHER A NUMBER IS DIVISIBLE BY 97 OR NOT
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num%97==0){
        printf("The number %d is divisible by 97", num);
    }
    else{
        printf("OOPS!! The number is not divisble by 97");
    }
    return 0;
}
