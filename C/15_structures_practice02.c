/* Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
The vectors must be two–dimensional. */

#include <stdio.h>
struct vector{
    int i;
    int j;
};
int sumVector(struct vector, struct vector);
int sumVector(struct vector v1, struct vector v2){
    int a = v1.i + v2.i;
    int b = v1.j + v2.j;
    printf("The sum of two vectors is %di + %dj\n", a, b);
    return 0;

}
int main(){
    struct vector V1,V2;
    for(int i=1; i<=2; i++){
        printf("Enter the horizontal and vertical components of vector %d:\n", i);
        int a,b;
        scanf("%d %d", &a, &b);
        if(i==1){
            V1.i = a;
            V1.j = b;
        }
        if(i==2){
            V2.i = a;
            V2.j = b;
        }
    }
    sumVector(V1,V2);
    return 0;
}
