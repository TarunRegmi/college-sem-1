/*
    Write a C program to convert decimal number into binary number.

    Used Variables:
    decimal     Entared decimal number
    tmp         tempory binary number
    base        base for any iteration
    binary      final binary value
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