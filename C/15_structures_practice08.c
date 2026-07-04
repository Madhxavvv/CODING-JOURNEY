/* Write a structure capable of storing date & compare those
dates. */

#include <stdio.h>
typedef struct dates{
    int date;
    int month;
    int year;
}Dates;
int main(){
    Dates d1,d2;
    d1.date = 23;
    d1.month = 12;
    d1.year = 2026;
    d2.date = 22;
    d2.month = 11;
    d2.year = 2025;
    int DATE = d1.date - d2.date;
    if (DATE>0){
        printf("d1 is %d days ahead", DATE);
    }
    else{
        printf("d2 is %d days ahead", d2.date - d1.date);
    }
    int MONTH = d1.month - d2.month;
    if(MONTH>0){
        printf(" d1 is %d months ahead", MONTH);
    }
    else{
        printf(" d2 is %d months ahead", d2.month - d1.month);
    }
    int YEAR = d1.year - d2.year;
    if(YEAR>0){
        printf(" d1 is %d year ahead", YEAR);
    }
    else{
        printf(" d2 is %d year ahead", d2.year - d1.year);
    }
    return 0;
}
