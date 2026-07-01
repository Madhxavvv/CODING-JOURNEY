#include <stdio.h>
int main(){
    char st[] = {'A','B','C','D'}; // character array
    char string[] = {'M','A','D','H','A','V','\0'}; // String is a character erray terminated with a null character
    printf("%c\n", st[0]); // printing character 
    printf("%s\n", string); //printing string
    char* ptr = &string[0]; 
    for(int i = 0; i<6; i++){ //printing string
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}