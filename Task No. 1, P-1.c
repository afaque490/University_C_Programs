// Write a program that takes an integer number input and prints cube of that number.
#include<stdio.h>

int num, cube;

int main(){
    printf("Enter a number to find it's cube: ");
    scanf("%d", &num);
    cube = num * num * num;
    printf("Cube of %d is %d" , num, cube);



}