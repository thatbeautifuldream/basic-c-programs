// c program to traverse through an array using pointer
// (absolute traversal and relative traversal)
/*
Pointers theory :
*p = Target value
p = Target Address
&p = Pointer Address
*/
#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50},i,*p = a,*q=a;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *p++); // absolute traversal
    }

    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\n", *(a+i)); // relative traversal (you dont have to flush the pointer)
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\n", *a++);
    //     /*
    //     error: lvalue required as increment operand
    //      printf("%d\n", *a++); // l value error in absolute traversal
    //     */
    // }

    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\n", p[i]); // all arrays are pointers but not all pointers are arrays
    // }
    return 0;
}