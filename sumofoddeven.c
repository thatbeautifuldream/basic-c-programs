// find out the sum of all odd and even numbers in an array
#include <stdio.h>
int main() {
    int n, i, sum_odd = 0, sum_even = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum_even += a[i];
        } else {
            sum_odd += a[i];
        }
    }
}