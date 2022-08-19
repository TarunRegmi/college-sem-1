/*
    Write a C program that reads a line of texts and find number of words and spaces
*/

#include "stdio.h"
#define L 200

int main() {
    char line[L];
    int i = 0, space = 0, word = 0, tab = 0;

    printf("\nEnter a line (length less than %d)\n", L);
    fgets(line, L, stdin);

    while (line[i] != '\0') {
        if (line[i] == ' ') space++;
        else if (line[i] == '\t') tab++;
        else if (line[i+1] == ' ' || line[i+1] == '\t' || line[i+1] == '\0') word++;
        i++;
    }

    printf("\n%d space", space);
    printf("\n%d tab", tab);
    printf("\n%d word", word);
    return 0;
}