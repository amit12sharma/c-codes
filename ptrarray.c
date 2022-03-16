#include<stdio.h>

void main()
{
    int arr[]={1,2,3,4,5,6};
    int *ptr=&arr;
    printf("Value of position %d\n",arr[2]);
    printf("Value of position %d\n",&arr[2]);
    printf("Value of position %d\n",&arr[2]+1);

    printf("Value of position %d\n",*ptr);
    printf("Value of position %d\n",*(&arr[2]));
    printf("Value of position %d\n",*(arr));
    printf("Value of position %d\n",*(arr+1));
}