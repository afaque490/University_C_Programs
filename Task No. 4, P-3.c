// Write a user-defined function area(r), to calculate the area of a circle, where r denotes the radius  of circle. Call this function from main() and display the final resulyt from main() function.

#include <stdio.h>

// Function to calculate the area of a circle
double area(double r) {
    return 3.14159265358979323846 * r * r; // Using the value of pi
}

int main() {
    double radius, result;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calling the function and displaying the result
    result = area(radius);
    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, result);

    return 0;
}
