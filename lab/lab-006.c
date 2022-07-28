/*
    Lab: 6
    Date: 2079-03-17
    Write a C program to test negative or positive number.
*/

#include "stdio.h"
int main() {
    int n;

    printf("\nEnter any number: ");
    scanf("%d", &n);

    if (n > 0) printf("\nEntered number is positive");
    else printf("\nEntered number is negative");
    return 0;
}