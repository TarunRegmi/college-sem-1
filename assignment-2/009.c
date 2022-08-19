/*
    Write a C program that reads two words and concatenate them
*/

#include "stdio.h"
#define L 15

int main() {
    char word1[L+1], word2[L+1], result[2*L+2];
    int i = 0, j;

    printf("\nEnter two word having length less than %d each\n", L);
    fgets(word1, L, stdin);
    fgets(word2, L, stdin);

    while (word1[i] != '\0') {
        result[i] = word1[i];
        i++;
    }
    result[i] = ' ';
    j = i+1;
    i = 0;

    while (word2[i] != '\0') {
        result[j] = word2[i];
        i++;
        j++;
    }

    printf(result);
    return 0;
}