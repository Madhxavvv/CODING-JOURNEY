/*Create a two-dimensional vector using structures in C*/

#include <stdio.h>
typedef struct vector{
    int i;
    int j;
}Vector;
int main(){
    Vector v1;
    printf("Enter horizontal and vertical position of the vector: \n");
    scanf("%d %d", &(v1.i), &(v1.j) );
    printf("The vector is %di + %dj", v1.i, v1.j);
    return 0;
}