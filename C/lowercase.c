// Write a program to check whether a character is lowercase or uppercase

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    int ascii = (int)ch;
    if (122 >= ascii && ascii >= 97)
    {
        printf("The entered character %c is lowercase", ch);
    }
    else if (90 >= ascii && ascii >= 65)
    {
        printf("The entered character %c is uppercase", ch);
    }
    else
    {
        printf("The entered character %c is not an alphabet", ch);
    }
    return 0;
}