//int a[7] = {15, 17, 12, 19, 13, 11, 16}; Construct a C program to find the smallest element
//from the given array.

#include <stdio.h>

int main() {
    int arr[5] = {15, 17, 12, 19, 13, 11, 16};
    int min = arr[0];

    for(int i = 1; i < 7; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest element in the array is: %d %d\n", min);
}
