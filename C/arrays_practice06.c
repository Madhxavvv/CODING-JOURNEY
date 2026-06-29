/* Write a program containing functions which counts the number of positive
integers in an array. */

#include <stdio.h>
int count(int*, int);
int count(int* i, int n){
    int positive = 0;
    for(int j =0; j<n; j++){
        if(*i>=0){
            positive++;
        }
        i++;
    }
    return positive;
}

int main(){
    int arr[10] = {1,-2,3,-5,4,-6,7,-8,9,-10};
    int* ptr = arr;
    int c = count(ptr, 10);
    printf("The number of positive integers in the array is %d\n", c);
    return 0;
}