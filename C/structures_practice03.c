/* Write a program to illustrate the use of arrow operator → in C */

#include <stdio.h>
struct employee{
    int code;
    float salary;
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    e1.code = 123;
    printf("%d", ptr->code);
    return 0;
    
}