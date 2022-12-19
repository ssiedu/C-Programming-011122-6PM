#include<stdio.h>
typedef struct employee
{
	int id;
	char name[20];
	float sal;
}emp;
void main()
{
	emp e[10];
	int i;
	
	printf("\n Enter Employee Information : \n");
	for(i=0;i<3;i++)
	{
		printf("\n Employee %d : ",i+1);
		printf("\n Enter Employee Id : ");
		scanf("%d",&e[i].id);
		printf("\n Enter Employee Name : ");
		scanf("%s",e[i].name);
		printf("\n Enter Employee Salary : ");
		scanf("%f",&e[i].sal);
	}
	
	printf("\n Deatils of Employee : \n");
	for(i=0;i<3;i++)
	{
		printf("\n Employee %d : ",i+1);
		printf("\n Employee Id : %d",e[i].id);
		printf("\n Employee Name : %s",e[i].name);
		printf("\n Employee salary : %.2f",e[i].sal);
		
	}
	getch();
}
