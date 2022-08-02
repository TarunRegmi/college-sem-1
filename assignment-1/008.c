/*
    Write a program that finds sum of the series 1+2+4+8+…….. up to n terms using while loop

    Used Variables:
    n       toal number of term in given series
    p       power for particular term
    tn      nth term
    sum     total sum of given series
*/

#include <stdio.h>
int main() {
    int n, p, tn, sum = 0;

    printf("\nEnter of number term of series 1 + 2 + 4 + 8 + ......\n");
    scanf("%d", &n);

    if (n < 0) return 0;
    while (n > 0) {
        p = n - 1;
        tn = 1;
        while (p > 0) {
            tn *= 2;
            p--;
        }
        sum += tn;
        n--;
    }

    printf("\nSum of given series = %d", sum);
    return 0;
}