#include <stdio.h>
int main(){
    int i = 72;
    int* j = &i;
    int** k = &j;  // pointer to pointer stores the address of a pointer which is storing the address of another variable
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(*k));
    return 0;
}