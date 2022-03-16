#include<stdio.h>

int main()
{
    int a = 2, *p, **q;
    p=&a;
    q=&p;
    printf("Value of a=%d address of a = %u\n",a,&a);
    printf("Value of a=%d address of a = %u\n",p,&p);
    printf("Value of a=%d address of a = %u\n",*p,&p);
    printf("Value of **q a=%d address of a = %d\n",**q,*q);
}
