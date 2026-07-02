/* Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice. */

#include <stdio.h>
void slice(char*, int, int, int);
void slice(char* i, int m, int n, int o){
    char st3[o];
    int k = 0;
    int j = 0;
    for(j = 0; j<o; j++){
        if(m>j||n<j){
            st3[k] = *i;
            k++;
        }
        i++;
    }
    st3[k] = '\0';
    printf("%s", st3);
}

int main(){
    char st[] = "MADHAV";
    char* ptr = &st[0];
    int a;
    int b;
    printf("Enter the initial and final position of slicing: ");
    scanf("%d %d", &a, &b);
    slice(ptr, a, b, 7);
    return 0;
}
