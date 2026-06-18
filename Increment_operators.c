#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter Values of a,b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    d = a++; // a++ is post increment in this value of a is assigned directly to d and then value of a is increased by 1
    c = ++b; 
    e = --d; // --d is pre decrement in this first value of d is decreased by 1 and then assigned to e
    a = ++b;
    b = --c;
    c = ++e;
    printf("THE VALUES OF a,b,c,d,e are %d %d %d %d %d", a,b,c,d,e);
    return 0;
}