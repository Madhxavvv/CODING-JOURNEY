#include <stdio.h>
int swap(int*, int*);
int swap(int* a, int* b){
    int temporary;
    int* temp = &temporary;
    *temp = *a;
    *a = *b;
    *b = *temp;
    return 0;

}

int main(){
    int num1 = 2, num2 = 3;
    swap(&num1, &num2);
    printf("The numbers after swapping are %d %d\n", num1, num2);
    return 0;
}

