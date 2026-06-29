/* Write a program to accept marks of five students in an array and print them
on the screen. */

#include <stdio.h>
int main(){
    int marks[5];
    int i;
    printf("Enter marks of five students: ");
    for(i=0;i<5;i++){
        scanf("%d", &marks[i]);
    }
    for(i=0;i<5;i++){
        printf("Marks of student %d is %d\n", i+1, marks[i]);
    }
    return 0;
}