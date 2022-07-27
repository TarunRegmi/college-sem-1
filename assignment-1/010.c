/*
    Write a program to print the following pattern:
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5
*/

#include <stdio.h>
#define R 5

int main() {
    int i, j, k, r, c=0;

    for (i=1; i <= R; i++) {
        k = 0;
        printf("\t");
        for (j=R; j > i; j--) printf("  ");
        for (j=1; j <= (i+c); j++) {
          if (j <= i) r = k+i;
          else r--;
          printf("%d ", r);
          k++;
        }
        c++;
        printf("\n");
    }
}