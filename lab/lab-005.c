/*
    Lab: 5
    Date: 2079-03-17
    Write a C program to test even / odd number.
*/

#include "stdio.h"
int main() {
    int n;

    printf("\nEnter any number: ");
    scanf("%d", &n);

    if (n%2) printf ("\nEntered number is odd");
    else printf ("\nEntered number is even");
    return 0;
}