#include<stdio.h>
#include<string.h>

int main(){
    char st[30] = "Aatif ", st2[40] = "Khan";
    strcat(st,st2);
    printf("Concatenated string = %s", st);
return 0;
}