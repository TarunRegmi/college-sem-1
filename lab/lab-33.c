/*
    Lab: 33
    Date: 2079-04-03
    C program to compute sum of digits of a number using recursive function.
*/

#include <stdio.h>
int sum(int);

int main() {
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nSum of digits = %d", sum(num));
    return 0;
}

int sum(int num) {
    if (num < 1) return 0;
    else return (num % 10 + sum(num / 10)); 
}