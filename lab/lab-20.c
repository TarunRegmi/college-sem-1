/*
    Lab: 20
    Date: 2079-04-06
    C program that reads 10 numbers and sort them in ascending order.
*/

#include <stdio.h>
#define L 10

int main() {
    int i, j, small, num[L];

    printf("\nEnter 10 Different Numbers\n");
    for (i=0; i<L; i++) scanf("%d", &num[i]);
    
    for (i=0; i<L; i++) {
        for (j=i+1; j<L; j++) {
            if (num[i] > num[j]) {
                small = num[j];
                num[j] = num[i];
                num[i] = small;
            }
        }
    }

    printf("\nEntered Number In Ascending Order\n");
    for (i=0; i<L; i++) printf("%d ", num[i]);
    return 0;
}