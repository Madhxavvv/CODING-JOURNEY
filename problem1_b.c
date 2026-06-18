/* Write a C Program to calculate the area of a rectangle:
b. Using inputs supplied by the user */

#include <stdio.h>
int main(){
    int length, breadth, area;
    printf("Hello User!! Kindly enter the length and breadth in the designated areas below:\n");
    printf("Length: ");
    scanf("%d", &length);
    printf("Breadth: ");
    scanf("%d", &breadth);
    area = length*breadth;
    printf("The area of the rectangle is: %d", area);
    return 0;
}