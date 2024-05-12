//  If the ages of three brothers is input through the keyboard, write a C program to determine the youngest of the three using a nested if() statement without using logical operators.

#include <stdio.h>

int main() {
    int age1, age2, age3;

    // Input ages from the user
    printf("Enter age of first brother: ");
    scanf("%d", &age1);
    printf("Enter age of second brother: ");
    scanf("%d", &age2);
    printf("Enter age of third brother: ");
    scanf("%d", &age3);

    // Nested if statements to determine the youngest brother
    if (age1 <= age2) {
        if (age1 <= age3) {
            printf("The youngest brother is %d years old.\n", age1);
        } else {
            printf("The youngest brother is %d years old.\n", age3);
        }
    } else {
        if (age2 <= age3) {
            printf("The youngest brother is %d years old.\n", age2);
        } else {
            printf("The youngest brother is %d years old.\n", age3);
        }
    }

    return 0;
}
