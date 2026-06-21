#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    if (age > 5)
    {
        printf("\nWe are inside if block");
        printf("\nYour age is greater than 5");
    }
    else
    {
        printf("No, Your age is not greater than 5");
    }
    return 0;
}
