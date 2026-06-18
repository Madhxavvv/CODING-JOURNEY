#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter Values of a,b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    b += a;  // += is equivalent to b = b+a
    c += b;
    a *= b; // *= is equivalent to a = a*b
    e %= b; // %= is equivalent to e = e%b
    d -= e; // -= is equivalent to d = d-e
    printf("THE VALUES OF a,b,c,d and e are: %d %d %d %d %d", a, b, c, d, e);
    return 0;
}