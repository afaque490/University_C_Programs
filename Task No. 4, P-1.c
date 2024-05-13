// Write a user defined function FACTORIAL(), which calculates and returns the factorial of given number. Call this function from main() and display the final result from main() function.

#include <stdio.h>

// Function to calculate factorial
int FACTORIAL(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * FACTORIAL(num - 1);
}

int main() {
    int number;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &number);

    // Calling the function and displaying the result
    printf("Factorial of %d is: %d\n", number, FACTORIAL(number));

    return 0;
}
