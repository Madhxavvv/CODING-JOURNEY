/* Create a string using double quotes and print its content using a loop*/

#include <stdio.h>
int main(){
    char st[] = "MADHAV";
    char* ptr = &st[0];
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
