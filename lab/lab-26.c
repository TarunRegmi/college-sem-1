/*
    Lab: 26
    Date: 2079-04-20
    C program to find row-wise sum and column wise sum.
*/

#include <stdio.h>
#define O 3

int main() {
    int matrix[O][O] = {{2, 4, 6,}, {1, 3, 5}, {8, 7, 9}};
    int i, j, rs = 0, cs = 0;

    printf("\nSum Of\n");
    for (i=0; i<O; i++) {
        for (j=0; j<O; j++) {
            rs += matrix[i][j];
            cs += matrix[j][i];
        }
        printf("R%d = %d\n", i+1, rs);
        printf("C%d = %d\n", i+1, cs);
        rs = 0;
        cs = 0;
    }
    return 0;
}