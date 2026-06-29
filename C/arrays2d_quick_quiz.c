/*  Create a 2-d array by taking input from the user. Write a display function to
print the content of this 2-d array on the screen. */

#include <stdio.h>
void display(int*, int, int);
void display(int* i, int row, int columns){
    int line = 0;
        for(int j=0; j<row; j++){
            for(int k=0; k<columns; k++){
                if(line<3){
                    printf("{%d %d}\n", *i, *(i+1));
                    i++;
                    i++;
                    line++;
                }
            }
        }

    }


int main(){
    int arr[3][2];
    printf("Enter values for array: ");
    for(int a = 0; a<3; a++){
        for(int b = 0; b<2; b++){
            scanf("%d", &arr[a][b]);
        }
    }
    int* ptr = &arr[0][0];
    display(ptr, 3, 2);
    return 0;
}