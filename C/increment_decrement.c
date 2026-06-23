#include <stdio.h>
int main(){
    int i;
    i = 10;
    printf("The value of i is %d\n", i);
    i = i+5;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i++); // i++ is assigned first then incremented by 1
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", ++i); // increments first then assigned
    return 0;
    

}