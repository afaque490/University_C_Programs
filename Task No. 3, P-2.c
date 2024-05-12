// Write a C program to generate following series. The output should look like as given blow:
// 1, 27, 125, 343, 729... initail number is input by user.

#include <stdio.h>

int main() {
    int initial_number, i;

    // Input the initial number from the user
    printf("Enter the initial number: ");
    scanf("%d", &initial_number);

    // Display the series
    printf("Series: ");
    for (i = 0; i < 10; i++) {
        printf("%d", initial_number * initial_number * initial_number);
        if (i != 9) {
            printf(", ");
        }
        initial_number += 2; // Incrementing by 2 because the series consists of cubes of consecutive odd numbers
    }
    printf("\n");

    return 0;
}

