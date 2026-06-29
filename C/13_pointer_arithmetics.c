#include <stdio.h>
int main(){
    int i = 72;
    int *ptr = &i;
    printf("The address of i is %u\n", ptr);
    printf("The value at address of i is %d\n", *ptr);
    ptr++; // INCREMENT THE ADDRESS TO NEXT BOX ,i.e, if int variable so next memory box is after 4 bytes 
    printf("The value of address is now %u\n", ptr);
    ptr--; // DECREMENT THE ADDRESS TO PREVIOUS BOX , i.e, if int variable so previous memory box is before 4 bytes
    printf("The value of address is now %u\n", ptr);
    return 0;
}
