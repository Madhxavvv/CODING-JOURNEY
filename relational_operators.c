// >,<,>=,<=,==,!= ARE RELATIONAL OPERATORS USED TO COMPARE TWO VALUES

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Values of a,b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    int condition1 = a > b;
    int condition2 = a < b;
    int condition3 = a >= b;
    int condition4 = a <= b;
    int condition5 = a == b;
    int condition6 = a != b;
    printf("THE RESULTS ARE: CONDITION 1 : %d\nCONDITION 2: %d\nCONDITION 3: %d\nCONDITION 4 : %d\nCONDITION 5: %d\nCONDITION 6: %d", condition1, condition2, condition3, condition4, condition5, condition6);
    return 0;
}