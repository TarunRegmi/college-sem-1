/*
    A number is called strong if it is equal to sum of factorial of its digits is equal to number itself. For example, the 145 is strong number because 145 = 1!+4!+5!. Write a C program that reads a number and tests whether it is strong or not
*/

#include <stdio.h>
int main() {
    int i, n, orgN, d, f, s=0;

    printf("\nEnter Any Number: ");
    scanf("%d", &n);
    orgN = n;
    
    while (n > 0) {
        d = n % 10;
        f = 1;
        for (i=d; i > 0; i--) f *= i;
        s += f;
        n /= 10;
    }
    
    if (orgN == s) printf("\nNumber %d is strong number.", orgN);
    else printf("\nNumber %d is not strong number.", orgN);
    return 0;
}