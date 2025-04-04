//Create a recursion function to get factorial of a number.

#include <stdio.h>

int factorial(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is: %d\n", num, factorial(num));
}

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
