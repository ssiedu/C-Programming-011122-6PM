#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;
};
void main()
{
	struct employee e1;
	printf("\n Enter Employee Information : \n");
	printf("\n Enter Employee Id : ");
	scanf("%d",&e1.id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&e1.name);
	printf("\n Enter Employee Salary : ");
	scanf("%f",&e1.salary);
	
	
	printf("\n Details of Employee : \n");
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee Salary : %.2f",e1.salary);
	
	getch();
}
