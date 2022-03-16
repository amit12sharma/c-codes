#include<stdio.h>

int main()
{
    int *ptr,p;
    printf("Amit\n");
    p = *(++ptr);
    printf("%d %d",p,ptr);
    
    return 0;
}
