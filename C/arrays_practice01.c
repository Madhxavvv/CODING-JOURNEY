/* Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array. */

#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;
    ptr = ptr+2;
    printf("The element at index ptr+2 is %d\n", *ptr);
    return 0;
}

// As its output is 3 which is the third element (ptr+2) points to 3rd element