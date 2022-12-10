/*
    Lab: 28
    Date: 2079-04-20
    C program to find sum and product of two 3*3 matrices.
*/

#include "stdio.h"

int main() {
    int i, j, k, el;
    int mt1[3][3], mt2[3][3];
    
    printf("\nEnter Element Of 3x3 Matrix\n");
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("a%d%d: ", i+1, j+1);
            scanf("%d", &mt1[i][j]);
        }
        printf("\n");
    }
    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("b%d%d: ", i+1, j+1);
            scanf("%d", &mt2[i][j]);
        }
        printf("\n");
    }

    printf("\nSUM:\n");
    for (i=0; i < 3; i++) {
        printf("| ");
        for (j=0; j < 3; j++) printf("%4d ", mt1[i][j]+mt2[i][j]);
        printf("|\n");
    }

    printf("\nMULTIPLICATION:\n");
    for (i=0; i < 3; i++) {
        printf("| ");
        for (j=0; j < 3; j++) {
            el = 0;
            /*
                first metrix => same row, column change
                second metrix => change row, same column
            */
            for (k=0; k < 3; k++) el += mt1[i][k]*mt2[k][j];
            printf("%4d ", el);
        }
        printf("|\n");
    }
    return 0;
}