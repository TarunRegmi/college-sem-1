/*
    Lab: 24
    Date: 2079-04-13
    C program to find transpose of a matrix.
*/

#include <stdio.h>
#define O 3

int main() {
    int matrix[O][O] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;

    printf("\nTranspose Matrix\n");
    for (i=0; i<O; i++) {
        for (j=0; j<O; j++) printf("   %d ", matrix[j][i]);
        printf("\n");
    }
    return 0;
}