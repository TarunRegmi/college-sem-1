/*
    Lab: 13
    Date: 2079-03-31
    C program that reads a numbers and finds sum of cubes of digits.
*/

#include <stdio.h>
int main() {
    int num, d, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        d = num % 10;
        sum = sum + d * d * d;
        num /= 10;
    }

    printf("\nSum = %d", sum);
    return 0;
}