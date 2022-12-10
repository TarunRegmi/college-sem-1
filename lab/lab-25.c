/*
    Lab: 25
    Date: 2079-04-20
    C program to find sum of diagonal elements of a matrix.
*/

#include <stdio.h>
#define O 3

int main() {
    int matrix[O][O] = {{2, 4, 6,}, {1, 3, 5}, {8, 7, 9}};
    int i, j, sum = 0;

    for (i=0; i<O; i++) for (j=0; j<O; j++) if (i == j) sum += matrix[i][j];
    printf("\nSum of diagonal element = %d", sum);
    return 0;
}