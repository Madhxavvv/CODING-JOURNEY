#include <stdio.h>
int main(){
    int a = 9;
    int b = 2;
    float c = a/b; // int/int gives an int thus 9/2 will give 4 not 4.5
    printf("The answer is %f", c);
    float d = (float)a/b;
    printf("\nThe answer is %f", d); // now we converted the division to float division and float/float gives a float thus the answer comes as 4.5
    int e = 4.5;
    printf("\nThe value of e is %d", e); // as e is int it cannot store float values and get demoted to int
    float f = 4;
    printf("\nThe value of f is %f", f); //as f is float it gets promoted to float from int

    return 0;
}