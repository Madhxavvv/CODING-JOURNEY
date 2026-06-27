//Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>
float degconv(float);
float degconv(float C){
    float F = (((float)(C/5)*9)+32);
    return F;
}

int main(){
    float a;
    printf("Enter Temperature in degree Celsius: ");
    scanf("%f",&a);
    float c = degconv(a);
    printf("The temperature in degree fahrenheit will be %.2f", c);
    return 0;

}
