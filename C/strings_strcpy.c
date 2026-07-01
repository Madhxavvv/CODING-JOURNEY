#include <stdio.h>
#include <string.h>

int main(){
    char source[] = "MADHAV";
    char target[100];
    strcpy(target,source);
    printf("The target string is: ");
    puts(target);
    return 0;
}