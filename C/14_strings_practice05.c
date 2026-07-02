/*  Write a program to encrypt a string by adding 1 to the ascii value of its
characters */

#include <stdio.h>
int main(){
    char s1[] = "MADHAV";
    for(int i=0; i<6; i++){
        s1[i] = s1[i]+1;
    }
    s1[6] = '\0';
    printf("%s", s1);
    return 0;
}
