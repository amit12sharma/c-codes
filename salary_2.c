#include<stdio.h>
int main()
  {
    int bs;
    float da,hra,Gs;    
    printf ("Enter Basic Salary Of Ramesh: ");
    scanf("%d",&bs);
    da=(bs*40)/100;
    hra=(bs*20)/100;
    Gs = (bs+da+hra);
    
    printf("Ramesh's Gross Salary:%d",Gs);
    return 0;
  }