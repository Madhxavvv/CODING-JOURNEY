// Write a program to find whether a year entered by the user is a leap year or not.Take year as an input from the user.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    int leap = year%4;
    int rem1 = year%100;
    int rem2 = year%400;
    if ((leap==0&&rem1!=0)||rem2==0){ //LEAP YEAR IS WHEN A YEAR IS DIVISBLE BY 4 AND NOT DIVISIBLE BY 100 OR YEAR IS DIVISIBLE BY 400
        printf("\nThe year %d is a leap year", year);
    }
    else{
        printf("\nIt is not a leap year");
    }
    return 0;
}
