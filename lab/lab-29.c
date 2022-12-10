/*
    Lab: 29
    Date: 2079-04-29
    C program that reads a number and find its factorial using recursive function.
*/

#include <stdio.h>

int factorial(int);

int main() {
    int n;
    
    printf("\nEnter a number: ");
    scanf("%d", &n);

    printf("\nFacrorial of %d = %d", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if (n <= 1) return 1;
    else return n * factorial(n - 1); 
}