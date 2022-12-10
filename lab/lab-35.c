/*
    Lab: 35
    Date: 2079-04-03
    C program that reads ‘N’ numbers and sort them in ascending order..
*/

#include <stdio.h>
#define N 10

int main() {
    int numbers[N], i, j, big;

    printf("\nEnter any %d numbers\n");
    for (i=0; i < N; i++) scanf("%d", &numbers[i]);

    for (i=0; i < N-1; i++) {
        for (j=i+1; j < N; j++) {
            if (numbers[i] > numbers[j]) {
                big = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = big;
            }
        }
    }
    printf("\nAscending Ordered: ");
    for (i=0; i < N; i++) printf("%d ", numbers[i]);
    return 0;
}