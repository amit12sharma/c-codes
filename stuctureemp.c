//wap to create stucture of employee containing the following data member -employe id,employee name ,age , address,department and salary. input data for 10 employees and display the details of the employee from the empploye id given by the user.
#include<stdio.h>
#include<stdlib.h>
struct details
{
     char name[30];
     int eid;
     int salary;
     int age;
     char department[40];
     char address[40];
}emp[8];
void emp_search(int r)
{
     int id,i;
     printf("\nEnter Employee-Id to be Searched : ");
     scanf("%d",&id);
     printf("----------------------------------------\n");
     for(i=0;i<r;i++)
     {
          if(emp[i].eid==id)
          {
               printf("Employee Id : %d",emp[i].eid);
               printf("\nName        : %s",emp[i].name);
               printf("\nSalary      : %d\n",emp[i].salary);
               printf("\nAge      : %d\n",emp[i].age);
               printf("\nDepartment      : %s\n",emp[i].department);
               printf("\nAddress      : %s\n",emp[i].address);
          }
     }
}
void display(int r)
{
     int i;
     printf("\nList of All Employees:\n");
     printf("-------------------------------\n");
     printf("Emp-Id\tEmp-Name  Salary  Age   Depatment  Address\n");
     printf("--------------------------------\n");
     for(i=0;i<r;i++)
     {
          printf("%d\t%s\t  %d %d\t %s\t %s\n",emp[i].eid,emp[i].name,emp[i].salary,emp[i].age,emp[i].department,emp[i].address);
     }
}

int main()
{
     int n,i,ch;
     printf("/*How Many Employee Record You Want to Add*/\n\nEnter Limit  : ");
     scanf("\n %d",&n);
     for(i=0;i<n;i++)
     {
          printf("-----------------------------------------");
          printf("\n\tEnter Details of Employee-%d",i+1);
          printf("\n-----------------------------------------");
          printf("\nName of Employee : ");
          scanf("%s",emp[i].name);
          printf("Employee-Id      : ");
          scanf("%d",&emp[i].eid);
          printf("Salary : ");
          scanf("%d",&emp[i].salary);
          printf("Age : ");
          scanf("%d",&emp[i].age);
          printf("Department : ");
          scanf("%s",&emp[i].department);
          printf("Address : ");
          scanf("%s",&emp[i].address);
     }
     while(1)
     {
          printf("-----------------------------------------\n");
          printf("\t\tMenu\n");
          printf("-----------------------------------------");
          printf("\n 1:Search Employee by E-ID");
          printf("\n 2:List of All Employee");
          printf("\n 3:Exit");
          printf("\n----------------------------------------\n");
          printf("Enter Your Choice : ");
          scanf("\n %d",&ch);
          switch(ch)
          {
               case 1: emp_search(n);
               break;
               case 2: display(n);
               break;
               case 3: exit(0);
          }
     }
     return 0;
}