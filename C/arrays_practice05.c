/* Write a program containing a function which reverses the array passed to it */

#include <stdio.h>
void reverse(int*, int);
void reverse(int* i, int n){
    printf("{");
    for(int j = 0; j<n ; j++){
        printf("%d,", *(i+(n-1)));
        i--;
    }
    printf("}");
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;
    reverse(ptr, 10);
    return 0;
}