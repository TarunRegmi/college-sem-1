// Write a program to display all prime numbers between n1 and n2 where n1 and n2 are integers and are user input

#include <stdio.h>
int main() {
    int n1, n2, i, j, tmp;

    printf("\nEnter Starting Number: ");
    scanf("%d", &n1);
    printf("Enter Ending Number: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        tmp = n2;
        n2 = n1;
        n1 = tmp;
    }

    printf("\nPrime Number From %d to %d\n", n1, n2);

    if (n1 < 1) n1 = 1;
    if (n2 == 2) {
        printf("2");
        return 0;
    }

    for (i=n1; i <= n2; i++) {
        for (j=2; j < i; j++) if ((i % j) == 0) break;
        if (i == j) printf("%d\n", i);
    }
    return 0;
}