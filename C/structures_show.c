/*  Complete this show function to display the content of employee. */

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee);
void show(struct employee e){
    printf("Name: %s, Code: %d, Salary: %.2f", e.name, e.code, e.salary);
}

int main(){
    struct employee e1;

    strcpy(e1.name,"Madhav");
    e1.code = 123;
    e1.salary = 7.07;
    show(e1);
    return 0;
    
}