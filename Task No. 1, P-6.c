//  Write a C program that takes temperature in Fahrenhiet and converts it in Celscius degree and display it on screen.

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("Temperature in Celsius: %.2f°C\n", celsius);
    
    return 0;
}
