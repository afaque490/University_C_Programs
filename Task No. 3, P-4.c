//  Write a C program that takes charcter input from the user until he/she presses enter key. Then, the program calculates the total number of characters, spaces and words. You are not allowed to use stren() function or arrays.

#include <stdio.h>

int main() {
    char ch;
    int char_count = 0, space_count = 0, word_count = 0;
    int in_word = 0; // Flag to track if we are inside a word

    printf("Enter any text:\n");

    // Loop to read characters until Enter is pressed
    while ((ch = getchar()) != '\n') {
        char_count++;

        // Check if the current character is a space
        if (ch == ' ') {
            space_count++;
            // If we were inside a word, it's the end of the word
            if (in_word) {
                in_word = 0;
                word_count++;
            }
        } else {
            // If the current character is not a space, we are inside a word
            in_word = 1;
        }
    }

    // After Enter is pressed, check if the last character was a part of a word
    if (in_word) {
        word_count++;
    }

    // Display the results
    printf("\nTotal characters: %d\n", char_count);
    printf("Total spaces: %d\n", space_count);
    printf("Total words: %d\n", word_count);

    return 0;
}
