/*
    Lab: 38
    Date: 2079-04-03
    C program that copies contents of one file to another file.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *line, *lineC;
    line = fopen("./line.txt", "r");
    if (line == NULL) exit(1);
    lineC = fopen("./line-copy.txt", "w");
    if (line == NULL) exit(2);

    char c;
    while (1) {
        c = fgetc(line);
        if (c == EOF) break;
        else fputc(c, lineC);
    }

    fclose(line);
    fclose(lineC);
    return 0;
}