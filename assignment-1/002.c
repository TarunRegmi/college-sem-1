/*
    Write a C program that asks user to read an integer number n and calculate sum of all natural numbers from 1 to n
*/

#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("\nEnter any number: ");
    scanf("%d", &n);

    for (int i=1; i <= n; i++) sum += i;
    printf("\nSum of firt %d natural number = %d", n, sum);
    return 0;
}