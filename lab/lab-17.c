/*
    Lab: 17
    Date: 2079-04-06
    C program that finds sum of squares of first 100 natural numbers.
*/

#include <stdio.h>
int main() {
    long sum = 0;
    for (int i=1; i<=100; i++) sum += i*i;
    printf("\nSum of squares of first 100 natural numbers = %d", sum);
    return 0;
}