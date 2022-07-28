/*
    Lab: 1
    Date: 2079-03-10
    Write a C program that reads two numbers from user and find their sum.
*/

#include "stdio.h"
int main() {
    int i, j, sum;

    printf("\nEnter any two number\n");
    scanf("%d%d", &i, &j);

    sum = i + j;
    printf("\nSum of entered number = %d\n", sum);
    return 0;
}