/* Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively. */

#include <stdio.h>
int main(){
    int arr[10][3];
    int k = 1;
    int l = 1;
    int m = 1;
    int line = 0;
    for(int i = 0; i<10; i++){
        for(int j = 0; j<3; j++){
            if(j==0){
                arr[i][j] = 2*k;
                k++;
            }
            if(j==1){
                arr[i][j] = 7*l;
                l++;
            }
            if(j==2){
                arr[i][j] = 9*m;
                m++;
            }


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
