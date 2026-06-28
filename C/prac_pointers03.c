/* Write a program to change the value of a variable to ten times of its current
value. */

#include <stdio.h>
void change(int*);
void change(int* a){
    *a = *a * 10;
}
int main(){
    int i;
    printf("Enter a number for variable i : ");
    scanf("%d", &i);
    change(&i);
    printf("The changed value of i is %d\n", i);
    return 0;
}