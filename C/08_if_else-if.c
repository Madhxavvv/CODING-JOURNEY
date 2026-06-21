#include <stdio.h>
int main()
{
    int age;
    printf("Enter Your Age:");
    scanf("%d", &age);
    if (age > 60)
    {
        printf("\nYou are a senior citizen and you can drive");
    }
    else if (age > 40)
    {
        printf("\nYou can drive and you are an elder");
    }
    else if (age > 18)
    {
        printf("\nYou can drive");
    }
    else
    {
        printf("\nYou are not allowed to drive");
    }
    return 0;
}
