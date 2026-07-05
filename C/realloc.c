#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int* ptr;
    ptr = (int*)malloc(n*sizeof(int));
    ptr[4] = 5;
    printf("%d\n", ptr[4]);
    ptr = realloc(ptr, 10*sizeof(int));
    ptr[9] = 6;
    printf("%d", ptr[9]);
    return 0;
}