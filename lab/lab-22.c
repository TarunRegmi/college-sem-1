/*
    Lab: 22
    Date: 2079-04-13
    C program that reads a word then find number of vowels.
*/

#include <stdio.h>
int main() {
    char w[50];
    int i = 0, vowel = 0;

    printf("\nEnter a word: ");
    scanf("%s", w);

    while (w[i] != '\0') {
        if (w[i]=='a' || w[i]=='A' || w[i]=='e' || w[i]=='E' || w[i]=='i' || w[i]=='I' || w[i]=='o' || w[i]=='O' || w[i]=='u' || w[i]=='U') vowel++;
        i++;
    }

    printf("\nNo of vowels = %d", vowel);
    return 0;
}