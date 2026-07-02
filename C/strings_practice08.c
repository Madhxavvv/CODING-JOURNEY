/*  Write a program to check whether a given character is present in a string or not. */

#include <stdio.h>
int main(){
    char s1[] = "MADHAV";
    char C;
    int flag = 0;
    printf("Enter a character: ");
    scanf("%c", &C);
    for(int i = 0; i<6; i++){
        if(s1[i] == C){
            flag = 1;
        }
    }
    if(flag){
        printf("\nYes the character is present in string");
    }
    else{
        printf("\nNo the character is not present in string");
    }
    return 0;
}