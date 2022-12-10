/*
    Lab: 37
    Date: 2079-04-03
    C program that reads line of text from file.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    file = fopen("./line.txt", "r");
    if (file == NULL) exit(1);

    char line[150];
    while (fgets(line, 149, file) != NULL) printf("%s", line);
    fclose(file);
    return 0;
}