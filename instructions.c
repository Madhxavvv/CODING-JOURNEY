#include <stdio.h>
int main(){
    int a = 5; // Type Declaration Instructions
    int b = a; // Type Declaration Instructions
    printf("The value of a and b are %d and %d respectively", a, b);
    int sum = a+b; //Arithmetic Instructions
    printf("\nThe sum of a and b is %d", sum);
    if(a>b){
        printf("A is greater");
    }                                  //Control Instructions
    else{
        printf("\nUndefined comparison");
    }
    return 0;
}