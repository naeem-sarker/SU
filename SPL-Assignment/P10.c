//Write a program to print Even numbers from 1 to N in monitor
#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Even numbers from 1 to %d are: ", N);

    for(int i = 1; i <= N; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

