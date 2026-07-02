/* Write a program to count the occurrence of a given character in a string */

#include <stdio.h>
int main(){
    char st[] = "MADHAV";
    char C = 'A';
    int count = 0;
    for(int i = 0; i<6; i++){
        if(st[i] == C){
            count++;

        }
    }
    printf("The character occurs in the string %d times", count);
    return 0;
}
