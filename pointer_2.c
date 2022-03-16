#include<stdio.h>

void main()
{
    int a=34;
    int *ptr=&a;
    printf("Address of a %d\n",ptr);
    printf("Address of a %d\n",ptr+1);
    printf("Address of a %d\n",ptr+2);
    printf("Address of a %d\n",ptr-1);
    printf("Address of a %d\n",ptr-2);

}