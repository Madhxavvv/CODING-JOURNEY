#include <stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("madhav.txt", "w");
    int num = 69;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;   
}
