// C Program To Calculate Factorial Of A Number

#include <stdio.h>
int main() {
    int number, factorial = 1;

    printf("\nEnter a number: ");
    scanf("%d", &number);
    printf("\nFactorial Of %d = ", number);

    for (int i=number; i > 0; i--) {
        factorial *= number;
        number--;
    }

    printf("%d\n", factorial);
    return 0;
}