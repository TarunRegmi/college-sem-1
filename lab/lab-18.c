/*
    Lab: 18
    Date: 2079-04-06
    C program to multiplication table from 1-20.
*/

#include <stdio.h>
int main() {
    int i, j;
    for (i=1; i<=20; i++) {
        printf("\nMultiplication Table Of %d\n", i);
        for (j=1; j<=10; j++) printf("  %d * %d = %d\n", i, j, i*j);
    }
    return 0;
}