/*
    Lab: 11
    Date: 2079-03-24
    C program that reads a number and then finds its reverse.
*/

#include <stdio.h>
int main() {
    int num, revNum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }

    printf("\nReverse of entered numer = %d", revNum);
    return 0;
}