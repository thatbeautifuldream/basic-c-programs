// even odd using ternary operator
#include <stdio.h>      
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %s\n",n ,(n%2==0)?"Even":"Odd");
    return 0;
}