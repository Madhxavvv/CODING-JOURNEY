/* Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main(). */

#include <stdio.h>
int sum(int*, int*);
float avg(int*, int*);
int sum(int* a, int* b){
    int c = *a + *b;
    return c;
}
float avg(int* a, int* b){
    float d = sum(a, b);
    float e = (float)(d/2);
    printf("The average of a and b is %.2f\n", e);
    return e;
}
int main(){
    int num1 = 3;
    int num2 = 2;
    int display = sum(&num1, &num2);
    printf("The sum of a and b is %d\n", display);
    avg(&num1, &num2);
    return 0;
}
