// Write a program in C that takes width and length of a rectangle and then calculate and display the area and perimeter of the rectangle.

#include <stdio.h>

int main() {
    float width, length, area, perimeter;
    
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    
    // Calculate the area of the rectangle
    area = width * length;
    
    // Calculate the perimeter of the rectangle
    perimeter = 2 * (width + length);
    
    // Display the calculated area and perimeter
    printf("\nArea of the rectangle: %.2f square units\n", area);
    printf("Perimeter of the rectangle: %.2f units\n", perimeter);
    
    return 0;
}
