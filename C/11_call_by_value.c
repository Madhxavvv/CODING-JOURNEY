#include <stdio.h>
int change(int);
int change(int a){
    a = 77;
    return 0;
}

int main(){
    int b = 22;
    change(b); //copy of b is passed to the change function so only in change function the value is changed and in the main function the original value remains same
    printf("%d\n", b);
    return 0;
}
