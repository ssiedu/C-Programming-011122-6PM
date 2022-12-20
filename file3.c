#include<stdio.h>
void main()
{
	int id;
	char name[20];
	float sal;
	FILE *fp;
	fp=fopen("EMP.txt","a");
	printf("\n Enter Employee Id : ");
	scanf("%d",&id);
	fprintf(fp,"Id=%d\n",id);
	printf("\n Enter Employee Name : ");
	scanf("%s",&name);
	fprintf(fp,"Name = %s\n",name);
	printf("\n Enter Employee salary : ");
	scanf("%f",&sal);
	fprintf(fp,"salary=%.2f\n",sal);
	fclose(fp);
	getch();
}
