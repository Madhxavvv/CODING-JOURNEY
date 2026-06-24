#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int digit = 0;
    int i = 0;
    int sum = 0;
    for(i = 0; num>0; i++){
        digit = num%10;
        num = num/10;
        printf("%d\n", digit);
        sum += digit;

    }
    printf("Number of digits is %d", i);
    printf("\nSum of digits is %d", sum);
    return 0;
}
