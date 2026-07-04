#include <stdio.h>
#include <string.h>
typedef struct complex{
    float real;
    float imaginary;

}ComplexNo;

int main(){
    ComplexNo c1,c2;
    c1.real = 2.00;
    c1.imaginary = 3.07;
    printf("%.2f + i(%.2f)", c1.real, c1.imaginary);
    return 0;
}