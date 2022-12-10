/*
    Lab: 31
    Date: 2079-04-29
    C program that finds nth Fibonacci number using recursive function.
*/

#include <stdio.h>
int fibo(int);

int main() {
    int term, i;

    printf("\nEnter a number: ");
    scanf("%d", &term);

    for (i=0; i<term; i++) printf("%d ", fibo(i));
    return 0;
}

int fibo(int i) {
    if (i <= 1) return i;
    else return (fibo(i-1) + fibo(i-2));
}