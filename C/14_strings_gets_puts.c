#include <stdio.h>
int main(){
    char st[100];
    printf("Enter a string: ");
    gets(st);
    printf("The string entered is given below: \n\n");
    puts(st); // puts output the string and move the cursor to next line
    return 0;
}

//gets and puts are used when dealing with multi word strings
