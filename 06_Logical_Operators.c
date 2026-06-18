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
    int value1 = condition1 && condition2; // && is Logical AND which returns 1 if both conditions are true and returns 0 if any of the condition is false
    int value2 = condition1 || condition2; // || is logical OR which returns 1 if any of the condition is true and returns 0 if both are false
    int value3 = !condition3; // ! is logical NOT which reverses the output
    printf("THE RESULTS OF THE CONDITIONS ARE: VALUE 1 : %d\nVALUE 2 : %d\nVALUE 3: %d", value1, value2, value3);
    return 0;
}
