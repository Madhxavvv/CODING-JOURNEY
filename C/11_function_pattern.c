/* Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * * 
*/


#include <stdio.h>
int pattern(int);
int pattern(int n){
    for(int i=1;i<=n;i++){
        int j = 1;
        while(j<=(i+(i-1))){
            printf("*");
            j++;
        }
        printf("\n");

    }
    return 0;
}

int main(){
    int a;
    printf("Enter the value: ");
    scanf("%d", &a);
    pattern(a);
    return 0;

}
