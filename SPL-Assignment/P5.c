// Write a program to find out the largest or smallest number among three variables.

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c) {
        printf("%d is Largest Number.\n", a);
    } else  if(b > c) {
        printf("%d is Largest Number.\n", b);
    } else {
        printf("%d is Largest Number.\n", c);
    }

    return 0;
}

