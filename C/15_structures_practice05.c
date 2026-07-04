/*  Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.
*/

#include <stdio.h>
struct complexNo{
    float real;
    float imaginary;
};
void display(struct complexNo *ptr);
void display(struct complexNo *ptr){
    for(int i=0; i<5; i++){
      printf("The complex number is %f + %fi \n ", ptr->real, ptr->imaginary);
      ptr++;
    }
}


int main(){
    struct complexNo complex[5];
    for(int i = 0; i<5; i++){
        printf("Enter real and imaginary values for %d complex No.\n", i+1);
        scanf("%f %f", &(complex[i].real), &(complex[i].imaginary));
    }
    struct complexNo *ptr;
    ptr = &complex[0];
    display(ptr);
    return 0;
}
