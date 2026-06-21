#include <stdio.h>
int main()
{
    int age = 15;
    if (age > 5)
    {
        if (age % 5 == 0)
        {
            if (age < 18)
            {
                printf("\nYour age is greater than 5");
                printf("\nYour age is a multiple of 5");
                printf("\nYou cannot drive");
            }
        }
    }

    return 0;
}