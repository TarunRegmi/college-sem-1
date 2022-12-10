/*
    Lab: 16
    Date: 2079-04-06
    C program that finds sum of first 100 natural numbers (1+2+3+ ... +100).
*/

#include <stdio.h>
int main() {
    int sum = 0;
    for (int i=1; i<=100; i++) sum += i;
    printf("\nSum of first 100 natural numbers = %d", sum);
    return 0;
}