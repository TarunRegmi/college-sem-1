/*
    Lab: 3
    Date: 2079-03-10
    Write a C program to calculate area of rectangle.
*/

#include "stdio.h"
int main() {
    int l, b, area;

    printf("\nEnter length of rectangle: ");
    scanf("%d", &l);
    printf("\nEnter breadth of rectangle: ");
    scanf("%d", &b);

    area = l * b;
    printf("\nArea of rectangle = %d", area);
    return 0;
}