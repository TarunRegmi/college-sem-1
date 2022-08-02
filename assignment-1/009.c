/*
    Write C program that prints first 20 Fibonacci numbers.

    Used Variables:
    pre0        n-2'th term
    pre1        n-1'th term
    tn          n'th term
*/

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