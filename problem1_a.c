/* Write a C Program to calculate the area of a rectangle:
a. Using hard coded inputs. */

#include <stdio.h>
int main(){
    int length, breadth, area;
    length = 10;
    breadth = 5;
    area = length * breadth;
    printf("The area of the rectangle is %d", area);
    return 0;
}