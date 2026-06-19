/* Write a C Program to calculate Simple Interest for a set of values representing principal, number of years and rate of interest*/

#include <stdio.h>
int main(){
    float principal,time,rate,interest;
    printf("WELCOME TO INTEREST CALCULATOR!!\nKINDLY ENTER PRINCIPAL:\nTIME:\nRATE OF INTEREST:");
    scanf("%f %f %f", &principal, &time, &rate);
    interest = (principal*rate*time*0.01);
    printf("The Simple Interest is %f", interest);
    return 0;
}
