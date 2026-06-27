/* Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2 */

#include <stdio.h>
float force(float);
float force(float m){
    float f = m*9.8;
    return f;

}

int main(){
    float mass;
    printf("Kindly enter the mass in kg: ");
    scanf("%f", &mass);
    float FORCE = force(mass);
    printf("The force of attraction on the body will be %.2f kg-m/s2", FORCE);
    return 0;

}
