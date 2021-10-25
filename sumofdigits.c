// c program to find sum of digits of a number
#include <stdio.h>
int main()
{
    int n, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) // loop until n becomes 0
    {
        rem = n % 10; // get Remainder
        sum = sum + rem; // add Remainder to sum
        n = n / 10; // get next digit
    }
    printf("Sum of digits of the number is %d", sum);
    return 0;
}