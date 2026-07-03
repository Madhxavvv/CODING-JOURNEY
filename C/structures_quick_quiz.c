/* Write a program to store the details of 3 employees from user defined data.
Use the structure declared above. */

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
}; 

int main(){
    struct employee e1,e2,e3;
    // e1.code;
    // e2.code;
    // e3.code;
    // e1.salary;
    // e2.salary;
    // e3.salary;
    for(int i = 1; i<=3; i++){
        printf("User e%d kindly enter your details as follows: Name, Code & Salary", i);

        char* a;
        int b;
        float c;

        
        scanf("%s %d %f", a, &b, &c);
        if(i==1){
            strcpy(e1.name, a);
            e1.code = b;
            e1.salary = c;
        }
        else if(i==2){
            strcpy(e2.name, a);
            e2.code = b;
            e2.salary = c;
        }
        else if(i==3){
            strcpy(e3.name, a);
            e3.code = b;
            e3.salary = c;
        }
    }
    for(int i = 1; i<=3; i++){
        if(i==1){
            char* a = e1.name;
            int b = e1.code;
            float c = e1.salary;
            printf("Name: %s, Code: %d, Salary: %f\n", a, b ,c); 
        }
        else if(i==2){
            char* a = e2.name;
            int b = e2.code;
            float c = e2.salary;
            printf("Name: %s, Code: %d, Salary: %f\n", a, b ,c );
        }
        else if(i==3){
            char* a = e3.name;
            int b = e3.code;
            float c = e3.salary;
             printf("Name: %s, Code: %d, Salary: %f\n", a, b ,c );
        }
    
       
    }
    return 0;
}