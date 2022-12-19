#include<stdio.h>
#include<string.h>
union Employee
{
	int id;
	char name[20];
	float sal;
}e;
void main()
{
	e.id=101;
	printf("\n Employee Id : %d",e.id);
	strcpy(e.name,"Ram");
	printf("\n Employee name : %s",e.name);
	e.sal=45000;
	printf("\n Employee sal : %.2f",e.sal);
	
	printf("\n size of union : %d",sizeof(e));
	
	getch();
}
