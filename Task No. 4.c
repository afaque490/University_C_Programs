// The distance between two cities (in km) is input through the keyboard. Write a program in C to convert and print the distance in meters, feet, inches and centimeters.

#include <stdio.h>

int main() {
    float distance_km;
    float distance_m, distance_ft, distance_in, distance_cm;
    
    // Input distance in kilometers from the user
    printf("Enter the distance between two cities (in kilometers): ");
    scanf("%f", &distance_km);
    
    // Convert kilometers to meters, feet, inches, and centimeters.
    distance_m = distance_km * 1000;
    
    distance_ft = distance_km * 3280.84;
    
    distance_in = distance_km * 39370.1;
    
    distance_cm = distance_km * 100000;
    
    // Display the converted distances
    printf("\nDistance in meters: %.2f m\n", distance_m);
    printf("Distance in feet: %.2f ft\n", distance_ft);
    printf("Distance in inches: %.2f in\n", distance_in);
    printf("Distance in centimeters: %.2f cm\n", distance_cm);
    
    return 0;
}
