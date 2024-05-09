// Write a c program to determine whether the character entered through keyboard is a capital letter, small-case letter, number or a symbol.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("%c is a capital letter.\n", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is a small-case letter.\n", ch);
    else if(ch >= '0' && ch <= '9')
        printf("%c is a number.\n", ch);
    else
        printf("%c is a symbol.\n", ch);

    return 0;
}
