/*
    Lab: 27
    Date: 2079-04-20
    C program that reads two matrices of order 3*3 and find their sum and difference.
*/

#include <stdio.h>
#define O 3

int main() {
    int m1[O][O], m2[O][O], sum[O][O], dif[O][O];
    int i, j;

    printf("\nEnter the elements of two 3x3 matrix\nElements of matrix m1\n");
    for (i=0; i<O; i++) {
        for (j=0; j<O; j++) {
            printf("a%d%d: ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("\nElements of matrix m1\n");
    for (i=0; i<O; i++) {
        for (j=0; j<O; j++) {
            printf("b%d%d: ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }

    for (i=0; i<O; i++) for (j=0; j<O; j++) sum[i][j] = m1[i][j]+m2[i][j];
    for (i=0; i<O; i++) for (j=0; j<O; j++) dif[i][j] = m1[i][j]-m2[i][j];
    
    printf("\nSum of two matrix\n");
    for (i=0; i<O; i++) {
        for (j=0; j<O; j++) printf("   %d ", sum[j][i]);
        printf("\n");
    }

    printf("\nDifference of two matrix\n");
    for (i=0; i<O; i++) {
        for (j=0; j<O; j++) printf("   %d ", dif[j][i]);
        printf("\n");
    }
    return 0;
}