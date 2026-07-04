/* Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700 */

#include <stdio.h>
int main(){
    FILE* ptr;
    ptr = fopen("madhav.txt", "w");
    char name1[10];
    char name2[10];
    printf("Enter two names: ");
    scanf("%s %s", name1, name2);
    int salary1;
    int salary2;
    printf("Enter salary for both: ");
    scanf("%d %d", &salary1, &salary2);
    int i = 0;
    while(name1[i]!='\0'){
        fputc(name1[i], ptr);
        i++;
    }
    fprintf(ptr, ", %d\n", salary1);
    int j = 0;
    while(name2[j]!='\0'){
        fputc(name2[j], ptr);
        j++;
    }
    fprintf(ptr, ", %d\n",salary2);
    fclose(ptr);
    return 0;
    

}