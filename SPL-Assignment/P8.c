// Write a C program to find number of days in a month using switch case.
#include <stdio.h>

int main() {
    int month;
    printf("Enter month number between (1-12): ");
    scanf("%d", &month);

    switch(month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30\n");
        break;
    case 2:
        printf("28\n");
        break;
    }
}

