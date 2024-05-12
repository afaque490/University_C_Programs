// Write a C program to fill the entire screen with an asterisk character.

#include <stdio.h>

int main() {
    int i, j;

    // Loop to print asterisks
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
