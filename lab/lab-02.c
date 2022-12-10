/*
    Lab: 2
    Date: 2079-03-10
    C program that reads a number test whether it even or odd.
*/

#include <stdio.h>
int main() {
    int x;
    
    printf("Enter Any Number: ");
    scanf("%d", &x);

    if (x % 2 == 0) printf("\nEntered Number Is Even");
    else printf("\nEntered Number Is Odd");
    return 0;
}