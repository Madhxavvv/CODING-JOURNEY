/* Write problem 5’s structure using ‘typedef’ keywords. */

#include <stdio.h>
typedef struct complex{
    float real;
    float imaginary;
}ComplexNo;
int main(){
    ComplexNo c1,c2;
    c1.real = 3.00;
    c1.imaginary = 2.41;
    printf("%.2f + %.2f i", c1.real, c1.imaginary);
    return 0;

}