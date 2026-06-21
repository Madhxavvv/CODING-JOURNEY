// ANY NON-ZERO VALUE IN C IS ALWAYS TRUE
#include <stdio.h>
int main()
{
    if (1)
    {
        printf("This if is executed");
    }
    if (2.4)
    {
        printf("\nThis if is also executed");
    }
    if (0)
    {
        printf("\nThis if is executed");
    }
    return 0;
}