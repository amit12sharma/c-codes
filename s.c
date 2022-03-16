#include<stdio.h>
int main()
{
    int bs,hra,gs,da;
    printf ("Enter Basic Salary Of Ramesh: ");
    scanf("%d",&bs);
    da = (bs*40)/100;
    hra = (bs*20)/100;
    gs = (bs+hra+da);
    printf("Ramesh's Gross Salary:%d",gs);
    return 0;
}