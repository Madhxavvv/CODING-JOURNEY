/* Write a Program to convert Celsius to Fahrenheit*/
#include <stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("WELCOME USER TO DEGREE CONVERSION!!\nKINDLY ENTER THE TEMPERATURE IN CELSIUS: ");
    scanf("%f", &celsius);
    fahrenheit = (9.0/5.0) * celsius + 32;
    printf("THE TEMPERATURE IN FAHRENHEIT WOULD BE: %f", fahrenheit);
    return 0;
}
