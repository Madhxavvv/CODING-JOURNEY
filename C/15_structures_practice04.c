/*  Write a program with a structure representing a complex number.*/

#include <stdio.h>
struct complexNo{
    float real;
    float imaginary;
};
int main(){
    struct complexNo c1,c2;
    c1.real = 3;
    c1.imaginary = 4;
    c2.real = 5;
    c2.imaginary = 6;
    printf("THE 2 COMPLEX NUMBERS ARE %.2f + %.2fi and %.2f + %.2fi", c1.real,c1.imaginary, c2.real, c2.imaginary);
    return 0;
    
}
