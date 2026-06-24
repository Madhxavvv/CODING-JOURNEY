#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    int digit = 0;
    for(int i = 0; num>0; i++){
        digit = num%10;
        num = num/10;
        printf("%d", digit);
    }
    return 0;
}
