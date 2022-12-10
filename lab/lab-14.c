/*
    Lab: 14
    Date: 2079-03-31
    C program that reads two numbers and swap them without using third variable.
*/

#include <stdio.h>
int main() {
    int a, b;

    printf("\nEnter Any Two Number\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    a += b;
    b = a - b;
    a = a - b;

    printf("\nSwaped value\na = %d\nb = %d", a, b);
    return 0;
}