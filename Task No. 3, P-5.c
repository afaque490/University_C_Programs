// Write a C program that gets 10 numbers as input from the user and calculates and displays the SUM and AVERAGE on screen.

#include <stdio.h>

int main() {
    int i, num, sum = 0;
    float average;

    printf("Enter 10 numbers:\n");

    // Loop to get input from the user and calculate sum
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }

    // Calculate average
    average = (float)sum / 10;

    // Display the sum and average
    printf("Sum of the numbers: %d\n", sum);
    printf("Average of the numbers: %.2f\n", average);

    return 0;
}
