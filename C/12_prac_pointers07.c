/* Try problem 3 using call by value and verify that it does not change the value of
the said variable. */

#include <stdio.h>
void change(int);
void change(int a){
    a = a * 10;
}
int main(){
    int i = 30;
    change(i);
    printf("The changed value of i is %d\n", i);
    return 0;
}

// NO CHANGE IF CALLED BY CALL BY VALUE
