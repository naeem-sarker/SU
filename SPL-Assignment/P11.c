//Construct C program to display the output as the following:
//1
//2 3
//4 5 6
//7 8 9 10

#include <stdio.h>

int main() {
    int cnt = 1;

    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%d ", cnt);
            cnt++;
        }
        printf("\n");
    }
}
