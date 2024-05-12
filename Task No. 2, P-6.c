// If the ages of three brothers are input through the keyboard, write a C program to determine the eldest of the three usning logical operators.

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

    // Determine the eldest brother using logical operators
    if (age1 >= age2 && age1 >= age3) {
        printf("The eldest brother is %d years old.\n", age1);
    } else if (age2 >= age1 && age2 >= age3) {
        printf("The eldest brother is %d years old.\n", age2);
    } else {
        printf("The eldest brother is %d years old.\n", age3);
    }

    return 0;
}
