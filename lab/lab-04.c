/*
    Lab: 4
    Date: 2079-03-10
    C program that reads length and breadth of a rectangle and find its area and perimeter.
*/

#include <stdio.h>
int main() {
    int length, breadth, area, perimeter;

    printf("\nEnter the length: ");
    scanf("%d", &length);
    printf("\nEnter the breadth: ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\nArea of the rectangle = %d", area);
    printf("\nPerimeter of the rectangle = %d", perimeter);
    return 0;
}