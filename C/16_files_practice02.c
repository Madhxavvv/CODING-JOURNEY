/* Write a program to generate multiplication table of a given number in text
format. Make sure that the file is readable and well formatted.
*/

#include <stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("madhav.txt", "w");
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for(int i=1; i<=10; i++){
        fprintf(ptr, "%d*%d = %d\n", num, i, num*i);
        
    }
    fclose(ptr);
    return 0;
}
