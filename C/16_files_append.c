#include <stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("madhav.txt", "a");
    int num = 70;
    fprintf(ptr, "%d", num);
    fclose(ptr);
    return 0;
}
