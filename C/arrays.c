#include <stdio.h>
int main(){
    int marks[1000]; // RESERVE SPACE TO STORE 1000 INTEGERS
    int i;
    for(i=0;i<1000;i++){
        marks[i] = i+1;  // INDEX STARTS FROM 0 AND CAN GO TILL 999
    }
    for(i=0;i<1000;i++){
        printf("%d ", marks[i]);
    }
    return 0;
}