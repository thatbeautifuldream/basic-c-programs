// check if a number is palindrome or not
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int rev = 0, temp = n;
    while (n > 0) {
        int dig = n % 10; // get the last digit
        rev = rev * 10 + dig; // reverse the number
        n = n / 10; // remove the last digit
    }
    printf("The reverse of the number %d is %d. The number is %s", temp, rev, (temp == rev) ? "palindrome." : "not palindrome.");
    return 0;
}