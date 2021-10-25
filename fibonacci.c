// generate fibonacci numbers of N numbers
#include <stdio.h>
int main() {
    int n, i, a, b;
    scanf("%d", &n);
    a = 0; // first number
    b = 1; // second number
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        a = a + b; // next number is sum of previous two
        b = a - b; // current number is difference of current and next
    }
    return 0;
}