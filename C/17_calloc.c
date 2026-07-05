#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr;
    int n;
    printf("Enter n");
    scanf("%d", &n);
    ptr = (int*)calloc(n, sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("%d", ptr[3]);
    return 0;
}
