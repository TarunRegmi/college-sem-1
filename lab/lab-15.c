/*
    Lab: 15
    Date: 2079-03-31
    C program that reads two numbers and print all prime numbers between these two numbers.
*/

#include <stdio.h>
int main() {
    int a, b, i, j;

    printf("\nEnter Any Two Numbers\nFirst: ");
    scanf("%d", &a);
    printf("Second: ");
    scanf("%d", &b);

    if (a > b) {
        a += b;
        b = a - b;
        a -= b;
    }

    printf("\nPrime numbers between %d and %d are", a, b);
    for (i=a; i<=b; i++) {
        for (j=2; j<i; j++) if (i % j == 0) break;
        if (i == j) printf("\n%d", i);
    }
    return 0;
}