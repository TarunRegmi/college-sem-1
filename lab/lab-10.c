/*
    Lab: 10
    Date: 2079-03-24
    C program that reads a number and tests whether it is prime or composite.
*/

#include <stdio.h>
int main() {
    int num, i;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    for (i=2; i<num; i++) if (num % i == 0) break;
    if (i == num) printf ("\nEntered number %d is prime.", num);
    else printf ("\nEntered number %d is composite.", num);
    return 0;
}