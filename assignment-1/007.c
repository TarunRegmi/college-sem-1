// Write a C program to read m and n from user and calculate the value m^n using while loop

#include <stdio.h>
int main() {
    float m, n, reasult = 1;

    printf("\nEnter base: ");
    scanf("%f", &m);
    printf("Enter power: ");
    scanf("%f", &n);

    printf("Value of %f^%f = ", m, n);

    if (m == 0 && n <= 0) {
        printf("Undefine");
        return 0;
    }
    else if (n == 0) reasult = 1;
    else if (n > 0) {
        while (n > 0) {
            reasult *= m;
            n--;
        }
    } else {
        while (n < 0) {
            reasult /= m;
            n++;
        }
    }
    printf("%f", reasult);
    return 0;
}