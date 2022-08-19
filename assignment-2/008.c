/*
    Two numbers are called twin prime if they are prime and their difference is no more than 2. Write a C program reads ‘N’ numbers in an array and check whether the array contains twin primes or not
*/

#include "stdio.h"
#define N 20

int main() {
    int numbers[N], i, j, prime[N], c=0, big;

    printf("\nEnter any %d numbers\n", N);
    for (i=0; i < N; i++) scanf("%d", &numbers[i]);

    for (i=0; i < N; i++) {
        for (j=2; j < numbers[i]; j++) if (numbers[i] % j == 0) break;
        if (numbers[i] == j) {
            prime[c] = numbers[i];
            c++;
        }
    }

    for (i=0; i < c-1; i++) {
        for (j=i+1; j < c; j++) {
            if (prime[i] > prime[j]) {
                big = prime[i];
                prime[i] = prime[j];
                prime[j] = big;
            }
        }
    }

    for (i=0; i < c-1; i++)if ((prime[i+1] - prime[i]) <= 2) printf("\n%d and %d are twin prime", prime[i], prime[i+1]);
    return 0;
}