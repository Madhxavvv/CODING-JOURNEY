// Write a program to find greatest of four numbers entered by the user.

#include <stdio.h>
int main()
{
    int num1, num2, num3, num4;
    printf("Enter four numbers respectively: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    if (num4 >= num3 && num4 >= num2 && num4 >= num1)
    {
        printf("The greatest number is %d", num4);
    }
    else if (num3 >= num4 && num3 >= num2 && num3 >= num1)
    {
        printf("The greatest number is %d", num3);
    }
    else if (num2 >= num1 && num2 >= num3 && num2 >= num4)
    {
        printf("The greatest number is %d", num2);
    }
    else
    {
        printf("The greatest number is %d", num1);
    }
    return 0;
}