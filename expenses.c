#include<stdio.h>
#include<conio.h>
  int main()
{
   int quantity;
   float price,totalexpenses;
   printf("Enter The Quantity Purchased: ");
   scanf("%d",&quantity);
   printf("\nEnter The Price Per Item:");
   scanf("%f",&price);

   if(quantity>10)
  {
      totalexpenses=quantity*price;
      totalexpenses=totalexpenses-(totalexpenses*0.1);
  }
  else
 {
      totalexpenses=quantity*price;
 }
   printf("%f is the total expenses ",totalexpenses);
   return 0;
   getch();
}