/*
    Write a C program that reads a 3*3 matrix and finds the sum of diagonal elements and non-diagonal elements
*/

#include "stdio.h"
#define rc 3

int main() {
    int i, j, matrix[rc][rc], sum_d = 0, sum_nd = 0;

    printf("\nEnter element of %dx%d matrix\n");
    for (i=0; i < rc; i++) {
        for (j=0; j < rc; j++) {
            printf("a%d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }

    for (i=0; i < rc; i++) {
        for (j=0; j < rc; j++) {
            if (i != j) sum_nd += matrix[i][j];
            else sum_d += matrix[i][j];
        }
    }

    printf("\nSum of diagonal elements = %d\nSum of non diagonal elements = %d", sum_d, sum_nd);
    return 0;
}