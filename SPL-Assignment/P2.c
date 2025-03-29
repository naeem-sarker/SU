// Write a program to calculate area of circle, rectangle and right-angle triangle.

#include <stdio.h>
#define PI 3.1416

int main()
{
    float radius, length, width, base, height;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    printf("Are of Circle: %.2f\n", PI * radius * radius);

    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);

    printf("Are of Rectangle: %.2f\n", length * width);

    printf("Enter base and height of the right-angle triangle: ");
    scanf("%f %f", &base, &height);

    printf("Are of Right-Angle Triangle: %.2f\n", 0.5 * base * height);

    return 0;
}

