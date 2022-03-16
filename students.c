#include<stdio.h>

int main()
{
    int *ptr,p;

    p = *(++ptr);
    printf("%d %d",p,ptr);
    
    return 0;
}