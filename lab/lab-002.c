/*
    Lab: 2
    Date: 2079-03-10
    Write a C program that reads Principal, Time and Rate from user and find Simple Interest.
*/

#include "stdio.h"
int main() {
    int p, t, r, si;

    printf("\nEnter Principal: ");
    scanf("%d", &p);
    printf("\nEnter Time: ");
    scanf("%d", &t);
    printf("\nEnter Rate: ");
    scanf("%d", &r);

    si = p * t * r * 0.01;
    printf("\nSimple Interest = %d", si);
    return 0;
}