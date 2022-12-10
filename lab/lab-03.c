/*
    Lab: 3
    Date: 2079-03-10
    C program that reads a number and tests whether it is multiple of 7 or not.
*/

#include <stdio.h>
int main() {
    int x;

    printf("\nEnter any number: ");
    scanf("%d", &x);

    if (x % 7 == 0) printf("\nEnter number %d is multiple of 7.", x);
    else printf("\nEnter number %d is not a multiple of 7.", x);
    return 0;
}