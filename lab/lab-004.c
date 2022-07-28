/*
    Lab: 4
    Date: 2079-03-10
    Write a C program to calculate area of circle.
*/

#include "stdio.h"
int main() {
    float r, area;

    printf("\nEnter radius of circle: ");
    scanf("%f", &r);

    area = 22 * r * r / 7;
    printf("\nArea of circle = %f", area);
    return 0;
}