/*
    Write a C program to find sum of cubes of natural numbers from 1 to ‘n’ where n is user input
*/

#include "stdio.h"
int main() {
    int n, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &n);
    printf("\nSum of cubes of first %d natural number = ", n);

    for (int i=1; i <= n; i++) sum += (i*i*i);
    printf("%d", sum);
    return 0;
}