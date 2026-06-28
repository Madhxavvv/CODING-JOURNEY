/* Write a function and pass the value by reference */

#include <stdio.h>
void change(int*);
void change(int* a){
    *a = 6;
}
int main(){
    int i = 72;
    printf("The value of i before change is %d\n", i);
    change(&i);
    printf("The value of i after change is %d\n", i);
    return 0;
}