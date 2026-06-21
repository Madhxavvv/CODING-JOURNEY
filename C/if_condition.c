#include <stdio.h>
int main()
{
    int age = 15;
    if (age > 5)
    {
        printf("We are inside if block");
        printf("\nYour age is greater than 5");
    }
    if (age % 5 == 0)
    {
        printf("\nWe are inside another if block");
        printf("\nYour age is a multiple of 5");
    }
    return 0;
}