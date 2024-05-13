// Write a user-define fuction in power (x, y) in C, to calculate the value of x^y. Call this function from main() and display the final result from main() function.

#include <stdio.h>

// Function to calculate power
double power(double x, int y) {
    double result = 1.0;
    int i;
    
    // Handling negative exponent
    if (y < 0) {
        x = 1 / x;
        y = -y;
    }

    for (i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int main() {
    double base, result;
    int exponent;

    printf("Enter base (x): ");
    scanf("%lf", &base);
    printf("Enter exponent (y): ");
    scanf("%d", &exponent);

    // Calling the function and displaying the result
    result = power(base, exponent);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);

    return 0;
}
