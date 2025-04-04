//The table shows the grading policy of Sonargaon University. Create a C program to find
//the grade of a particular course according to the following table. Input must be taken
//from user.
//
//Marks (M) Grade
//>100 or <0 Invalid
//80 – 100 A+
//70 – 79 A
//
//60 – 69 A-
//50 – 59 B
//
//40 – 49 C
//33-39 D
//00– 32 F
#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks (0-100): ");
    scanf("%d", &marks);

    if(marks > 100 || marks < 0) {
        printf("Invalid\n");
    } else if(marks >= 80) {
        printf("A+\n");
    } else if(marks >= 70) {
        printf("A\n");
    } else if(marks >= 60) {
        printf("A-\n");
    } else if(marks >= 50) {
        printf("B\n");
    } else if(marks >= 40) {
        printf("C\n");
    } else if(marks >= 33) {
        printf("D\n");
    } else {
        printf("F\n");
    }
}
