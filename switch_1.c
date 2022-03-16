#include<stdio.h>
#include<conio.h>
  int main()
 {
      int num,choice,fact=1,i,count=0;
      printf("Press 1 for Factorial of a number");
      printf("\nPress 2 for Prime number or not");
      printf("\nPress 3 for Odd or Even number");
      printf("\nPress 4 for Exit");
      printf("Enter Any Number: ");
      scanf("%d",&num);
      printf("\nEnter Your Choice: ");
      scanf("%d",&choice);
switch(choice)
{
     case 1: 
       for(i=1;i<=num;i++)
{
         fact=fact*i;
   }
       printf("\nFactorial of entered integer: %d",&fact);
       break;
    case 2:
       for(i=2;i<=num;i++)
{
   if(num%i==0)
{
printf("\n is not a prime num");
}
if(num%i==1)
{
printf("it is a prime number");
}
}
break;
case 3:
if(num%2==0)
{
printf("it is even number");
}
else
{
printf("it is odd number");
}
break;
case 4:
exit(0);
break;
}
return 0;
}