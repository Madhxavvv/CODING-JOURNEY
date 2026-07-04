/* Write a program to modify a file containing an integer to double its value. */
#include <stdio.h>
int main(){
    FILE* ptr;
    FILE* ptr2;
    ptr = fopen("integer.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    int new = num*2;
    ptr2 = fopen("integer.txt", "w");
    fprintf(ptr2, "%d", new);
    fclose(ptr);
    fclose(ptr2);
    return 0;

}
