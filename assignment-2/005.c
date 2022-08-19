/*
    Write a C program that reads N numbers in an array and then find the largest and smallest element
*/

#include "stdio.h"
#define maxNum 6

int main() {
    int totalNum, i = 0, big, small;
    int numbers[maxNum];

    printf("\nHow many number you want to enter? (<%d)\n=> ", maxNum);
    scanf("%d", &totalNum);

    if (totalNum <= maxNum) {
        printf("\nEnter any %d numbers\n", totalNum);
        while (i != totalNum) {
            scanf("%d", &numbers[i]);
            i++;
        }

        big = numbers[0];
        small = numbers[0];
        for (i=0; i < (totalNum - 1); i++) {
            if (big < numbers[i+1]) big = numbers[i+1];
            if (small > numbers[i+1]) small = numbers[i+1];
        }
        printf("\nLargest number = %d\nSmallest number = %d", big, small);
    } else printf("\nOut of range (Ente number less than %d)", maxNum);
    return 0;
}