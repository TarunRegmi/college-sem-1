/*
    Lab: 8
    Date: 2079-03-17
    C program that reads a number and then find sum of its digits.
*/

#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("\nSum of digits of entered number = %d", sum);
    return 0;
}