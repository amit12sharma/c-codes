#include <stdio.h>
int main( )
{
   int *p,i;
   int val[7] = { 11, 22, 33, 44, 55, 66, 77 } ;
   p = val;
   for ( int i = 0 ; i<7 ; i++ )
   {
      printf("val[%d]: value is %d\n",i,*(p+i));
   }
   return 0;
}