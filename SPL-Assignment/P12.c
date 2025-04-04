// a[5] = {15, 17, 12, 19, 13}; Construct a C program to find the sum and average of given
// array elements. You can take array elements from user as well.
#include <stdio.h>

int main() {
    int sum = 0;
    float average;
    int arr[5] = {15, 17, 12, 19, 13};

    for(int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    average = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
}
