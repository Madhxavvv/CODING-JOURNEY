#include <stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("madhav.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);
    ptr = fopen("madhav.txt", "a");
    fputc('c', ptr);
    fclose(ptr);
    return 0;
    
}
