#include<stdio.h>

int main()
{
    // type def use in c.
    typedef int* intptr;
    printf("Amit\n");
    intptr a,b,c;
    b = &a;
    c = &b;
   
    printf("%d %d",a,b);
    return 0;
}
