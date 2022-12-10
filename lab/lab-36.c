/*
    Lab: 36
    Date: 2079-04-03
    C program to write line of text to a file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *file;
    file = fopen("line.txt", "w");
    if (file == NULL) exit(1);
    
    char line[150];
    printf("\nEnter a few lines of text:\n");
    while (strlen(gets(line)) > 0) {
        fputs(line, file);
        fputs("\n", file);
    }
    fclose(file);
    return 0;
}