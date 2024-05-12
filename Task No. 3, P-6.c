// Write a C program to generate the Fibonacci series. 

#include <stdio.h>

int main() {
    int start_num, i;
    unsigned long long int term1 = 0, term2 = 1, nextTerm;

    // Input the starting number from the user
    printf("Enter the starting number for the Fibonacci series: ");
    scanf("%d", &start_num);

    // Display the Fibonacci series
    printf("Fibonacci Series:\n");

    // Display the first term
    printf("%d", start_num);

    // Display the next 14 terms of the series
    for (i = 1; i < 15; i++) {
        printf(", %llu", term2);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    printf("\n");

    return 0;
}
