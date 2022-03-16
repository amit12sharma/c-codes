#include<stdio.h>
#include<string.h>

int main(){
    char st[30] = "Amit ", st2[40] = "Sharma";
    strcat(st,st2);
    printf("Concatenated string = %s", st);
return 0;
}
