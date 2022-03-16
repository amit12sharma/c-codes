#include<stdio.h>

int main()
{
    // type def use in c.
    typedef int* intptr;
    intptr a,b,c;
    b = &a;
    c = &b;
    printf("%d %d",a,b);
    return 0;
}