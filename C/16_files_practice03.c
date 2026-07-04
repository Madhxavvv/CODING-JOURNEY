/* Write a program to read a text file character by character and write its content
twice in separate file */

#include <stdio.h>
int main(){
    FILE* ptr;
    FILE* ptr2;
    FILE* ptr3;
    ptr = fopen("madhav.txt", "r");
    ptr2 = fopen("content1.txt", "w");
    ptr3 = fopen("content2.txt", "w");
    while(1){
        char c = fgetc(ptr);
        if(c == EOF){
            break;
        }
        fputc(c, ptr2);
        fputc(c, ptr3);

    }
    fclose(ptr);
    fclose(ptr2);
    fclose(ptr3);
    return 0;
}
