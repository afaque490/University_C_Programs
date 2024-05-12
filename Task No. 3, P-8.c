// Write a program to find the factorial value of any number entered through the keyboard.

#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int result = 1;
    // Calculate factorial iteratively
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

int main() {
    int number, result = 1;

    // Input number from the user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

    // Calculate factorial
    result = factorial(number);

    // Display the result
    printf("Factorial of %d is: %d\n", number, result);

    return 0;
}
