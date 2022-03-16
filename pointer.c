#include<stdio.h>

void main()
{
    int a = 76;
    int *ptr = &a;
    printf("Aatif\n");
    printf("Value ofa %d\n",a);
    printf("Address of a %x\n",ptr);
    printf("Address of a %p\n",ptr);
    printf("Address of a %x\n",*ptr);
    printf("Address of a %x\n",&a);
    printf("Address of a %x\n",&ptr);
}
