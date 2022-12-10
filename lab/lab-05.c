/*
    Lab: 5
    Date: 2079-03-17
    C program reads radius of circle and finds its area and circumference.
*/

#include <stdio.h>
#define PI 3.14

int main() {
    int r;
    float a, c;

    printf("\nEnter radius of the circle: ");
    scanf("%d", &r);

    a = PI * r * r;
    c = 2 * PI * r;

    printf("\nArea of the circle = %f", a);
    printf("\nCircumference of the circle = %f", c);
    return 0;
}