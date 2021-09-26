#include<stdio.h>
struct Employee
{
char Name[30];
int Age;
int Phno;
char Dept[20];
int Salary;
};
void main()
{
int i,n;
struct Employee Emp[ 20 ];  
printf("\nENTER THE NUMBER OF EMPLOYEES: ");
scanf("%d",&n); 
for(i=0;i<n;i++)
{
printf("\nENTER NAME : ");
scanf("%s",&Emp[i].Name);
printf("ENTER DEPATRMENT : ");
scanf("%s",&Emp[i].Dept);
printf("ENTER AGE : ");
scanf("%d",&Emp[i].Age);
printf("ENTER PHNO : ");
scanf("%d",&Emp[i].Phno);
printf("ENTER SALARY : ");
scanf("%d",&Emp[i].Salary);
}
printf("\n----------------------------\n");
printf("DETAILS OF EMPLOYEES\n");
printf("----------------------------\n");
for(i=0;i<n;i++)
{ 
 printf("\nNAME:%s\nDEPARTMENT:%s\nAGE:%d\nPHNO:%d\nSALARY:%d",Emp[i].Name,Emp[i].Dept,Emp[i].Age,Emp[i].Phno,Emp[i].Salary);
}
}
