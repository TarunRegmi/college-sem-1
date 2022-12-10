/*
    Lab: 7
    Date: 2079-03-17
    C program that reads three numbers and finds the middle one.
*/

#include <stdio.h>
int main() {
    int a, b, c;

    printf("\nEnter Any Three Numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a < b && a > c) || (a > b && a < c)) printf("\nMiddle one = %d", a);
    else if ((b < a && b > c) || (b > a && b < c)) printf("\nMiddle one = %d", b);
    else printf("\nMiddle one = %d", c);
    return 0;
}