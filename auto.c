#include<stdio.h>

int sum(int a,int b)
{
    auto int s;
    printf("enter number a:");
    scanf("%d",&a);
    printf("enter number a:");
    scanf("%d",&b);
    s=a+b;
    printf("%d",s);
    return s;
}

int main()
{
    int a,b;
    auto int s=sum(3,4);
    printf("Aatif\n");
    printf("%d",s);
    return 0;
}
