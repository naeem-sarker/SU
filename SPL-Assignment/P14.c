//Develop a C program to find the area of a circle to follow the following statement:
//C function with arguments and with return value.

#include <stdio.h>
#define PI 3.1416

float areaOfCircle(float radius);

int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = areaOfCircle(radius);

    printf("Area of the circle is: %.2f\n", area);
}

float areaOfCircle(float radius) {
    return PI * radius * radius;
}
