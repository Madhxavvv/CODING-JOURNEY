#include <stdio.h>
int main(){
    int i = 72;
    printf("The address of i is %u\n", &i);
    int* j = &i;
    int k = *j + 4;
    printf("The value of k is %d\n", k);
    printf("The address of k is %u\n", &k);
    printf("The address of i is %u\n", j);
    printf("The value at address of i is %d\n", *j);
    printf("The value at address of i is %d\n", *(&i));
    return 0;
}

// & operator gives the address of variable
// * operator gives the value at the address
// So &i = address of i
// *(&i) = value at address of i ,i.e, value of i
// int* j is the declaration of a pointer j
// Pointer stores the address of another variable
// So int* j = &i -> j stores address of i
// Pointer also have its own address