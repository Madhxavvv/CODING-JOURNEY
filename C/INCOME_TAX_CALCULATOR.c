// Write a program to calculate Income tax paid by an employee to the government as per the slabs mentioned below:
// Income Slab       Tax
//  2.5-5.0L          5%
//  5.0L-10.0L        20%
//  ABOVE 10.0L       30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include <stdio.h>
int main()
{
    int income;
    printf("Enter your income: ");
    scanf("%d", &income);
    float slab1 = ((float)(income - 250000) / 100) * 5;
    float slab2 = (((float)((income-500000) / 100)) * 20) + ((float)(250000/100) *5);
    float slab3 = (((float)((income-1000000) / 100)) * 30) +((float)(500000/100) * 20)+ ((float)(250000/100) *5);
    if (income > 1000000)
    {
        printf("\nYou have to pay %.2f as income tax", slab3);
    }
    else if (income > 500000 && income <= 1000000)
    {
        printf("\nYou have to pay %.2f as income tax", slab2);
    }
    else if (income >= 250000 && income <= 500000)
    {
        printf("\nYou have to pay %.2f as income tax", slab1);
    }
    else if (income < 250000){
        printf("\nGareeb!!! No tax");
    }
    else{
        printf("Kindly enter valid amount");
    }
    return 0;
}