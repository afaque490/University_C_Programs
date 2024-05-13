// Write two C functions named LARGE() and Small(). In both of the functions pass an integer array of 10 elements. LARGE() function should return the largeest number from given array of 10 elements and SMALL() function should return the smallest number from the same given array of 10 elements. Call both of the functions from main() and display the results in main().

#include <stdio.h>

// Function to find the largest number in an array
int LARGE(int arr[]) {
    int max = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the smallest number in an array
int Small(int arr[]) {
    int min = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int array[10];
    
    // Taking input for the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    // Calling the functions to find the largest and smallest numbers
    int largest = LARGE(array);
    int smallest = Small(array);

    // Displaying the results
    printf("Largest number in the array: %d\n", largest);
    printf("Smallest number in the array: %d\n", smallest);

    return 0;
}
