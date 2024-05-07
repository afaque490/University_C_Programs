// If the marks obtained bya student in five subjects are input through the keyboard, find out the aggregate marks, percentage and grade obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
// For gardes we assume above 80 are A grade, above 70 are B grade, above 60 are c grade, and above 50 is d grade, and blow 50 are fail.

#include <stdio.h>

int main() {
    int marks[5], totalMarks = 0;
    float percentage;
    
    // Input marks for five subjects from the user
    printf("Enter marks obtained in five subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }
    
    // Calculate aggregate marks and percentage
    percentage = (float)totalMarks / 5;
    
    // Display aggregate marks and percentage
    printf("\nAggregate marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    
    // Determine grade based on percentage
    char grade;
    if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F'; // Fail
    
    // Display grade
    printf("Grade: %c\n", grade);
    
    return 0;
}
