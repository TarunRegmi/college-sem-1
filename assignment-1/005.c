/*
    Write a C program to convert decimal number into binary number.
*/

#include <stdio.h>
int main() {
    unsigned long int decimal;
    double tmp, base=1, binary=0;

    printf("\nEnter A Decimal Number: ");
    scanf("%d", &decimal);

    printf("\nBinary Of Decimal %d = ", decimal);
    while (decimal != 0) {
        tmp = (decimal % 2) * base;
        base *= 10;
        binary += tmp;
        decimal /= 2;
    }
    printf("%.0f", binary);
}