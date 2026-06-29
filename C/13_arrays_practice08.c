/* Solve problem 7 using custom input by user*/

#include <stdio.h>
int main(){
    int arr[10][3];
    int k = 1;
    int l = 1;
    int m = 1;
    int line = 0;
    printf("Enter values for array: ");
    for(int i = 0; i<10; i++){
        for(int j = 0; j<3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i<10; i++){
        for(int j = 0; j<3; j++){
            if(line<15){
                printf("{%d %d %d}\n", arr[i][j], arr[i][j+1], arr[i][j+2]);
            }
            j++;
            j++;
            j++;

            line++;
        }
    }
    return 0;
}
