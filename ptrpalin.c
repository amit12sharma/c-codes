#include <stdio.h>
#include<string.h>
 
int main()
{
    char a[20], c;

    printf("Amit\n");
    puts("enter the string");
    gets(a);
    c = *a;
    strrev(a);
    if (c == *a)
    {
        puts("Given string is palindrome.");
    }
    else{
        puts("Given string is not palindrome.");
    }
    
    return 0;
}
