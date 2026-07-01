#include <stdio.h>
#include <string.h>
int main(){
    int a  = strcmp("far", "joke");
    int b = strcmp("joke", "lion");
    if(a== -1){
        printf("far comes first than joke\n");
    }
    else{
        printf("Joke comes first than far\n");
    }
    if(b== -1){
        printf("joke comes first than lion\n");
    }
    else{
        printf("Lion comes first than joke\n");
    }
    return 0;
}