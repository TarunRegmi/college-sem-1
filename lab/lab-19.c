/*
    Lab: 19
    Date: 2079-04-06
    C program that reads 10 numbers and find the largest number.
*/

#include <stdio.h>
int main() {
    int x, big = 0;

    printf("\nEnter 10 different numbers\n");
    for (int i=0; i<=10; i++) {
        scanf("%d", &x);
        if (big < x) big = x;
    }
    
    printf("\nLargest number = %d", big);
    return 0;
}