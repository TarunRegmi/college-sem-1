/*
    Lab: 12
    Date: 2079-03-24
    C program that reads a numbers and tests whether it is palindrome or not.
*/

#include <stdio.h>
int main() {
    int num, revNum = 0;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    int orgNum = num;
    while (num != 0) {
        revNum = revNum * 10 + num % 10;
        num /= 10;
    }

    if (revNum == orgNum) printf("\nEntered number is palindrome");
    else printf("\nEntered number is not palindrome");
    return 0;
}