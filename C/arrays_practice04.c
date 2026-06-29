/* . Repeat problem 3 for a general input provided by the user using scanf. */

#include <stdio.h>
int main(){
    int table[10];
    printf("Enter 10 general values: ");
    for(int i = 0; i<10; i++){
        scanf("%d",&table[i]);
    }
    for(int i = 0; i<10; i++){
        printf("%d\n", table[i]);
    }
    return 0;
}