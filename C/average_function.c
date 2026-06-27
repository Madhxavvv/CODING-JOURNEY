/* Write a program using function to find average of three numbers */

#include <stdio.h>
float average(int, int, int);

float average(int a, int b, int c){
    int sum = a+b+c;
    return ((float)sum/3);
}

int main(){
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x,&y,&z);
    float o = average(x,y,z);
    printf("The average of %d, %d, %d is %.2f\n", x,y,z,o);
    return 0;
}