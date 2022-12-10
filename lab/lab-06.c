/*
    Lab: 6
    Date: 2079-03-17
    C program that reads three numbers and find the largest one.
*/

#include <stdio.h>
int main() {
    int a, b, c;

    printf("\nEnter Any Three Numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) printf("\nLargest number = %d", a);
    else if (b > a && b > c) printf("\nLargest number = %d", b);
    else printf("\nLargest number = %d", c);
    return 0;
}