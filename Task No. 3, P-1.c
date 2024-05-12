// Write a C program to generate a table of a given number.

#include <stdio.h>

int main() {
    int number, i;

    // Input the number for which you want to generate the table
    printf("Enter a number: ");
    scanf("%d", &number);

    // Display the table of the given number
    printf("Table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}
