//  Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another. You are not allowed to use pow() built in function.

#include <stdio.h>

// Function to calculate power without using pow() function
double power(double base, int exponent) {
    double result = 1.0;
    
    // If the exponent is negative, invert the base and exponent
    if (exponent < 0) {
        base = 1 / base;
        exponent = -exponent;
    }
    
    // Multiply the base 'exponent' times
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    
    return result;
}

int main() {
    double base;
    int exponent;
    
    // Input base and exponent from the user
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    // Calculate the result
    double result = power(base, exponent);
    
    // Display the result
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);
    
    return 0;
}
