/*
    Write a C program that reads N numbers in an array and then find prime numbers in that array.
*/

#include "stdio.h"
#define N 5

int main() {
    int numbers[N], i, j;

    printf("\nEnter any %d numbers\n", N);
    for (i=0; i < N; i++) scanf("%d", &numbers[i]);

    for (i=0; i < N; i++) {
        for (j=2; j < numbers[i]; j++) if (numbers[i] % j == 0) break;
        if (j==numbers[i]) printf("\n%d is prime number", numbers[i]);
    }
}