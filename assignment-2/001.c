/*
    Write a C program to read a character array in inputs as “TRIBHUVAN UNIVERSITY” from the user and find out how many times a character “I” occur in that array?
*/

#include "stdio.h"
int main() {
    char charArray[21];
    printf("\nEnter \"TRIBHUVAN UNIVERSITY\": ");
    fgets(charArray, 21, stdin);
    int i = 0, apperence_I = 0;
    while (charArray[i] != '\0') {
        i++;
        if (charArray[i] == 'I' || charArray[i] == 'i') apperence_I++;
    }
    printf("\nApperenc of \"I\" in \"%s\" = %d\n\n", charArray, apperence_I);
}