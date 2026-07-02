/* Write a program to take string as an input from the user using %c and %s confirm
that the strings are equal. */

#include <stdio.h>
int main(){
    char st[7];
    printf("Enter a string: ");
    for(int i = 0; i<6; i++){
        scanf("%c", &st[i]);
        fflush(stdin);
    }
    printf("\n");
    st[6] = '\0';
    for(int i = 0; i<7; i++){
        printf("%c", st[i]);
    }
    char st2[7];
    printf("Enter another string: ");
    scanf("%s", st2);
    printf("\n");
    printf("%s", st2);
    char* ptr = &st[0];
    char* ptr2 = &st2[0];
    int guesses = 0;
    for(int i = 0; i<7; i++){
        if(*ptr == *ptr2){
            guesses++;
        }
        ptr++;
        ptr2++;
    }
    if(guesses==7){
        printf("\nHence verified");
    }
    return 0;
}
