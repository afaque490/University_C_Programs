// Write a user-define function isCapital(ch) that returns 1 if the given character type argument ch contains a capital letter, otherwise it returns 0 value. Call this function from main() and display an appropriate message to indicate that whether given argument is capital letter or small case letter.

#include <stdio.h>

// Function to check if the character contains a capital letter
int isCapital(char ch) {
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);

    if (isCapital(character))
        printf("The character '%c' is a capital letter.\n", character);
    else
        printf("The character '%c' is not a capital letter.\n", character);

    return 0;
}
