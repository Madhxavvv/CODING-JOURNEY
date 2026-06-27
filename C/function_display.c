#include <stdio.h>
void display(); //Function prototype
void display(){ //Function definition
    printf("Hi I am display!!\n");
}

int main(){
    printf("Welcome to the website!!\n");
    display(); //Function call
    return 0;
}