/*
    Lab: 30
    Date: 2079-04-29
    C program that reads two numbers and find their product using recursive function.
*/

#include <stdio.h>

int product(int, int);

int main() {
    int a, b, s = 1;

    printf("\nEnter Any Two Number\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    printf("\n%d x %d = %d", a, b, s * product(a, b));
    return 0;
}

int product(int a, int b) {
    if (b < 1) return 0;
    else return a + product(a, b-1);
}