#include <stdio.h>
int main(){
    int arr[3] = {1,2,3};
    int* ptr = arr; // same as int* ptr = &arr[0]
    for(int i=0;i<3;i++){
        printf("The value at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;

}