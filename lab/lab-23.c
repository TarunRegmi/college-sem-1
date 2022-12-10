/*
    Lab: 23
    Date: 2079-04-13
    C program that reads two words then test if they are same or not.
*/

#include <stdio.h>
int main() {
    char w1[21], w2[21];
    int i = 0;

    printf("\nEnter tow word having word-length < 20\nFirst: ");
    scanf("%s", w1);
    printf("Second: ");
    scanf("%s", w2);

    while (w1[i] != '\0' || w2[i] != '\0') {
        if (w1[i] != w2[i]) {
            printf("\nEntered two word are not same.");
            return 0;
        }
        i++;
    }
    printf("\nEntered two are same.");
    return 0;
}