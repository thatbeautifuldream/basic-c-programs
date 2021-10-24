// take marks of 5 subjects and calculate aggregate and display class
// and percentage
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggregate,percentage;
    printf("enter marks of 5 subjects\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    aggregate=m1+m2+m3+m4+m5;
    percentage=(aggregate/500)*100;
    printf("aggregate=%d \n percentage=%d",aggregate,percentage);
    if(percentage>=90)
    {
        printf("\n grade A");
    }
    else if(percentage>=80)
    {
        printf("\n grade B");
    }
    else if(percentage>=70)
    {
        printf("\n grade C");
    }
    else if(percentage>=60)
    {
        printf("\n grade D");
    }
    else
    {
        printf("\n grade E");
    }
    return 0;
}