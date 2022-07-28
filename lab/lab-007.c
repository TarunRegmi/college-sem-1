/*
    Lab: 7
    Date: 2079-03-17
    Write a C program that reads three numbers and find largest one.
*/

#include "stdio.h"
int main() {
    int a, b, c;

    printf("\nEnter any three number: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c) printf("\n%d is largest number", a);
    else if (b>a && b>c) printf("\n%d is largest number", b);
    else printf("\n%d is largest number", c);

    return 0;
}