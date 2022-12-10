/*
    Lab: 9
    Date: 2079-03-24
    C program that reads a number (1-7) and then prints the name of the day associated with that number.
*/

#include <stdio.h>
int main() {
    int index;

    printf("\nEntre number (1-7): ");
    scanf("%d", &index);

    switch (index) {
        case 1: printf("Sunday");break;
        case 2: printf("Monday");break;
        case 3: printf("Tuesday");break;
        case 4: printf("Wednesday");break;
        case 5: printf("Thursday");break;
        case 6: printf("Friday");break;
        case 7: printf("Saturday");break;
        default: printf("Please enter number from 1 to 7");break;
    }
    return 0;
}