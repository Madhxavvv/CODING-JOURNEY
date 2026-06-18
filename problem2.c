/* Write a C Program to calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height */
#include <stdio.h>
int main()
{
    float radius, height, area, volume;
    printf("ENTER THE RADIUS OF CIRCLE: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("THE AREA OF THE CIRCLE IS: %f", area);
    printf("\nENTER THE HEIGHT OF CYLINDER: ");
    scanf("%f", &height);
    volume = area * height;
    printf("\nTHE VOLUME OF THE CYLINDER IS: %f", volume);
    return 0;
}