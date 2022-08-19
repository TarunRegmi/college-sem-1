/*
    Write a C program to test whether the given string is palindrome or not without using string handling function
*/

#include "stdio.h"
#define maxLen 21

int main() {
    char strArray[maxLen];
    int i = 0, strLen = 0;

    printf("\nEnter a string (having length less than %d): ", maxLen-1);
    scanf("%s", strArray);

    while (strArray[strLen] != '\0') strLen++;  // finding length of input string
    while (strArray[i] == strArray[strLen - i - 1]) i++; // checking palindrome

    if (i == strLen) printf("\nPalindrome");
    else printf("\nNot Palindrome");
    return 0;
}