//wap to read the value of using scaf and assigining hem two stucture variable
#include<stdio.h>
#include<string.h>
struct student
{
    int age;
    int marks;
};
struct student s1,s2;

int main()
{
    printf("Enter the age:\n");
    scanf("%d",&s1.age);
    printf("Age = %d",s1.age);
    return 0;
}