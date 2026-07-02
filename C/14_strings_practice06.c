/*Write a program to decrypt the string encrypted using encrypt function in
problem 6.*/

#include <stdio.h>
int main(){
    char s1[] = "MADHAV";
    for(int i=0; i<6; i++){
        s1[i] = s1[i]+1;
    }
    s1[6] = '\0';
    printf("Encrypted string: %s", s1);
    printf("\n");
    for(int i = 0; i<6; i++){
        s1[i] = s1[i]-1;
    }
    s1[6] = '\0';
    printf("Decrypted string: %s", s1);
    return 0;

}
