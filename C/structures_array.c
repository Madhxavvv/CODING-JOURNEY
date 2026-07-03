#include <stdio.h>
#include <string.h>
struct employee{
    char name[10];
    int code;
    float salary;
}; 

int main(){
    struct employee facebook[10];
    facebook[0].code = 123;
    strcpy(facebook[0].name, "Madhav");
    facebook[0].salary = 7.07;
    printf("Name: %s, Code: %d, Salary: %.2f", facebook[0].name, facebook[0].code, facebook[0].salary);
    return 0;

}