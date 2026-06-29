#include <stdio.h>
void printarray(int*, int);
void printarray(int* i, int n){
    int j = 0;
    while(j<n){
        printf("%d ", *i);
        i++;
        j++;

    }
}

int main(){
    int arr[] = {3,2,1};
    int* ptr = arr;
    printarray(ptr, 3);
    return 0;
}