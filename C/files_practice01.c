/*Write a program to read three integers from a file. */

#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("madhav.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("%d %d %d", num1, num2, num3);
    fclose(ptr);
    return 0;
}
