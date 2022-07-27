// Write C program that prints first 20 Fibonacci numbers.

#include <stdio.h>
int main() {
    int i, pre0, pre1, tn=2;

    for (i=1; i <= 20; i++) {
        if (i > 2) {
            tn = pre0 + pre1;
            pre0 = pre1;
            pre1 = tn;
        } else {
            tn = tn;
            pre0 = tn;
            pre1 = tn;
        }
        printf("%d ", tn);
    }
    return 0;
}