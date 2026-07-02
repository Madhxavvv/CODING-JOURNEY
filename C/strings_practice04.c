/* Write your own version of strcpy function from <string.h>*/

#include <stdio.h>
void copy(char*, char*, int);
void copy(char* k, char* i, int n){
    int j = 0;
    char* ptr = k;
    for(j= 0; j<(n-1); j++){
        *k = *i;
        i++;
        k++;
    }
    *k = '\0';
    printf("%s", ptr);
    
}
int main(){
    char s1[] = "MADHAV";
    char s2[7];
    char* ptr1 = &s1[0];
    char* ptr2 = s2;
    copy(ptr2, ptr1, 7);
    return 0;
}