#include <stdio.h>
int main()
{
  int n, i;
  printf("Amit\n");
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d %d\n",i,i*i);
  }
  return 0;
}
