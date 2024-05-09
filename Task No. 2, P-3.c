// A library charges a fine for every book returned late. For first 5 days the fine is Rs. 5, for 6-10 days fine is Rs. 10 and above days fine is Rs. 25. If you return the book after 30 days your membership will be cancelled. Write a C program to accept the number of days the membership is late to return the book and display the fine or the appropriate message.

#include <stdio.h>

int main() {
    int daysLate;
    int fine = 0;

    printf("Enter the number of days the book is late to return: ");
    scanf("%d", &daysLate);

    if (daysLate > 30) {
        printf("Your membership is cancelled!\n");
        return 0;
    }

    if (daysLate <= 5)
        fine = 5;
    else if (daysLate <= 10)
        fine = 10;
    else
        fine = 25;

    printf("Fine for returning the book %d days late: Rs. %d\n", daysLate, fine);

    return 0;
}
