#include <stdio.h>
int main(){

FILE* ptr;
if(ptr==NULL){
    printf("FILE DOES NOT EXIST");
}
else{
    printf("FILE EXIST\n");
}
ptr = fopen("madhav.txt", "r");
int num;
fscanf(ptr, "%d", &num);
printf("%d\n", num);
fscanf(ptr, "%d", &num);
printf("%d", num);
fclose(ptr);
return 0;
}