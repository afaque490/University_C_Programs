#include <stdio.h>

int main() {
    int ascii_code;

    // Prompt the user to enter an ASCII code
    printf("Enter an ASCII code (0 to 255): ");
    scanf("%d", &ascii_code);

    // Check if the ASCII code is within the valid range
    if (ascii_code >= 0 && ascii_code <= 255) {
        // Convert ASCII code to character and print
        printf("The character corresponding to ASCII code %d is: %c\n", ascii_code, (char)ascii_code);
    } else {
        // Print error message if ASCII code is out of range
        printf("Error: ASCII code must be in the range of 0 to 255.\n");
    }

    return 0;
}
