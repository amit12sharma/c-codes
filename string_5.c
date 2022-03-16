#include<stdio.h>
#include<string.h>
int main()
{
    char name[5][21],i=0,j;
 
    printf("Enter name of five people\n");
    for(i=0;i<5;i++)
    {
        printf("Enter your name:\n");
        scanf("%s",&name[i]);
    }
    printf("\n");
    for(j=0;j<5;j++)
    {
        printf("%s\n",name[j]);
    }
    return 0;
}

/*#include<stdio.h>
int main(void)

{
    char  cName[5][21]= {0};
    int x=0,n;
    int  iPick;
    printf("Enter the number of names of people to store");
    scanf("%d",&n);
    for(x=0;x<=n;x++)
    {
        printf("Enter name %d:", x+1);
        scanf("%s", cName[x]);
        printf("\n\nWould you like to add another name or view current names stored?\n");
        printf("1)\tAdd another name\n");
        printf("2)\tView names stored\n");
        scanf("%d", &iPick);
        switch(iPick)
        {
            case 1:
            break;
            case 2:
            for(x=0;x<n;x++){
                printf("\nName %d is %s\n",x+1, cName[x]);
                }
}
}
return 0;
}*/