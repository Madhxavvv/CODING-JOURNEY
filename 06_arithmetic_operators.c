#include <stdio.h>
int main(){
    int a,b,sum,product,difference;
    double divide,remainder;
    printf("Kindly Enter the values of a & b respectively:");
    scanf("%d %d", &a, &b);
    sum = a+b;     // + is addition operator
    difference = a-b; // - is subtraction operator
    product = a*b; // * is multiplication operator
    divide = (double)a/b; // / is division operator
    remainder = a%b; // % is modulus(remainder) operator
    printf("SUM: %d\nDIFFERENCE: %d\nPRODUCT: %d\nDIVIDE: %.2f\nREMAINDER: %.2f", sum, difference, product, divide, remainder);
    return 0;

}
