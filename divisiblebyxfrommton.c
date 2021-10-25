// c program to find the number of divisible by x from m to n
#include <stdio.h>
int main() {
    int m, n, x, count = 0;
    printf("Enter the value of m, n and x: ");
    scanf("%d %d %d", &m, &n, &x);
    for (int i = m; i <= n; i++) {
        if (i % x == 0) // if i is divisible by x
            count++; // increase count
    }
    printf("The numbers divisible by %d from %d to %d is %d", x, m, n, count);
    return 0;
}