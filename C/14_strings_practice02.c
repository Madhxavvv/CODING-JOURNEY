/* Write your own version of strlen function from <string.h> */

#include <stdio.h>
void count(char*, int);
void count(char* i, int n){
    int elements = 0;
    int j;
    for(j=0;j<n;j++)
    while(*i != '\0'){
        elements++;
        i++;
    }
    printf("The number of elements in the string is %d\n", elements);
}

int main(){
    char* st = "MADHAV";
    char* ptr = &st[0];
    count(ptr, 7);
    return 0;
}
