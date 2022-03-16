#include<stdio.h>

void main()
{
    int x[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j,r,c=3;
    printf("Array element\n");
    r = sizeof(x)/(c*sizeof(int));
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%4d",x[i][j]);
        printf("\n");
    }
    
}
