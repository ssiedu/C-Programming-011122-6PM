#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	float salary;
}e1,e2;
void main()
{
	//struct employee e1,e2;
	e1.id=101;
	strcpy(e1.name,"Ram");
	e1.salary=45000;
	
	e2.id=102;
	strcpy(e2.name,"shyam");
	e2.salary=76000;
	
	printf("\n Employee Id : %d",e1.id);
	printf("\n Employee Name : %s",e1.name);
	printf("\n Employee salary : %.2f",e1.salary);
	
	printf("\n Employee Id : %d",e2.id);
	printf("\n Employee Name : %s",e2.name);
	printf("\n Employee salary : %.2f",e2.salary);
	getch();
}
