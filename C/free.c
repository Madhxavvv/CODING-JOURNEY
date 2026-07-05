#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));
    ptr[0] = 1;
    free(ptr);
    printf("%d", ptr[0]);
    return 0;
}