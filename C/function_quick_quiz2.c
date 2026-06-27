//Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("Enter the side of square: ");
    scanf("%d", &side);
    printf("The area of square of size %d is %f\n", side, pow(side, 2));
    return 0;
}