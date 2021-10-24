// find out greatest of three using ternary operator
// ternary operator : (expression) ? (if true) : (if false)
#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three numbers separated by spaces : ");
    scanf("%d %d %d",&a,&b,&c);
    max = (a>b)?(a>c?a:c):(b>c?b:c);
    printf("Greatest of three is %d",max);
    return 0;
}