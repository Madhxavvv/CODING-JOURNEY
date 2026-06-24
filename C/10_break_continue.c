#include <stdio.h>
int main(){
    int i;
    i = 0;
    int n;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (i=1;i<=n;i++){
        if(i==3){
            continue; //continue makes the loop to skip that iteration and move forward
        }
        printf("%d\n",i);

        if(i==7){
            break; // break makes the loop to exit on that iteration
        }

    }
    return 0;
}
