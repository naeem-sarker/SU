// Write a program to convert Fahrenheit to Celsius.

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter temperature to Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}
