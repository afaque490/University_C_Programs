// Write a function Calculate() that receives 5 integers and returns the SUM, AVERAGE, and STANDANDARD DEVIATION of these numbers. Call this function from main() and print the result in main().



#include <stdio.h>
#include <math.h>

// Function to calculate sum, average, and standard deviation
void Calculate(int num1, int num2, int num3, int num4, int num5, int *sum, double *average, double *std_deviation) {
    *sum = num1 + num2 + num3 + num4 + num5;
    *average = (double)(*sum) / 5;

    // Calculate standard deviation
    *std_deviation = sqrt(((num1 - *average) * (num1 - *average) +
                           (num2 - *average) * (num2 - *average) +
                           (num3 - *average) * (num3 - *average) +
                           (num4 - *average) * (num4 - *average) +
                           (num5 - *average) * (num5 - *average)) / 5);
}

int main() {
    int num1, num2, num3, num4, num5, sum;
    double average, std_deviation;

    printf("Enter five integers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    // Calling the function to calculate sum, average, and standard deviation
    Calculate(num1, num2, num3, num4, num5, &sum, &average, &std_deviation);

    // Displaying the result
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
    printf("Standard Deviation: %.2lf\n", std_deviation);

    return 0;
}
