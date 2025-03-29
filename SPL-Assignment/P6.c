// Write a program to identify whether an input number is positive or negative.

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("%d is Positive Number.\n", num);
    } else  if(num < 0) {
        printf("%d is Negative Number.\n", num);
    } else {
        printf("%d is Zero.\n", num);
    }

    return 0;
}
