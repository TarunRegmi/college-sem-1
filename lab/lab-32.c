/*
    Lab: 32
    Date: 2079-04-29
    C program to display elements of array using recursive function.
*/

#include <stdio.h>
void display(int[], int);

int main() {
    int array[] = {8, 3, 6, 4, 6, 1, 7, 9, 0};
    printf("\nElement of the array: ");
    display(&array[0], (int)sizeof(array)/sizeof(array[0]));
    return 0;
}

void display(int arr[], int n) {
    for (int i=0; i<n; i++) printf("%d, ", arr[i]);
}