#include <stdio.h>
int main(){
    int cgpa[3] = {9,8,8}; //CAN BE INITIALISED LIKE THIS
    int marks[] = {10,12,15}; // ALSO BE INITIALISED LIKE THIS
    char grade[3]; 
    int i;
    grade[0] = 'A';
    grade[1] = 'B'; // AND LIKE THIS ALSO
    grade[2] = 'B';

    for(i=0;i<3;i++){
        printf("The marks of %d st student is %d and scored %d cgpa with %c grade\n", i+1, marks[i], cgpa[i], grade[i] );

    }
    return 0;

    
}
